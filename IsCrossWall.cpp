//�ж��Ƿ�ײǽ
#include"G_Snack.h"
extern snack* head;
extern int directtion;
bool OrCrossWall=0;
void IsCrossWall()
{

	if(head->left<0||head->right>600||head->top<0||head->bottom>600)
	{
		//RECT r1={600,150,800,200};
		//rectangle(600,150,800,200);
		//drawtext("��ǽ��",&r1,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		OrCrossWall=1;
	}
	/*
	//ײ���ұߵ�ǽ
	if(head->left+20>=600&&directtion==RIGHT)
		OrCrossWall=1;
	//ײ����ߵ�ǽ��
	if(head->left<=0&&directtion==LEFT)
		OrCrossWall=1;
	//ײ�������ǽ��
	if(head->top<=0&&directtion==UP)
		OrCrossWall=1;
	//ײ�������ǽ��
	if(head->top+20>=600&&directtion==DOWN)
		OrCrossWall=1;
	*/
}