//初始化地图
#include"G_Snack.h"
int map[ROWS][CLOS];
void Init_Map()
{
	setbkcolor(GREEN);
	cleardevice();
	/*RECT r={600,0,800,100};
	drawtext("swpu超级贪吃蛇",&r,DT_CENTER|DT_VCENTER|DT_SINGLELINE);*/
	RECT r1={600,0,800,150};
	rectangle(600,0,800,150);
	drawtext("swpu超级贪吃蛇",&r1,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	RECT r2={600,190,800,210};
	rectangle(600,150,800,300);
	drawtext("最高分",&r2,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	RECT r3={600,340,800,360};
	rectangle(600,300,800,450);
	drawtext("当前分数",&r3,DT_CENTER|DT_SINGLELINE);
	RECT r4={600,450,800,600};
	rectangle(600,450,800,600);
	drawtext("F2退出游戏",&r4,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	//最高分显示处
	RECT r5={600,150,800,300};
	//rectangle(600,450,800,600);
	drawtext("1500",&r5,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	int i,j;
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<CLOS;j++)
		{
			if(i==0||i==ROWS-1||j==0||j==CLOS-1)
				map[i][j]=1;
			else
				map[i][j]=0;
		}
	}
	IMAGE imagepic_l,imagepic_r;
	loadimage(&imagepic_l,"res\\pic_l.jpg");
	loadimage(&imagepic_r,"res\\pic_r.jpg");
	int x=X,y=Y,x_1=x+20,y_1=y+20;
	for(i=0;i<ROWS;i++)
	{
		x=X;
		x_1=x+20;
		for(j=0;j<CLOS;j++)
		{
			if((i+j)%2)		putimage(x,y,&imagepic_l);
			else	putimage(x,y,&imagepic_r);
			x+=20;
			x_1=x+20;
		}
		y+=20;
		y_1=x+20;
	}
}
