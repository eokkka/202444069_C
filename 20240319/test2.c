#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b;
    printf("입력 값 : ");
    scanf("%d", &a);
    printf("\n출력 값 : %d",a);


    printf("\n입력 값 : ______ \b\b\b\b\b\b\b");
    scanf("%d",&b);
    printf("\n출력 값 : %d",b);

    return 0;
}