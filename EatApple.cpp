//��ƻ��
#include"G_Snack.h"
int score=0;
extern snack *head,*apple;
extern bool IsExistApple;
void Eat_Apple()
{

	bool IsEated=false;
	snack *p;
	p=head;
	//�����ҳ�ʳ��
	if(head->left+20==apple->left&&head->top==apple->top&&head->right+20==apple->right&&head->bottom==apple->bottom)
	{
		apple->next=head;
		head=apple;
		IsEated=true;
		apple=NULL;
		IsExistApple=false;
	}
	//�������ʳ��
	else if(head->left-20==apple->left&&head->top==head->top&&head->right-20==apple->right&&head->bottom==apple->bottom)
	{
		apple->next=head;
		head=apple;
		IsEated=true;
		apple=NULL;
		IsExistApple=false;
	}
	//�����ϳ�ʳ��
	else if(head->left==apple->left&&head->top-20==apple->top&&head->right==apple->right&&head->bottom-20==apple->bottom)
	{
		apple->next=head;
		head=apple;
		IsEated=true;
		apple=NULL;
		IsExistApple=false;
	}
	//�����ϳ�ʳ��
	else if(head->left==apple->left&&head->top+20==apple->top&&head->right==apple->right&&head->bottom+20==apple->bottom)
	{
		apple->next=head;
		head=apple;
		IsEated=true;
		apple=NULL;
		IsExistApple=false;
	}
	if(IsEated)
	{
		score++;
		setfillcolor(RED);
		fillrectangle(p->left+1,p->top+1,p->right-1,p->bottom-1);
		int y=(head->top+head->bottom)/2;
		int x=(head->left+head->right)/2;
		setfillcolor(YELLOW);
		fillcircle(x,y,2);
	}
}