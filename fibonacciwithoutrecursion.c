#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
if(number==1)
{
    printf("%d",n1);
}  
else if(number==2)
{
    printf("%d %d",n1 ,n2);
}
else{
    printf("%d %d",n1,n2); 
    for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {
       
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 } } 
  return 0;  
 }    