#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include "console.h"
#include "record.h"

static File_tstrPatient patient;

/*******************************************************************************************/
static inline void Display_Clear(void){ system("cls"); } // Clear the console screen
static inline void Display_Bar(void){
    printf("\n\t==================================================="
           "===================================================\n");
    printf("\t==================================================="
           "===================================================\n");
}
static inline void Display_End(void){
    printf("\n\t==================================================="
           "===================================================\n");
    printf("\t================================================="
           "=================================== Esc for return ==\n");
}
static inline void Display_print(int8_t *str){
    printf("\n\t\t\t%s", str);
}
static inline void Display_Latch(void){
    printf("\n\t\t\t\t\t\t\t\t\tPress any key to continue.");
    getch();
}
static inline void Display_goto(uint8_t x, uint8_t y){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // Get the console output handle
    COORD cursorPosition;
    cursorPosition.X = x; // Column position (0-based index)
    cursorPosition.Y = y; // Row position (0-based index)

    SetConsoleCursorPosition(consoleHandle, cursorPosition); // Set the cursor position
}
/*******************************************************************************************/
int8_t Display_Pass(void){
    int8_t str[10], input = '\0';
    Display_Clear();
    Display_Bar();
    Display_print((int8_t*)"Enter the password [max length 10]: \n");
    Display_End();

    Display_goto(60, 4);
    for(int8_t i = 0 ; i<10 && input!='\r' ; ){
        switch(input = getch()){
            case ESC :   return 1;
            case 0   :   fflush(stdin);                 break;
            case '\b':   printf("\b \b"); i--;          break;
            case '\r':   str[i++] = '\0';               break;
            default:    str[i++] = input; printf("#");  break;
        }
    }
    input = (int8_t)strcmp((const char*)str, (const char*)ADMIN_PASS);
    printf("\b\tYour password is : %s ", input ? "Not Correct" : "Correct");
    for(uint32_t i = 0x3fffffff ; i ; i--);
    return input;
}
void Display_Add(void){
    uint16_t age;
    static char name[50];

    Display_Clear();
    Display_Bar();
    printf("\n\n\n\n\n\n\n\n\n");
    Display_End();
    Display_goto(0, 3);

    Display_print((int8_t*)"\tEnter Patient Name  :");
    fflush(stdout); fflush(stdin);
    gets(name);
    patient.m_name = (int8_t*)name;
    Display_print((int8_t*)"\tEnter Patient Age   :");
    fflush(stdout); fflush(stdin);
    scanf("%hu", &age);
    patient.m_age = (uint8_t)age;
    Display_print((int8_t*)"\tEnter Patient Gender:");
    fflush(stdout); fflush(stdin);
    scanf("%c", &patient.m_gender);
    while(1){
        Display_goto(0, 9);
        Display_print((int8_t*)"\tEnter Patient ID    :");
        printf("     \b\b\b\b\b");
        fflush(stdout); fflush(stdin);
        scanf("%hu", &patient.m_id);
        if(File_Add(&patient)){
            break;
        }else{
            printf("\n\t\t\t\t\t\t\t\t\tID is already Found.      ");
            continue;
        }
    }
}
void Display_ID(void){

    Display_Clear();
    Display_Bar();
    printf("\n\n\n\n\n\n\n");
    Display_End();
    Display_goto(0, 3);

    Display_print((int8_t*)"\tEnter Patient ID (5Digit):");
    fflush(stdout); fflush(stdin);
    scanf("%hu", &patient.m_id);

    File_View(&patient);
}
/*******************************************************************************************/
void Display_Init(void){
    uint8_t input;

    while(1){
        Display_Clear();
        Display_Bar();

        Display_print((int8_t*)"Choose the Operation Mode : \t(1- Admin Mode.   \t2- User  Mode.)\n");

        Display_End();
        switch(input = getch()){
            case ESC:   break;
            case '1':   Display_Admin(); continue;
            case '2':   Display_User (); continue;
            default:    continue;
        }
        break;
    }
}
void Display_Admin(void){
    int8_t input;

    if(Display_Pass()){return;}

    while(1){
        Display_Clear();
        Display_Bar();

        Display_print((int8_t*)"\t1- Add new patient record.\n");
        Display_print((int8_t*)"\t2- Edit patient record.\n");
        Display_print((int8_t*)"\t3- Reserve a slot with the doctor.\n");
        Display_print((int8_t*)"\t4- Cancel reservation.\n");

        Display_End();
        switch(input = getch()){
            case ESC:   break;
            case '1':   Display_Add();   Display_Latch(); continue;
            case '2':   File_ViewAll();  Display_Latch(); continue;
            case '3':   Display_Admin(); Display_Latch(); continue;
            case '4':   Display_User (); Display_Latch(); continue;
            default:    continue;
        }
        break;
    }
}
void Display_User(void){
    int8_t input;

    while(1){
        Display_Clear();
        Display_Bar();

        Display_print((int8_t*)"\t1- View patient record.\n");
        Display_print((int8_t*)"\t2- View today’s reservations.\n");

        Display_End();
        switch(input = getch()){
            case ESC:   break;
            case '1':   Display_ID(); Display_Latch(); continue;
            case '2':   File_Add(NULL); Display_Latch(); continue;
            default:    continue;
        }
        break;
    }
}
/*******************************************************************************************/
