#include <stdio.h>

int main(){

 int sum = 0, s= 0, a=0;
 float ave=0;



    for(int i=1;i<=4;i++){
        scanf("%d",&a);
        sum=sum+a;
        if(a==0){
            break;
        }
        s++;
        a=0;
    }


    ave=sum/s;
    printf("입력된 자료의 개수 = %d\n",s);
    printf("입력된 자료의 합계 = %d\n",sum);
    printf("입력된 자료의 평균 = %0.2f\n",ave);

}