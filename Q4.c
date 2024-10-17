#include<stdio.h>
void main(){
	
	int k,n,len=15,temp,sum=0;
	
	int arr[len];
	
	for (n = 0; n < len ;n++){
		printf("Enter Element %d: ", n+1);
		scanf("%d", &temp);
		arr[n] = temp;
	}
	
	for (k = 0; k < len; k++){
		sum += arr[k];
	
	}
	
	printf("%d", sum);

}

