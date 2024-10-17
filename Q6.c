#include<stdio.h>

void main(){
	
	int k,n,len = 30,temp, min=9999, max= -9999;
	int arr[len];
	
	for (n = 0; n<len;n++){
		printf("Enter Element %d: ", n+1);
		scanf("%d", &temp);
		arr[n] = temp;
	}
	
	for (k = 0; k < len; k ++){	
		if(min > arr[k]){
		min = arr[k];
		}
		if(max < arr[k]){
		max = arr[k];
		}
	}
	
	printf("\nMinimum Number = %d \n", min);
	printf("Maximum Number = %d \n", max);
}

