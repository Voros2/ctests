//Rough offset generator
#include <stdio.h>
#include <stdlib.h>
int c;
int x;
int y;
void home()
{
	printf("1.HUD Offsets\t2.Sprite Offsets\t4.Information\t0.Exit\n\n");
	scanf("%d",&c);
	return;
}
void hoffset()
{
	int ax;
	printf("Type in width: \n");
	scanf("%d",&x);
	printf("Type in height: \n\n");
	scanf("%d",&y);
	ax=x/2;
	printf("X offset: -%d\nY offset: -%d\n\n",160-ax,200-y);
	home();
	return;
}
void soffset()
{
	printf("Type in width: \n");
	scanf("%d",&x);
	printf("Type in height: \n\n");
	scanf("%d",&y);
	printf("X Offset: %d\nY Offset: %d\n\n",x/2,y);
	home();
	return;
}
void info()
{
	printf("Offsets tell the engine where a sprite should be displayed onscreen or ingame.\nOnscreen sprites are based on a 320x200 grid system.\nThe original starting point is the top-left corner of the grid.\nGraphically, this point would be (0,200).\nFor calculating the Y offset value, you subtract the height of the sprite from 200 eg. 200-50=150.\nAdd a negative sign (-) in front of the result,\nas the new point will move away from the origin.\nFor the X offset value, the original width of the sprite is divided by 2,\nthen is subtracted from 160.\nWhy 160?\n320 divided by 2 equals to 160.\nConsidering that the sprite is centered, this technique is used.\nIf the sprite is centered, its midpoint on the grid would be (160,0).\nThat means the half of the sprite will be present inside half of the grid.\nThus, 160 minus half of the width, gives us the X offset value.\n\nFor ingame sprites, it's simpler.\nUsually, the Y offset is the same as the height of the sprite.\nThe X offset is the width divided by 2,\nas the sprite should be centered ingame.\nThat's all you need to know.\n\n");
	return;
}
int main()
{
	printf("Get rough offsets for your sprites!\nYou will have to make minor changes anyway.\nThis program assumes weapon sprites are centered.\n\n");
	home();
	if(c==1)
	{
		hoffset();
		home();
	}
	if(c==2)
	{
		soffset();
		home();
	}
	if(c==4)
	{
		info();
		home();
	}
	if(c==0)
	{
		exit(0);
	}
	else
	{
		printf("Wrong choice.\n");
		home();
	}
	return 0;
}
