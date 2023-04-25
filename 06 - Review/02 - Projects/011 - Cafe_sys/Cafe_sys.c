#include <stdio.h>
#include <conio.h>

#define MAX_LENGTH              25
#define OVERNIGHT_DELIVERY      5.0f
#define ITEM_SHIPPING_1         2.0f
#define ITEM_SHIPPING_2         3.0f

typedef struct{
    char m_name[MAX_LENGTH];
    float m_price;
}Item_t;

Item_t EnterItem(void);
void PrintCheck(Item_t*, int, int);

void main(void){
    Item_t item_arr[MAX_LENGTH];
    int num = 0, delivery;

    do{
        item_arr[num++] = EnterItem();
        printf("Any other order.\tPress (c) continue : ");
        fflush(stdout); fflush(stdin);
    }while(getche() == 'c');

    printf("\nOvernight delivery (0 = No, 1 = Yes) : ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &delivery);

    PrintCheck(item_arr, num, delivery);

}

Item_t EnterItem(void){
    Item_t ret;

    printf("\nEnter the item name or description : ");
    fflush(stdout); fflush(stdin);
    gets(ret.m_name);

    printf("Enter the price ($) : ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &ret.m_price);

    return ret;
}

void PrintCheck(Item_t* items_ptr, int num, int delivery){
    float total = 0;
    float shipping = 0;

    printf("Invoice (in $) : \n");
    while(num--){
        total += items_ptr->m_price;
        shipping += (items_ptr->m_price >= 10) ?  ITEM_SHIPPING_2 : ITEM_SHIPPING_1;

        printf("[%-25s]\t\t:[%05.2f]\n", items_ptr->m_name, items_ptr->m_price);
        items_ptr++;
    }
    if(delivery % 2){
        shipping += OVERNIGHT_DELIVERY;
    }

    printf("=======================================================\n");
    printf("shipping\t\t\t\t:[%05.2f]\n", shipping);
    printf("total   \t\t\t\t:[%05.2f]\n", total + shipping);
    printf("=======================================================\n");
}
