//�ж��Ƿ�Ե��Լ�
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
			//�����Լ�
			//OrEatSelf=1;
			//RECT r1={600,150,800,200};
			//rectangle(600,150,800,200);
			//drawtext("�Ե����Լ�",&r1,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
			//Sleep(1000);
			//exit(0);
		//}
		//����������Լ�
		if(p->left==head->left&&p->top-20==head->top&&directtion==DOWN)	OrEatSelf=1;
		//����������Լ�
		else if(p->left==head->left&&p->top+20==head->top&&directtion==UP)	OrEatSelf=1;
		//����߳����Լ�
		else if(p->top==head->top&&p->left-20==head->left&&directtion==RIGHT)	OrEatSelf=1;
		//���ұ߳����Լ�
		else if(p->top==head->top&&p->left+20==head->left&&directtion==LEFT)		OrEatSelf=1;
		else p=p->next;
	}
}