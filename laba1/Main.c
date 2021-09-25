#define _CRT_SECURE_NO_WARNINGS
/*my first lab*/
#include <stdio.h>

int main()
{
	int input1 = 0, input2 = 0, input3 = 0, ost = 0;
	//input(1,2,3) - input values
	scanf("%d %d %d", &input1, &input2, &input3);
	if (input1 == 0) //|| (input2 == 0)) {
		//if (input1 == 0) 
			printf("if u belive in rocket science use 0 else change values\n");
		//else printf("if u belive in rocket science use  else change values\n");
//}
	else
	{
		ost = input2 % input1;//ost - remainder of the division
		printf(" %d\n", ost);
	}
	return 0;
}