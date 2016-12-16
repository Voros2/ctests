#include <stdio.h>
char h;
char s;
char w;
int x;
int t;
/*calculates PAR from seconds to minutes*/
void pars(x)
{
	t=x/60;
	return;
}
/*this one from hours to minutes*/
void parh(x)
{
	t=x*60;
	return;
}
int main()
{
	printf("Hours or Seconds?\n");
	scanf("%c",&w);
	if(w&=h)
	{
	scanf("%d",&x);
	parh(x);
	printf("%d hours to %d minutes\n",x,t);
	}
	else
	{
		scanf("%d",&x);
		pars(x);
		printf("%d seconds to %d minutes\n",x,t);
	}
	return 0;
}
