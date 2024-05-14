#include <stdio.h>

void print_sign(int a);

int main(){

    int cnt;
    scanf("%d",&cnt);
    print_sign(cnt);

}

void print_sign(int a){

    for(int i=1;i<=a;i++){
        printf("~!@#$^&*()_+|\n");
    }
}