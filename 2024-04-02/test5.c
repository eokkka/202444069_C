#include <stdio.h>

int main(){
    int a,b;


    printf("첫 번째 정수 입력 : ");
    scanf("%d", &a);
    printf("두 번째 정수 입력 : ");
    scanf_s("%d",&b);

    printf("a == b : %d\n" ,a==b);
    printf("a != b : %d\n" ,a !=b);
    printf("a > b : %d\n" ,a > b);
    printf("a < b : %d\n", a<b);
    printf("a >= b : %d\n", a>=b);
    printf("a <= b : %d\n", a<=b);
    printf("a == 5 : %d\n", a==5);
    printf("a == b : %d\n", 5==a);


}