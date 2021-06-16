// C program to print the digits of a number

#include <stdio.h>
#define MAX 100
int main(){
    int num, arr[MAX],i=0,j;
    printf("Enter the number");
   scanf("%d",&num);

    while(num != 0){
        int digit = num % 10;
        arr[i]= digit;
        i++;
        num = num / 10;
            }
    
     for (j = i - 1; j > -1; j--) {
        printf("%d \n", arr[j]);
     }
    return 0;
}