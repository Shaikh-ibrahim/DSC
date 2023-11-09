#include <stdio.h>
#include<stdlib.h>
void tower_re(int n,char source,char auxiliary,char target)
{
 if(n==1)
 {
 printf("mobve disk 1 from %c to %c",source,target);
 return;
 }
 tower_re(n-1,source,target,auxiliary);
 printf("move disk %d from %c to %c",n,source,target);
 tower_re(n-1,auxiliary,source,target);

}
void tower_nonre(int n){
 int disk;
 int total_moves=(1<<n)-1;
 char source='A',auxiliary='B',target='C';
 if(n%2==0){
 char temp=auxiliary;
 auxiliary=target;
 target=temp;
 }
 for (int move=1;move<=total_moves;move++){
 if(move%3==1){
 printf("\n moves disk %d from %c to %c\n",disk,source,target);

 }
 else if(move%3==2){
 printf("\n move disk %d from %c to %c ",disk,source,auxiliary);

 }
 else{
 printf("\n move disk %d from %c to %c ",disk,auxiliary,target);

 }
 }
}
int main()
{
 int n;
 printf("\n enter the numbers of disk");
 scanf("%d",&n);
 printf("\n recurisve \n");
 tower_re(n,'A','B','C');

 printf("\n non recurisve \n");
 tower_nonre(n);
 return 0;
}
