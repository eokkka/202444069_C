#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        system("title 정수 2개 입력받아 덧셈 연산");

        int num1, num2, hap;

        printf("1.첫 번째 정수 입력 : ");
        scanf_s("%d",&num1, sizeof(num1));

        printf("2.두 번째 정수 입력 : ");
        scanf_s("%d",&num2, sizeof(num2));

        hap = num1 +num2;
        printf("3. 덧셈 결과 : %d + %d = %d ", num1,num2, hap);

        hap = num1 * num2;
        printf("\n4. 곱셈 결과 : %d * %d = %d ", num1,num2, hap);

        hap = num1/num2;

        printf("\n5. 나눗셈 결과 : %d / %d = %d ", num1, num2, hap);

        hap = num1-num2;

        printf("\n6. 뺄셈 결과 : %d - %d = %d ", num1, num2, hap);


        return 0;


}