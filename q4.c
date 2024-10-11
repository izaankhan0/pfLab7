/*
Write a C Program that takes an user input array and prints the sum of its
elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45
*/

#include<stdio.h>
void main(){
	
	int k,n,len,temp,sum=0;
	printf("Enter the length of the array: ");
	scanf("%d", &len);
	
	int arr[len];
	
	for (n = 0; n<len;n++){
		printf("Enter Element %d: ", n+1);
		scanf("%d", &temp);
		arr[n] = temp;
	}
	
	for (int k = 0; k < len; k++){
		sum += arr[k];
		
	}
	
	printf("%d", sum);
	
}