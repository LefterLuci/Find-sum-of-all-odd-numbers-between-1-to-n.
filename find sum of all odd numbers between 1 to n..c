#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int n;
    int i=1;
    int sum=0; 

    printf("Write a C program to find sum of all odd numbers between 1 to n.\n");
    scanf("%d",&n);

    for(i=1; n>=i; i++)
    {
        if(i%2==0)
            {
                printf("%d ",i);
                sum = sum + i;
            }
    } 

        printf("\n%d ",sum);


       return 0;
}