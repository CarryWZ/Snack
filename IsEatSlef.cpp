//判断是否吃到自己
#include"G_Snack.h"
extern snack* head;
extern int directtion;
bool OrEatSelf=0;
void IsEatSlef()
{

	snack *p=head->next;
	//bool IsSame=false;
	while(p)
	{
		//if(p->left==head->right-20&&p->top==head->bottom-20)
		//{
			//吃了自己
			//OrEatSelf=1;
			//RECT r1={600,150,800,200};
			//rectangle(600,150,800,200);
			//drawtext("吃到了自己",&r1,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
			//Sleep(1000);
			//exit(0);
		//}
		//从上面吃了自己
		if(p->left==head->left&&p->top-20==head->top&&directtion==DOWN)	OrEatSelf=1;
		//从下面吃了自己
		else if(p->left==head->left&&p->top+20==head->top&&directtion==UP)	OrEatSelf=1;
		//从左边吃了自己
		else if(p->top==head->top&&p->left-20==head->left&&directtion==RIGHT)	OrEatSelf=1;
		//从右边吃了自己
		else if(p->top==head->top&&p->left+20==head->left&&directtion==LEFT)		OrEatSelf=1;
		else p=p->next;
	}
}