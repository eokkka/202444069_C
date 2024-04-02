#include <stdio.h>


int main(){

int i=0;
while(1){

    printf("1. 입력하기\n");
    printf("2. 출력하기\n");
    printf("3. 삭제하기\n");
    printf("4. 끝내기\n");
    printf("작업할 번호를 선택하세요. ");

    scanf("%d",&i);

        if(i==1)
            printf("\n입력하기를 선택하였습니다.\n");
        else if(i==2)
            printf("\n출력하기를 선택하였습니다.\n");
        else if(i==3)     
            printf("\n삭제하기를 선택하였습니다.\n");
        else if(i==4){
            printf("\n끝내기를 선택하였습니다.\n");
            return 0;
        }  
        else
            printf("\n잘못 입력하였습니다.\n");

    }
}
