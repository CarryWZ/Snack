#include"G_Snack.h"
int directtion=RIGHT;
extern snack *tail,*head;
extern int score;
extern int O_Time;
void Move_Snack()
{
	if(directtion==5)
		getch();
	int left,top,right,bottom;
	int newleft,newtop,newright,newbottom;
	IMAGE imagepic_l,imagepic_r;
	snack *p;
	//Init_Apple();
	/*setcolor(WHITE);
	setfillcolor(GREEN);
	fillrectangle(tail->left,tail->top,tail->right,tail->bottom);
	*/
	//擦除蛇尾
	loadimage(&imagepic_l,"res\\pic_l.jpg");
	loadimage(&imagepic_r,"res\\pic_r.jpg");
	if((tail->left+tail->top)%40)
	{
		putimage(tail->left+1,tail->top+1,&imagepic_l);
		//fillrectangle(x,y,x_1,y_1);
	}
	else
	{
		putimage(tail->left+1,tail->top+1,&imagepic_r);
	}
	p=head;
	while(p!=NULL)
	{
		//速度控制
		Sleep(O_Time);
		if(p==head)
		{
			//保存蛇头原来位置
			newleft=p->left;
			newright=p->right;
			newtop=p->top;
			newbottom=p->bottom;
			//蛇头使用下一位置坐标
			if(directtion==RIGHT)
			{
				p->left+=20;
				p->right+=20;
			}
			if(directtion==LEFT)
			{
				p->left-=20;
				p->right-=20;
			}
			if(directtion==UP)
			{
				p->top-=20;
				p->bottom-=20;
			}
			if(directtion==DOWN)
			{
				p->top+=20;
				p->bottom+=20;
			}
			if(directtion==5)
			{
				getch();
			}
		}
		//其他节点使用上一节点的位置
		else
		{
			//保存当前蛇身坐标
			left=p->left;
			right=p->right;
			top=p->top;
			bottom=p->bottom;
			//将蛇身当前位置变成蛇身的上一个节点坐标
			p->bottom=newbottom;
			p->left=newleft;
			p->right=newright;
			p->top=newtop;
			newbottom=bottom;
			newleft=left;
			newright=right;
			newtop=top;
			
		}
		//判断是否撞墙
		//IsCrossWall();
		//绘制蛇的当前节
		setcolor(WHITE);
		setfillcolor(RED);
		fillrectangle(p->left+1,p->top+1,p->right-1,p->bottom-1);
		if(p==head)
		{
			fillrectangle(newleft+1,newtop+1,newright-1,newbottom-1);
			int x=(p->left+p->right)/2;
			int y=(p->bottom+p->top)/2;
			setfillcolor(YELLOW);
			fillcircle(x,y,2);
		}
		p=p->next;
	}
}