// to print 1 to n number without using + or ++
#include<stdio.h>

int main(){
    int num, i=1;
    printf("Enter any numbers:");
    scanf("%d",&num);
    
    for(;i<=num;){
        printf("%d ",i);
        i=-~i;
    }
    return 0;
}