#define _CRT_SECURE_NO_WARNINGS
/*my first lab*/
#include <stdio.h>

int main()
{
	int b;
	int idiot;
	int input1 = 0, input2 = 0, input3 = 0, ost = 0;
	//input(1,2,3) - input values
	idiot = scanf("%d %d %d", &input1, &input2, &input3);
	b = input3 / 1;
	if (
		(
			(idiot < 3) && (idiot < 1) &&//check on only 1 char variable
			(b == "0") && (input3 != 0)//check on input3 == char
			)
		|| (idiot == 3)
		)
	{
		if (input1 == 0) //|| (input2 == 0)) {
			
			printf("if u belive in rocket science use 0 else change values\n");
		//else printf("if u belive in rocket science use  else change values\n");
//}
		else
		{
			ost = input2 % input1;//ost - remainder of the division
			printf(" remainder of division=%d\n %d\n ", ost, idiot);
		}
	}
	else  printf("How i will calculate words ???\n %d", b);
	
	return 0;
}