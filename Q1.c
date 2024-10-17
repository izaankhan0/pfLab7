#include<stdio.h>
int main(){
	int i,num, flag = 0;
	int array[9] = {2,4,3,7,9,5,2,9,6};
	printf("Enter a number to search: ");
	scanf("%d", &num);
	
	for(i = 0; i < 9; i++){
		if(num == array[i]){
			printf("\nNumber found at index %d", i);
			flag = 1;
		}
	}
	if (flag == 0){
		printf("Number not Found");
	}
	
	return 0;
}

