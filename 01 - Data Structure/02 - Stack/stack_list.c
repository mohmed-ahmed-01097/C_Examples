#include <stdio.h>
#include <stdlib.h>

typedef signed   char s8;
typedef unsigned char u8;

#define MAX_STACK	10

typedef struct List{
    u8          data;
    struct List *next;
}SList;

typedef struct{
    s8    sp;
    SList *head;
}Sstack;

Sstack* initStack(void);
void deinitStack(Sstack *stack);
void clrStack(Sstack *stack);

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

		push(S,10);
		push(S,20);
		push(S,30);
		push(S,40);
		push(S,50);
		push(S,60);

		printf("\nThe Stack Size = %i\n",S->sp+1);

		pop(S,&data);
		pop(S,&data);
		push(S,40);
		push(S,50);
		push(S,60);

		printf("\nThe Stack Size = %i\n",S->sp+1);

		printf("\\======================================================\\\n");

		clrStack(S);
		pop(S,&data);
		top(S,&data);

		printf("\\======================================================\\\n");

		deinitStack(S);

	}else{
		printf("the Stack is failed to be initialized\n\n");
	}

	return 0;
}

Sstack* initStack(void){
    Sstack* stack = (Sstack *) malloc(sizeof( Sstack ));
    if (! stack)           return stack;
    stack->sp   = -1;
    stack->head = NULL;
    return stack;
}
void deinitStack(Sstack *stack){
     clrStack(stack);     free(stack);     stack = NULL;
}
void clrStack(Sstack *stack){
     while(stack->head){
        SList* item = stack->head;
        stack->head = item->next; stack->sp--; free(item);

    }
}

u8 isEmpty(Sstack *stack){return stack->sp == -1;}
u8 isFull(Sstack *stack) {return stack->sp == MAX_STACK-1;}
void push(Sstack *stack ,u8 data){
   if (isFull(stack))     return;
   SList *item = malloc(sizeof(SList));
   if (!item)           return;
   item->data = data;
   item->next = stack->head;

   stack->head = item;
   stack->sp++;
   printf("Data [%i] is Pushed in Stack\n",data);
}
void pop(Sstack *stack ,u8 *data){
   if (isEmpty(stack))     return;
   SList *item = stack->head;
   if(!item)            return;
   *data = item->data;
   stack->head = item->next;
   stack->sp--;
   free(item);
   printf("Data [%i] is POPED from Stack\n",*data);
}
void top(Sstack *stack ,u8 *data){
   if (isEmpty(stack))     return;
   *data = stack->head->data;
   printf("StackTop = %i\n",*data);
}
