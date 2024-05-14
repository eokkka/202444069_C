#include <stdio.h>

#define  MAX_NUMBERS 100
#define RANGE 10

void readnumbers(int numbers[], int N);
void cala(int numbers[],int N,int frequency[]);
void printffrequency(int frequency[],int range);

int main(){
    int N;
    printf("please enter number of element (up to %d)",MAX_NUMBERS);
    scanf("%d",&N);

    if ( N < 1 || N > MAX_NUMBERS){
        return 1;
    }

    int numbers[N];
    readnumbers(numbers, N);
    
    int frequency[RANGE]= {0};
    cala(numbers, N, frequency);

    printffrequency(frequency, RANGE);

    return 0;
}

void readnumbers(int numbers[], int N){
    printf("Enter %d numbers(0-9)", N);
    for(int i = 0; i<N; i++){
        scanf("%d",&numbers[i]);
        if(numbers[i]< 0 || numbers[i] > 9){
            printf("invalld number: %d please enter 0 and 9 \n",numbers[i]);
            i--;
        }
    }
}

void cala(int numbers[],int N,int frequency[]){
    for(int i=0;i<N;i++){
        frequency[numbers[i]]++;
    }
}

void printffrequency(int frequency[],int range){
    for(int i=0; i < range; i++){
        printf("Number %d: %d times\n",i,frequency[i]);
    }    
}
