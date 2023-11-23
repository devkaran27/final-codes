#include<stdio.h>

void main(){ 

	char s[10], f, r;

	printf("Enter a string : ");
	gets(s);

	printf("Enter character to find : ");
	scanf(" %c", &f);

    printf("Enter character to replace : ");
	scanf(" %c", &r);

    int i=0;

	for(i=0; s[i]!='\0'; i++){

		if(s[i]==f){

            s[i]=r;

			break;
		}

	}

    if(s[i]==r){

		puts(s);

	}

	else{

        printf("character to find is not in string");

	}

}