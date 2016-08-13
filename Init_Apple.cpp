//制造食物
#include"G_Snack.h"
bool IsExistApple=false;
extern snack *head;
snack *apple;
void Init_Apple()
{

	srand((unsigned)time(NULL));
	apple=(snack*)malloc(sizeof(snack));
	int x=rand()%ROWS,y=rand()%CLOS;
	apple->left=x*20;
	apple->top=y*20;
	apple->right=apple->left+20;
	apple->bottom=apple->top+20;
	snack *p=head;
	bool IsSame=false;
	while(p)
	{
		if(p->left==apple->left&&p->top==apple->top)
		{
			IsSame=!IsSame;
			free(apple);
			Init_Apple();
		}
		p=p->next;
	}
	if(!IsSame)
	{
		IMAGE imApple;
		loadimage(&imApple,"res\\apple.jpg");
		putimage(apple->left+1,apple->top+1,&imApple);
	}
	IsExistApple=true;
}