/*
Write a program in C to read n number of values in an array and display it in
reverse order
Input: {1,2,3,4,5,6,7,8,9}
Output: 9 8 7 6 5 4 3 2 1
*/

#include<stdio.h>
void main(){
	
	int k,n,len,temp;
	printf("Enter the length of the array: ");
	scanf("%d", &len);
	
	int arr[len];
	
	for (n = 0; n<len;n++){
		printf("Enter Element %d: ", n+1);
		scanf("%d", &temp);
		arr[n] = temp;
	}
	
	for (int r = len - 1; r >= 0; r--){
		
		printf(" %d ", arr[r]);
		
	}
	
	
}