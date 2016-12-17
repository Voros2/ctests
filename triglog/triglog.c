/*Name, Logarithim, Trigonmetry!*/
#include <stdio.h>
#include <math.h>
int c;
int o;
int x;
char n;
void trig()
{
	printf("type in value\n");
	scanf("%d",&x);
	printf("1.Cosine\t2.Sine\t3.Tangent\n\n");
	scanf("%d",&o);
	if(o==1)
	{
		printf("cos %d is %f",x,cos(x));
	}
	else if(o==2)
	{
		printf("sin %d is %f\n",x,sin(x));
	}
	else if(o==3)
	{
		printf("tan %d is %f\n",x,tan(x));
	}
}
void logx()
{
	printf("Type in value\n");
	scanf("%d",&x);
	printf("1.Log10\t2.Loge\n");
	scanf("%d",&o);
	if(o==1)
	{
      printf("log10 %d is %f\n",x,log10(x));
	}
	else if(o==2)
	{
		printf("loge %d is %f\n",x,log(x));
	}
}
int main()
{
	printf("Type in your name:\n");
	gets(&n);
	printf("Hello, ");
	puts(&n);
	printf("What you like to do?\n1.Trigonmetry\t2.Logarithim\n\n");
	scanf("%d",&c);
	if(c==1)
	{
		trig();
	}
	else if(c==2)
	{
		logx();
	}
	return 0;
}
