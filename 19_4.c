#include<stdio.h>

#include<string.h>

int find(char s[], char c){

	int i=0, check=-1;

	for(i=0; s[i]!='\0'; i++){

		if(s[i]==c){

			check=i;

			break;
		}

	}

	if(s[i]==c){

		return i;

	}

	else{

		return -1;

	}

}

void main(){

	char s[1], c;

	printf("Enter a string : ");
	gets(s);


	printf("Enter character to find : ", c);
	scanf("%c", &c);

	int index=find(s, c);

	if(index==-1){
		printf("character not in string");
	}

	else{
		printf("character at index %d of string", index);
	}
	
}