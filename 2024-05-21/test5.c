#include <stdio.h>

void fortune_cookie(char msg[]){
    printf("message reads: %s\n",msg);
    printf("msg occupies %li bytes\n",sizeof(msg));
}

int main(){
    char quote = "cookies make your fat";
    fortune_cookie(quote);
}