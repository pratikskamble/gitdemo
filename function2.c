# include<stdio.h>
int main (){
    // formula of celcius = 9/5*(f-32)
    
    float f;
    printf("enter f");
    scanf("%f", &f);

    printf("c = %f", ((9/5) * (f-32)));
    return 0;
  
}
