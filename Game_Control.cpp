//游戏方向控制
#include"G_Snack.h"
extern int directtion;
extern bool IsExistApple;
extern bool IsOver;
extern snack *P_Apple,*head;
extern snack* apple;
extern int score;
int O_Time=100;
void Game_Con()
{
	
	while(1)
	{
		IsGameOver();
		/*if(P_Apple)
		{
			if(P_Apple->left==head->left&&P_Apple->top==head->top)
				break;
		}*/
		if(IsOver||GetAsyncKeyState(VK_F2))
		{
			break;//结束游戏
		}
		if(GetAsyncKeyState(VK_UP)&&directtion!=DOWN)
		{
			directtion=UP;
		}
		else if(GetAsyncKeyState(VK_DOWN)&&directtion!=UP)
		{
			directtion=DOWN;
		}
		else if(GetAsyncKeyState(VK_LEFT)&&directtion!=RIGHT)
		{
			directtion=LEFT;
		}
		else if(GetAsyncKeyState(VK_RIGHT)&&directtion!=LEFT)
		{
			directtion=RIGHT;
		}
		else if(GetAsyncKeyState(VK_ESCAPE))
		{
			directtion=5;
		}
		else if(GetAsyncKeyState(VK_SPACE))
		{
			getch();
		}
		//Move_Snack();
		Frash_Score();
		if(!IsExistApple)
		{
			Init_Apple();
			if(P_Apple!=NULL)
			{
				if(((P_Apple->left+P_Apple->top)/20)%2==0)
				{
					IMAGE pic_r;
					loadimage(&pic_r,"res\\pic_r.jpg");
					putimage(P_Apple->left,P_Apple->top,&pic_r);
				}
				else
				{
					IMAGE pic_l;
					loadimage(&pic_l,"res\\pic_l.jpg");
					putimage(P_Apple->left,P_Apple->top,&pic_l);
				}
				free(P_Apple);
				P_Apple=NULL;
			}
			Creat_Wrong_Apple();
			if(score%2==0&&O_Time>20)  O_Time-=20;
		}
		Eat_Apple();
		//Creat_Wrong_Apple();
	}
}