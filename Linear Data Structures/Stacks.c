#include<stdio.h>
#define Max 20
void enqueue(int ele);
void dequeue();
void display();
int queue[Max];
int front=-1,rear=-1;
void enqueue(int ele)
{
    if(rear==Max-1)
    {
        printf("queue is oveflow");
    }
    else
    {
        front=0;
        queue[++rear]=ele;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue underflow\n");
    }
    else
    {
        printf("the poped item from queue is=%d\n",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1)
        printf("queue is empty\n");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
main()
{
    int choice,ele;
    while(1)
    {
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter the element");
            scanf("%d",&ele);
            enqueue(ele);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("enter the correct choice");
           
        }
    }
}
