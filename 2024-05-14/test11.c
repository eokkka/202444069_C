#include <stdio.h>

float circle(float a);

int main(){
    float a;
    scanf("%f",&a);
    printf("%.2f",circle(a));
}


float circle(float a){
    float s=3.14;
    float c= a*a*s;
    return c;
}