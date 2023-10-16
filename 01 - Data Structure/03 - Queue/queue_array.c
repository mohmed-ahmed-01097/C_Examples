#include <stdio.h>
#include <stdlib.h>

typedef signed   char s8;
typedef unsigned char u8;

#define MAX_QUEUE	10

typedef struct {
    s8  front;
    s8  rear;
    u8* data;
}Squeue;

Squeue* initQueue (void);

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
		Dequeue(Q,&data);

		printf("\nThe Queue Size = %i\n",queue_size(Q));

		printf("\\======================================================\\\n");

		free(Q->data);

	}else{
		printf("the Queue is failed to be initialized\n\n");
	}

	return 0;
}
Squeue* initQueue (void){
     static u8 array[MAX_QUEUE];
     //u8* array = (u8*) malloc(MAX_QUEUE * sizeof(u8));
     static Squeue queue = {.front = -1, .rear = -1, .data = array};
     return (Squeue*)&queue;
}
u8 isEmpty(Squeue *queue){
	return (queue->front == -1) && (queue->rear == -1);
}
u8 isFull (Squeue *queue){
	if ((queue->rear > queue->front) || ((queue->front == -1) && (queue->rear == -1)))
		return (queue->rear - queue->front == MAX_QUEUE);
	return ((MAX_QUEUE + queue->rear - queue->front) == MAX_QUEUE);
}

void Enqueue(Squeue *queue ,u8 data){
   if (isFull(queue))     return;
   if (++queue->rear >= MAX_QUEUE)     queue->rear = 0;
   queue->data[queue->rear] = data;
   printf("Data [%i] is Enqueued in Queue\n",data);
}
void Dequeue(Squeue *queue ,u8 *data){
   if (isEmpty(queue))     return;
   if (++queue->front >= MAX_QUEUE)     queue->front = 0;
   *data = queue->data[queue->front];
   if(queue->front == queue->rear){
		queue->front = -1;		queue->rear  = -1;
	}
   printf("Data [%i] is Dequeued from Queue\n",*data);
}
void top(Squeue *queue ,u8 *data){
   if (isEmpty(queue))     return;
   *data = queue->data[(queue->front + 1) % MAX_QUEUE];
    printf("QueueTop = %i\n",*data);
}

u8 queue_size(Squeue *queue){
    printf("[%d][%d]",queue->rear, queue->front);
	if ((queue->rear > queue->front) || ((queue->front == -1) && (queue->rear == -1))){
		return (queue->rear - queue->front);
	}else{
		return (MAX_QUEUE + queue->rear - queue->front);
	}
}
