#include<stdio.h>
#include<string.h>
void main(){
    char s1[10]="Dark", s2[10]="Web";
    printf("%d\n", strlen(s1));
    printf("%d\n", strcmp(s1,s2));
    printf("%s\n", strcpy(s1,s2));
    printf("%s\n", strcat(s1,s2));
    printf("%s\n", strrev(s1));
    printf("%s\n", strlwr(s1));
    printf("%s", strupr(s1));
}