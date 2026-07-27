#include<stdio.h>
int main(){
    // find the final velocity in v=u+at
    int u;
    printf("enter u");
    scanf("%d", &u);

    int a;
    printf("enter a");
    scanf("%d", &a);

    int t;
   printf("enter t");
    scanf("%d", &t);

    printf("v = %d", u + a * t);
    return 0;
}