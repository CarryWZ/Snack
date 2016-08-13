//³õÊ¼»¯Éß
#include"G_Snack.h"
snack *head,*tail;
void Init_Snack()
{
	snack *p;
	head=(snack*)malloc(sizeof(snack));	
	int startRow=10,startCol=5;
	head->left=startCol*20;
	head->top=startRow*20;
	head->right=head->left+20;
	head->bottom=head->top+20;
	p=head;
	for(int i=0;i<3;i++)
	{
		tail=(snack*)malloc(sizeof(snack));
		tail->left=startCol*20;
		tail->top=(startRow+i+1)*20;
		tail->right=tail->left+20;
		tail->bottom=tail->top+20;
		p->next=tail;
		tail->next=NULL;
		p=tail;
	}
	p=head;
	//»­Éß
	while(p!=NULL)
	{
		setfillcolor(RED);
		fillrectangle(p->left+1,p->top+1,p->right-1,p->bottom-1);
		if(p==head)
		{
			int x=(p->left+p->right)/2;
			int y=(p->top+p->bottom)/2;
			setfillcolor(YELLOW);
			fillcircle(x,y,2);
		}
		p=p->next;
	}
}