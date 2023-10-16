#include <stdio.h>
#include <stdlib.h>

typedef signed   char s8;
typedef unsigned char u8;

#define MAX_STACK	10

typedef struct {
    s8  sp;
    u8* data;
}Sstack;

Sstack* initStack(void);

u8 isEmpty (Sstack *stack);
u8 isFull(Sstack *stack);

void push(Sstack *stack ,u8  data);
void pop (Sstack *stack ,u8 *data);
void top (Sstack *stack ,u8 *data);

int main(){
	u8 data;
	Sstack* S = initStack();

	if(S){
		push(S,10);
		push(S,20);
		push(S,30);
		push(S,40);
		push(S,50);
		push(S,60);

		top(S,&data);
		printf("\nThe Stack Size = %i\n",S->sp+1);

		printf("\\======================================================\\\n");

		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);

		top(S,&data);
		printf("\nThe Stack Size = %i\n",S->sp+1);

		printf("\\======================================================\\\n");

		push(S,10);
		push(S,20);
		push(S,30);
		push(S,40);
		push(S,50);
		push(S,60);

		top(S,&data);
		printf("\nThe Stack Size = %i\n",S->sp+1);

		printf("\\======================================================\\\n");

		push(S,140);
		push(S,150);
		push(S,160);

		top(S,&data);
		printf("\nThe Stack Size = %i\n",S->sp+1);

		printf("\\======================================================\\\n");

		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);
		pop(S,&data);

		printf("\nThe Stack Size = %i\n",S->sp+1);

		printf("\\======================================================\\\n");

		free(S->data);

	}else{
		printf("the Stack is failed to be initialized\n\n");
	}

	return 0;
}

Sstack* initStack(void){
     static u8 array[MAX_STACK];
     //u8* array = (u8*) malloc(MAX_STACK * sizeof(u8));
     static Sstack stack = {.sp = -1, .data = array};
     return (Sstack*)&stack;
}
u8 isEmpty(Sstack *stack){return stack->sp == -1;}
u8 isFull(Sstack *stack) {return stack->sp == MAX_STACK-1;}
void push(Sstack *stack ,u8 data){
   if (isFull(stack))     return;
   stack->data[++stack->sp] = data;
   printf("Data [%i] is Pushed in Stack\n",data);
}
void pop(Sstack *stack ,u8 *data){
   if (isEmpty(stack))     return;
   *data = stack->data[stack->sp--];
   printf("Data [%i] is POPED from Stack\n",*data);
}
void top(Sstack *stack ,u8 *data){
   if (isEmpty(stack))     return;
   *data = stack->data[stack->sp];
   printf("StackTop = %i\n",*data);
}
