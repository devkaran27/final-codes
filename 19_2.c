#include<stdio.h>

void array(int a[], int n){
	int i=0;
	for(i=0; i<n; i++){
		printf("Element for a[%d] is %d\n", i, a[i]);
	}
}

void main(){

	int n;

	printf("Enter size of array : ");
	scanf("%d", &n);

	int a[n], i;


	for(i=0; i<n; i++){

		printf("Enter element for a[%d]: ", i);
		scanf("%d", &a[i]);

	}


	array(a, n);
	
}