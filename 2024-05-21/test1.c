#include <stdio.h>

int main(){
    int cnt, num=0, max=0;
    scanf("%d",&cnt);
    int A[cnt];

    for(int i=0;i<cnt;i++){
        scanf("%d",&A[i]);
    }

    for(int i=cnt-1;i>=0;i--){

        if(max<A[i]){
            max=A[i];
            num++;     
        }
    }
    printf("%d",num);

}