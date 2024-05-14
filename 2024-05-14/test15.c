#include <stdio.h>
#define CNT 7

void count_up(int a[]);


int main(){
    int a[] = {1,2,3,4,5,6,7};
    count_up(a);
    for(int i=0;i<CNT;i++){
        printf("%d\n",a[i]);
    }
}


void count_up(int a[]){

    for(int i=0;i<CNT;i++){
        a[i]+=1;
    }
}