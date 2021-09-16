/*my first lab*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int input1 = 0, input2 = 0, input3 = 0, ost = 0;
//input(1,2,3) - input values
	scanf_s("%d %d %d", &input1, &input2, &input3);
	ost = input2 % input1;//ost - remainder of the division
	printf(" %d\n",ost);
		return 0;
}