#include<stdio.h>
#define size 6
int top=-1;
int rear=-1;
int queue [size];
void main(){
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
}
void enqueue(int x){
if(rear==size-1)
    printf("queue is full can enqueue");
else{
    if(front==-1)
        front=0;
    rear++;
    items[rear]=x;
    printf("\nInserted -> %d",x)
}
}

void dequeue(){
if(front==--1)
    printf("\nqueueis fadia");
else{
    printf("\ndeleted");
    front++;
    if(front>rear)
        front=rear=-1;
}
}

void display(){
if(rear == -1)
    printf("queue is fadia");
else{
    int i;
    printf("queue elements are:\n");
    for(i=front;i<=rear;i++)
        printf("%d",queue[i]);
}
printf("\n");
}
