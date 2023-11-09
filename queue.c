#include <stdio.h>
#include<stdlib.h>
void insert();
void dequeue();
void display();
int front=-1;
int rear=-1;
int maxsize;
int queue[100];
int main()
{
 int ch;
 printf("\n enter the size of queue");
 scanf("%d",&maxsize);
 printf("\n1.insert\n2.delete\n3.display\4.exit");
 while(ch!=4){
 printf("\nenter yopur choice\n");
 scanf("%d",&ch);
 switch(ch){
 case 1:
 insert();
 break;
 case 2:
 dequeue();
 break;
 case 3:
 display();
 case 4:
 exit(0);
 break;
 default:
 printf("error");




 }
 }
 return 0;
}
void insert(){
 int x;
 printf("\n enter elememts:");
 scanf("%d",&x);
 if(front==-1 && rear==-1){
 front=0;
 rear=0;

 }
 else{
 rear=rear+1;
 }
 queue[rear]=x;
 printf("\n value inserted");

}
void dequeue(){
 int x;
 if(front==-1||front>rear)
 {
 printf("\n underflow");
 return;

 }
 else{
 x=queue[front];
 if(front==rear){
 front=-1;
 rear=-1;
 }
 else{
 front=front+1;
 }
 printf("\n value delete");
 }
}
void display(){
 int i;


 printf("\n elemeents in queue are");
 for(i=front;i<=rear;i++){
 printf("%d",queue[i]);
 }

}