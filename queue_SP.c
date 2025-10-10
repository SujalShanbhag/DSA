#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct queue{
int r;
int f;
int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q,int item){
if(q->r==SIZE-1){
    printf("\nQueue empty");
}
else{
    q->r++;
    q->data[q->r]=item;
    if(q->f==-1){
        q->f=0;
    printf("\nInserted %d into the queue.\n",item);
    }
}
}
void dequeue(QUEUE *q){
if(q->f==-1){
    printf("\nQueue empty");
}
else{
    printf("\nThe element deleted is %d",q->data[q->f]);
    if(q->f==q->r){
        q->f=-1;
        q->r=-1;
    }
    else{
        q->f=q->f+1;
    }
}
   }
void display(QUEUE q){
int i;
if(q.f==-1){
    printf("\nQueue empty");
}
else{
    printf("\nQueue elements are:");
    for(i=q.f;i<=q.r;i++){
        printf("\n%d",q.data[i]);
    }
}
}
int main()
{
    int ch,item;
    QUEUE q;
    q.f=-1;
    q.r=-1;
    printf("1.Insert to Queue\n2.Delete from Queue\n3.Display Queue\n4.Exit");
    for(;;){
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1:printf("\nEnter item to insert:");
               scanf("%d",&item);
               enqueue(&q,item);
               break;
        case 2:dequeue(&q);
               break;
        case 3:display(q);
               break;
        default:exit(0);
        }
    }
    return 0;
}
