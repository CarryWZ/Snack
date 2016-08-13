#include"G_Snack.h"
#include<stdio.h>
int main()
{
	int op=0;
	while(op!=4)
	{
		Main_Menu();
		scanf("%d",&op);
		switch(op)
		{
		//开始游戏
		case 1:
			initgraph(800,600);
			Init_Map();
			Play_Music();
			Init_Snack();
			//Move_Snack();
			Game_Con();
			getch();
			closegraph();
			//Clean_Mem();
			Save();
		//游戏排名
		case 2:
			View_Score();
			getch();
		//双人对战
		case 3:;
		}
		system("cls");
	}
	return 0;
}