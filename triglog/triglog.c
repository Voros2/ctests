/*Messed up calculator*/
#include <stdio.h>
#include <math.h>
/*Basic stuff*/
int o,x,y,z;
/*Related integers*/
int r1,r2,r3,s;
float a,b,c;
void home()
{
	printf("\n\n1.Trigonometry\t2.Logarithim\t3.Equation\t4.Basic\n");
	scanf("%d",&o);
}
/*Trigonometry*/
void trig()
{
	printf("1.Cosine\t2.Sine\t3.Tangent\n\n");
	scanf("%d",&o);
	if(o==1)
	{
		printf("Type in value\n");
		scanf("%d",&x);
		printf("cos %d is %f",x,cos(x));
		home();
	}
	else if(o==2)
	{
		printf("Type in value\n");
		scanf("%d",&x);
		printf("sin %d is %f\n",x,sin(x));
		home();
	}
	else if(o==3)
	{
		printf("Type in value\n");
		scanf("%d",&x);
		printf("tan %d is %f\n",x,tan(x));
		home();
	}
	return;
}
/*Logarithims*/
void logx()
{
	printf("1.Lg\t2.Ln\n");
	scanf("%d",&o);
	if(o==1)
	{
		printf("Type in value\n");
		scanf("%d",&x);
		printf("lg %d is %f\n",x,log10(x));
		home();
	}
	else if(o==2)
	{
		printf("Type in value\n");
		scanf("%d",&x);
		printf("ln %d is %f\n",x,log(x));
		home();
	}
	return;
}
/*Equation roots*/
void equat()
{
	printf("1.2nd Degree\t2.3rd Degree\n\n");
	scanf("%d",&o);
	if(o==1)
	{
		printf("1.Roots\t2.Solutions\n");
		scanf("%d",&o);
		if(o==2)
		{
	printf("Type in a: \n");
	scanf("%f",&a);
	printf("Type in b: \n");
	scanf("%f",&b);
	printf("Type in c: \n");
	scanf("%f",&c);
	s=sqrt((b*b)-(4*a*c));
	r1=(-b+s)/(2*a);
	r2=(-b-s)/(2*a);
	printf("Roots of the equation: %d, %d\n",r1,r2);
	home();
		}
}
return;
}
/*Part 2 of the simple stuff*/
void basic()
{
	printf("1.Addition\t2.Subtraction\t4.Multiplication\t4.Division\n\n");
	scanf("%d",&o);
	if(o==1)
	{
		printf("Type in a\n");
		scanf("%f",&a);
		printf("Type in b\n");
		scanf("%f",&b);
		printf("Answer: %f\n",a+b);
		home();
	}
	else if(o==2)
	{
		printf("Type in a\n");
		scanf("%f",&a);
		printf("Type in b\n");
		scanf("%f",&b);
		printf("Answer: %f\n",a-b);
		home();
	}
	else if(o==3)
	{
		printf("Type in a\n");
		scanf("%f",&a);
		printf("Type in b\n");
		scanf("%f",&b);
		printf("Answer: %f\n",a*b);
		home();
	}
	else if(o==4)
	{
		printf("Type in a\n");
		scanf("%f",&a);
		printf("Type in b\n");
		scanf("%f",&b);
		printf("Answer: %f\n",a/b);
		home();
	}
return;
}
/*Main program*/
int main()
{
	home();
	if(o==1)
	{
		trig();
	}
	else if(o==2)
	{
		logx();
	}
	else if(o==3)
	{
		equat();
	}
	else if(o==4)
	{
		basic();
	}
	return 0;
}
