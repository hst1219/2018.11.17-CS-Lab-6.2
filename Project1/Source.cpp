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
				if (j % 2 == 0)            //i+j�_��
					printf(" %d", 0);
				else
					printf(" %d", 1);      //i+j����
			}
			if (i % 2 == 1)
			{
				if (j % 2 == 0)           //i+j����
					printf(" %d", 1);
				else
					printf(" %d", 0);     //i+j�_��
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
	
}