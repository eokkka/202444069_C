#include <stdio.h>

int compare(int a, int b);

int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",compare(a,b));

}


int compare(int a, int b){
    return (a>b)? a : b;
}

