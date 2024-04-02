#include <stdio.h>

int main(){



    int i=0, sum=0, c=0;
    float ave;

    while(i<100){
        scanf("%d",&i);
        sum= sum+i;
        c++;
       
    }
    ave=(float)sum/c;

    printf("%d\n",sum);
    printf("%0.1f",ave);



}