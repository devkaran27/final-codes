#include<stdio.h>
int fac(int num);

int fac(int num){
	int i, ans=1;
	for(i=1; i<=num; i++){
		ans=ans*i;
	}
	return ans;
}

int fac_r(int num){
	if(num==1)
	{
		return 1;
	}
	
	return num*fac(num-1);
}

void main(){

	int num, ans;

	printf("Enter a number : ");
	scanf("%d", &num);

	ans = fac(num);

	printf("%d\n", ans);

	ans = fac_r(num);

	printf("%d\n", ans);
	
}