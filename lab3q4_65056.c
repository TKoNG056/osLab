#include <stdio.h>
int main(){
	int sum=0;
	int count=0;
	int input;
	printf("enter number:");
	while(1){
		scanf("%d",&input);
		if(input<=0){
			break;
		}
		count++;
		sum+=input;
	}
	float avg = (float)sum/count;
	printf("Summation=%d\n",sum);
	printf("Mean=%.2f\n",avg);
	return 0;

