#include<stdio.h>
void main(){
int x;
printf("Enter your number: ");
scanf("%d",&x);
int c=0;
while(x!=0){
x=x/10;
c++;
}
printf("The number has %d digits",c);
}
