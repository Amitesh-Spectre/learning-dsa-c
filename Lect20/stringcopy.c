#include <stdio.h>
#include <string.h>

int main(){
    char str[]="hii";
    char cstr[4];
    for(int i=0; i<4;i++){
        cstr[i]=str[i];
        printf("%s",cstr);
    }
    return 0;
}