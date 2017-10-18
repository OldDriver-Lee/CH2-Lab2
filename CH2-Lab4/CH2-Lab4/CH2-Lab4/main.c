#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int grade;
	int acount=0;
	int bcount=0;
	int ccount=0;
	int dcount=0;
	int ecount=0;
	printf("Enter the letter grads .\n");
	printf("Enter the EOF to end the input.\n");

	while ((grade = getchar()) != EOF){
		switch (grade){
		case 'A':
		case 'a':
			++acount;
			break;
		case 'b':
		case'B':
			++bcount;
			break;
		case'C':
		case 'c':
			++ccount;
			break;
		case 'D':
		case 'd':
			++dcount;
			break;
		case 'E':
		case'e':
			++ecount;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			printf("Incorrect letter grade entered.");
			printf("Enter a new grade.\n");
			break;
		}
	}

	printf("\nTotal for each letter grade are:\n");
	printf("A: %d\n",acount);
	printf("B: %d\n",bcount);
	printf("C: %d\n",ccount);
	printf("D: %d\n",dcount);
	printf("E: %d\n",ecount);

	system("pause");
	return 0;
}