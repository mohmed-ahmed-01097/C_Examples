#include <stdio.h>
#include <stdlib.h>

typedef signed   char s8;
typedef unsigned char u8;

#define MAX_QUEUE	10

typedef struct List{
    u8          data;
    struct List *next;
}SList;

typedef struct {
    s8    size;
    SList *front, *rear;
}Squeue;

Squeue* initQueue (void);
void deinitQueue(Squeue *queue);
void clrQueue(Squeue *queue);

u8 isEmpty(Squeue *queue);
u8 isFull (Squeue *queue);

void Enqueue(Squeue *queue ,u8 data);
void Dequeue(Squeue *queue ,u8 *data);
void top(Squeue *queue ,u8 *data);

u8 queue_size(Squeue *queue);

int main(){
	u8 data;
	Squeue* Q = initQueue();

	if(Q){
		Enqueue(Q,10);
		Enqueue(Q,20);
		Enqueue(Q,30);
		Enqueue(Q,40);
		Enqueue(Q,50);
		Enqueue(Q,60);

		top(Q,&data);
		printf("\nThe Queue Size = %i\n",queue_size(Q));

		printf("\\======================================================\\\n");

		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);

		top(Q,&data);
		printf("\nThe Queue Size = %i\n",queue_size(Q));

		printf("\\======================================================\\\n");

		Enqueue(Q,10);
		Enqueue(Q,20);
		Enqueue(Q,30);
		Enqueue(Q,40);
		Enqueue(Q,50);
		Enqueue(Q,60);

		top(Q,&data);
		printf("\nThe Queue Size = %i\n",queue_size(Q));

		printf("\\======================================================\\\n");

		Enqueue(Q,140);
		Enqueue(Q,150);
		Enqueue(Q,160);

		top(Q,&data);
		printf("\nThe Queue Size = %i\n",queue_size(Q));

		printf("\\======================================================\\\n");

		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Dequeue(Q,&data);

		printf("\nThe Queue Size = %i\n",queue_size(Q));

		Enqueue(Q,10);
		Enqueue(Q,20);
		Enqueue(Q,30);
		Enqueue(Q,40);
		Enqueue(Q,50);
		Enqueue(Q,60);

		printf("\nThe Queue Size = %i\n",queue_size(Q));

		Dequeue(Q,&data);
		Dequeue(Q,&data);
		Enqueue(Q,40);
		Enqueue(Q,50);
		Enqueue(Q,60);

		printf("\nThe Queue Size = %i\n",queue_size(Q));

		printf("\\======================================================\\\n");

		clrQueue(Q);
		Dequeue(Q,&data);
		top(Q,&data);

		printf("\\======================================================\\\n");

		deinitQueue(Q);

	}else{
		printf("the Queue is failed to be initialized\n\n");
	}

	return 0;
}

Squeue* initQueue (void){
     Squeue* queue = malloc(sizeof( Squeue ));
     if (! queue)           return queue;
     queue->size = 0;
     queue->front = queue->rear = NULL;
     return queue;
}
void deinitQueue(Squeue *queue){
    clrQueue(queue);    free(queue);   queue = NULL;
}
void clrQueue(Squeue *queue){
    while(queue->front){
        if (queue->rear == queue->front){ queue->rear = NULL; }
        SList* item = queue->front;
        queue->front = queue->front->next; queue->size--; free(item);
    }
}

u8 isEmpty(Squeue *queue){return (queue->size == 0);}
u8 isFull (Squeue *queue){return (queue->size == MAX_QUEUE);}

void Enqueue(Squeue *queue ,u8 data){
   if (isFull(queue))     return;
   SList* item = malloc(sizeof(SList));
   if (!item)           return;
   item->data = data;
   item->next = NULL;
   if (queue->front)    queue->rear->next = item;
   else                 queue->front = item ;
   queue->rear = item;  queue->size++;
   printf("Data [%i] is Enqueued in Queue\n",data);
}
void Dequeue(Squeue *queue ,u8 *data){
   if (isEmpty(queue))     return;
   SList* item = queue->front;
   if (!item)           return;
   *data = item->data;
   if (queue->front == queue->rear)    queue->rear = NULL;
   queue->front = queue->front->next;  queue->size--;
   free(item);
   printf("Data [%i] is Dequeued from Queue\n",*data);
}
void top(Squeue *queue ,u8 *data){
   if (isEmpty(queue))     return;
   *data = queue->front->data;
    printf("QueueTop = %i\n",*data);
}

u8 queue_size(Squeue *queue){
	return queue->size;
}
