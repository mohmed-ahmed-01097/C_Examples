#include <stdio.h>
#include <stdint.h>
#include <conio.h>

typedef struct DataSet{
	int8_t  data1;
	int32_t data2;
	int8_t  data3;
	int16_t data4;
}DataSet_t;

void displayMemberElements(struct DataSet* data);

int main(void){
	struct DataSet data;
	data.data1  = 0x11;
	data.data2  = 0XFFFFEEEE;
	data.data3  = 0x22;
	data.data4  = 0xABCD;

	displayMemberElements(&data);

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}

void displayMemberElements(struct DataSet* data){
	printf("data1 = %X\n",data->data1);
	printf("data2 = %X\n",data->data2);
	printf("data3 = %X\n",data->data3);
	printf("data4 = %X\n",data->data4);
}
