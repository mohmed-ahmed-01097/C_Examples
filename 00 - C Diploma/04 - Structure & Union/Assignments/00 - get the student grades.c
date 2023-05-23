#include <stdio.h>

#define STUDENT_NUM     10

struct SGrade{
    unsigned char m_math;
    unsigned char m_language;
    unsigned char m_physics;
    unsigned char m_chemistry;
}S_Students[10] = {
		{50,60,70,80}  , /* Student 1 */
		{100,98,95,91} , /* Student 2 */
		{47,75,60,51}  , /* Student 3 */
		{64,75,75,90}  , /* Student 4 */
		{90,94,89,96}  , /* Student 5 */
		{70,80,75,84}  , /* Student 6 */
		{46,50,42,60}  , /* Student 7 */
		{78,64,51,90}  , /* Student 8 */
		{66,78,63,80}  , /* Student 9 */
		{64,67,69,85}    /* Student 10*/
	};

void main(void){
    unsigned char id;

    printf("Enter the Student ID :");
    fflush(stdout); fflush(stdin);
    scanf("%u", &id);

    if(id < STUDENT_NUM){
		printf("Math Grade: %d\n",S_Students[id].m_math);
		printf("Language Grade: %d\n",S_Students[id].m_language);
		printf("physics Grade: %d\n",S_Students[id].m_physics);
		printf("chemistry Grade: %d",S_Students[id].m_chemistry);
    }else{
		printf("Student ID is not correct");
	}

}
