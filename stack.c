#include <stdio.h>
#include<conio.h>
#define max 5
static int stack[max];
int top=-1;
void push(int x){
 stack[++top]=x;


}
int pop(){
 return(stack[top--]);
}
void view(){
 int i=4;
 if(top<0){
 printf("\n stack is empty");

 }
 else{
 for(i=top;i>=0;i--)
 {
 printf("%4d",stack[i]);
 }
 printf("\n");
 }
}
int main()
{
 int ch=0;
 int val;
 while(ch!=4){
 printf("\n stack operation\n");
 printf("\n 1.push");
 printf("\n 2.pop");
 printf("\n 3.view");
 printf("\n 4.quit\n");
 printf("\nenter your choice\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 if(top<max-1)
 {
 printf("\n enter stack elements");
 scanf("%d",&val);
 push(val);

 }
 else{
 printf("\n stack overflow");

 }
 break;
 case 2:
 if(top<0){
 printf("\n stack overflow");

 }
 else{
 val=pop();
 printf("\n popped elements is %d",val);

 }
 break;
 case 3:
 view();
 break;
 case 4:
 exit(0);
 default:
 printf("\n invalid choice\n");

 }

 }
 return 0;
}