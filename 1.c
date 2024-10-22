#include<stdio.h>
#include<stdlib.h>
#define size 5
typedef struct queue_using_array
{
    int a[size];
    int rear;
    int front;
}queue;
void insert(queue *);
void delete1(queue *);
void display(queue);
void main()
{
    queue q;
    q.front=-1;
    q.rear=-1;
    int x;
    while(1)
    {
        printf("\n1.To Insert\n2.To Delete\n3.To Display\n0.To Exit");
        printf("\nEnter Your Choice:\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:insert(&q);break;
            case 2:delete1(&q);break;
            case 3:display(q);break;
            case 0:exit(0);
            default:printf("Wrong Input!!");
        }
    }
}
void insert(queue*p)
{
    int x;
    printf("Enter A Value:");
    scanf("%d",&x);
    if(p->rear == size-1)
    {
        printf("Queue Is Full!");
    }
    else{
        p->rear++;
        p->a[p->rear]=x;
    }
}
void delete1(queue *p)
{
    int y;
    if(p->front == p->rear)
    {
        printf("Queue Is Empty!!");
    }
    else{
        p->front++;
        y=p->a[p->front];
        printf("%d Is Deleted!!",y);
    }
}
void display(queue p)
{
    int i;
    if(p.front == p.rear)
    {
        printf("Queue Is Empty!");
    }
    else
    {
        for(i=p.front+1;i<=p.rear;i++)
        {
            printf("%d\t",p.a[i]);
        }
    }
}