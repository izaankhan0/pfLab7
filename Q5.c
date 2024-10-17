#include<stdio.h>
void main(){

	int k,n,r,len = 20,temp;	
	int arr[len];
	
	for (n = 0; n<len;n++){
		printf("Enter Element %d: ", n+1);
		scanf("%d", &temp);
		arr[n] = temp;
	}
	
	for (r = len - 1; r >= 0; r--){
	
		printf(" %d ", arr[r]);
	
	}

}

