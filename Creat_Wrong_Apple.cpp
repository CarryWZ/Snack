//创建毒苹果
#include"G_Snack.h"
snack *P_Apple;
extern snack *head,*apple;
bool IsExistW_apple=0;
bool Is_WSame=0;
void Creat_Wrong_Apple()
{
	snack *p;
	srand((unsigned)clock());
	P_Apple=(snack*)malloc(sizeof(snack));
	int x=rand()%ROWS;
	int y=rand()%CLOS;
	P_Apple->left=x*20;
	P_Apple->top=y*20;
	P_Apple->right=P_Apple->left+20;
	P_Apple->bottom=P_Apple->top+20;
	p=head;
	while(p)
	{
		if(p->left==P_Apple->left&&p->top==P_Apple->top&&p->right==P_Apple->right&&p->bottom==P_Apple->bottom)
		{
			Is_WSame=1;
			free(P_Apple);
			Creat_Wrong_Apple();
		}
		p=p->next;
	}
	//判断毒苹果是否和食物重合
/*	if(P_Apple->left==apple->left&&P_Apple->top==apple->top)
	{
		Is_WSame=1;
		free(P_Apple);
		Creat_Wrong_Apple();
	}*/
//	Is_WSame=0;
	if(!Is_WSame)
	{
		IsExistW_apple=1;
		IMAGE imP_Apple;
		loadimage(&imP_Apple,"res\\wapple.jpg");
		putimage(P_Apple->left,P_Apple->top,&imP_Apple);
	}
}