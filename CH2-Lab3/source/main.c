#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int step,low,high,upper;
	float weight;
	printf("�q�h��cm�}�l?:");
	scanf("%d", &low);
	printf("����̵���?:");
	scanf("%d", &high);
	printf("���j�h��?:");
	scanf("%d", &step);

	for (upper = low; upper <= high; upper += step){
		weight = (upper - 100) * 0.9;
		printf("%d cm %.2f kg\n", upper, weight);
	}
	system("pause");
	return 0;
}