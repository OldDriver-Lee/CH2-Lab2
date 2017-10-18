#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int step,low,high,upper;
	float weight;
	printf("從多少cm開始?:");
	scanf("%d", &low);
	printf("到哪裡結束?:");
	scanf("%d", &high);
	printf("間隔多少?:");
	scanf("%d", &step);

	for (upper = low; upper <= high; upper += step){
		weight = (upper - 100) * 0.9;
		printf("%d cm %.2f kg\n", upper, weight);
	}
	system("pause");
	return 0;
}