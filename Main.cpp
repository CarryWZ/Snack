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
		//��ʼ��Ϸ
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
		//��Ϸ����
		case 2:
			View_Score();
			getch();
		//˫�˶�ս
		case 3:;
		}
		system("cls");
	}
	return 0;
}