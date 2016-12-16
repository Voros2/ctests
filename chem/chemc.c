/*Color of some copper compunds*/
#include <stdio.h>
int c;
int main()
{
	printf("1.CuO\t2.Cuo2\t3.CuCl2\t4.Cu(NO3)2\t5.Cu(OH)2\t6.CuCO3\t7.CuSO4\n\n");
	scanf("%d",&c);
	if(c==1)
	{
		printf("CuO is black.\n");
	}
	else if(c==2)
	{
		printf("CuO2 is red.\n");
	}
	else if(c==3)
	{
		printf("CuCl2 is green.\n");
	}
	else if(c==4)
	{
		printf("Cu(NO3)2 is blue when hydrated, white when anhydrous.\n");
	}
	else if(c==5)
	{
		printf("Cu(OH)2 is blue when anhydrous.\n");
	}
	else if(c==6)
	{
		printf("CuCO3 is green.\n");
	}
	else if(c==7)
	{
		printf("CuSO4 is blue when hydrated, white when anhydrous.\n");
	}
	else
	{
		printf("Wrong choice!\n");
	}
	return 0;
}
