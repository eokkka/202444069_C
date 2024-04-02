#include <stdio.h>

int main(){


    int i=1;
    int c=0,sum=0, ave=0;

    while( i != 0){
        scanf("%d",&i);
        if(i%2==1){
            sum= sum+i;
            c++;
        }
    }

    ave=sum/c;
    
    printf("홀수의 합 = %d\n",sum);
    printf("홀수의 평균 = %d",ave);


}