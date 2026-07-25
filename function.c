#include<stdio.h>

int add(int x, int y);

int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int sum;
    
    sum = add(a,b);
    printf("Addition : %d ", sum);
}

int add(int x, int y)
{
    return (x+y);
}
