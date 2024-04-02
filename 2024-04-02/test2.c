#include <stdio.h>

int main(){

    
    int sum = 0, s= 0;
    float ave=0;
    int i=1;

    while(i != 0){

        scanf("%d",&i);
        sum= sum+i;
        if(i!=0){
            s++;
        }
    }

    ave=(float)sum/s;
    printf("입력된 자료의 개수 = %d\n",s);
    printf("입력된 자료의 합계 = %d\n",sum);
    printf("입력된 자료의 평균 = %0.2f\n",ave);


}