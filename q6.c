/*
Write a C Program to find the minimum and maximum number in an array.
Input: {4,1,6,8,10,21,8,9,2,6}
Output:
Minimum Number = 1
Maximum Number = 21
*/

#include<stdio.h>
void main(){
	
	int k,n,len,temp, min=9999, max= -9999;
	printf("Enter the length of the array: ");
	scanf("%d", &len);
	
	int arr[len];
	
	for (n = 0; n<len;n++){
		printf("Enter Element %d: ", n+1);
		scanf("%d", &temp);
		arr[n] = temp;
	}
	
	for (int k = 0; k < len; k ++){
		
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