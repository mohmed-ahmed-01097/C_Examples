#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <conio.h>
#include "record.h"

const char *filename = "filename.txt";

static void Print_Patient(char* pbuffer){
    printf("\n\t\t\t\tPatient Name  : ");
    while(*pbuffer>'9'){
        while(*pbuffer && *pbuffer != ' '){
            printf("%c", *pbuffer++);
        }
        printf("%c", *pbuffer++);
    }
    printf("\n\t\t\t\tPatient Age   : ");
    while(*pbuffer && *pbuffer != ' '){
        printf("%c", *pbuffer++);
    }
    printf("%c", *pbuffer++);
    printf("\n\t\t\t\tPatient Gender: ");
    while(*pbuffer && *pbuffer != ' '){
        printf("%c", *pbuffer++);
    }
    printf("%c", *pbuffer++);
    printf("\n\t\t\t\tPatient ID    : ");
    while(*pbuffer && (*pbuffer != ' ' && *pbuffer != '\n')){
        printf("%c", *pbuffer++);
    }
}
static uint16_t Get_Patient(char* pbuffer){
    while(*pbuffer>'9'){
        while(*pbuffer && *pbuffer != ' ') *pbuffer++;
        *pbuffer++;
    }
    while(*pbuffer && *pbuffer != ' ') *pbuffer++;
    *pbuffer++;
    while(*pbuffer && *pbuffer != ' ') *pbuffer++;
    *pbuffer++;
    return (uint16_t)atoi(pbuffer);
}
/*******************************************************************************************/
uint8_t File_Add(File_tstrPatient* patient){
    uint8_t flage = 1;
    FILE *file = fopen(filename, "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 0;  // Return an error code
    }
    if (patient == NULL)return 0;

    // Read data from the file
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        if(Get_Patient(buffer) == patient->m_id){
            flage = 0;
            break;
        }
    }
    fclose(file);  // Close the file

    if(flage){
        FILE *file = fopen(filename, "a");
        if (file == NULL){
            printf("\n\t\t\t\t\tFailed to open the file.\n");
            return 0; // Return an error code
        }
        if (patient == NULL)return 0;
        fprintf(file, "%s %u %c %05u\n",
                patient->m_name, patient->m_age, patient->m_gender?'M':'F', patient->m_id);
        fclose(file); // Close the file
    }
    return flage;
}
/*******************************************************************************************/
void File_ViewAll(void){
    FILE *file = fopen(filename, "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;  // Return an error code
    }

    // Read data from the file
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        Print_Patient(buffer);
    }

    fclose(file);  // Close the file
}
/*******************************************************************************************/
void File_View(File_tstrPatient* patient){
    uint8_t flage = 1;
    FILE *file = fopen(filename, "r");  // Open the file in read mode

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;  // Return an error code
    }
    if (patient == NULL)return;

    // Read data from the file
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        if(Get_Patient(buffer) == patient->m_id){
            Print_Patient(buffer);
            flage = 0;
            break;
        }
    }
    if(flage){
        printf("\n\n\t\t\t\t\tID Not Found\n\n");
    }

    fclose(file);  // Close the file
}
/*******************************************************************************************/
void File_Edit(File_tstrPatient* patient){

    const int targetLine = 3; // Line number to modify
    const char *newContent = "New line content"; // New content to write

    // Open the file for reading
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to create the file.\n");
        return; // Return an error code
    }


    // Read the contents of the file into memory
    char **lines = NULL;
    char buffer[MAX_LINE_LENGTH];
    int lineCount = 0;

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Allocate memory for each line
        lines = realloc(lines, (lineCount + 1) * sizeof(char *));
        lines[lineCount] = malloc(strlen(buffer) + 1);
        strcpy(lines[lineCount], buffer);
        lineCount++;
    }

    fclose(file); // Close the file

    // Modify the desired line
    if (targetLine > 0 && targetLine <= lineCount) {
        strcpy(lines[targetLine - 1], newContent);
    } else {
        printf("Invalid target line.\n");
        return; // Return an error code
    }

    // Open the file for writing (truncate mode)
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return; // Return an error code
    }

    // Write the modified contents back to the file
    for (int i = 0; i < lineCount; i++) {
        fputs(lines[i], file);
        free(lines[i]); // Free memory allocated for each line
    }
    free(lines); // Free the array of line pointers

    fclose(file); // Close the file
}
/*******************************************************************************************/
void File_Reserve(File_tstrPatient* patient){

}
/*******************************************************************************************/
void File_Delete(File_tstrPatient* patient){

}
/*******************************************************************************************/
