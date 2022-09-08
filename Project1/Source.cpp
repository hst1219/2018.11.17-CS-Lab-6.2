#include<stdio.h>
#include<stdlib.h>

int main()
{
	int aa[8][8];
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)            //i+j计
					printf(" %d", 0);
				else
					printf(" %d", 1);      //i+j案计
			}
			if (i % 2 == 1)
			{
				if (j % 2 == 0)           //i+j案计
					printf(" %d", 1);
				else
					printf(" %d", 0);     //i+j计
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
	
}