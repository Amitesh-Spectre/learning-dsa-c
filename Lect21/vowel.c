#include<stdio.h>
#include<string.h>
int main(){
    char str[]="AmItEsH";
    int ln= strlen(str);
    int vCount=0;
    int cCount=0;

    for(int i=0;i<ln;i++){
        char ch=str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vCount++;
    }else{
        cCount++;
    }
}
printf("Vowels =\t%d\n",vCount);
printf("Consonant =\t%d\n",cCount);
    return 0;
}