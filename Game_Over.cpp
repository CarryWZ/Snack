//��Ϸ�����ж�
#include"G_Snack.h"
extern bool OrEatSelf;
extern bool OrCrossWall;
bool IsOver=0;
void IsGameOver()
{
	IsCrossWall();
	IsEatSlef();
	IsEatWapple();
	if(OrEatSelf||OrCrossWall)
	{
		//��Ϸ����
		if(OrEatSelf)
		{
			RECT R={0,0,600,200};
			drawtext("��Ե����Լ�����������˳���Ϸ",&R,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		}
		else if(OrCrossWall)
		{
			RECT R={0,0,600,200};
			drawtext("��ײǽ�ˣ���������˳���Ϸ",&R,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		}
		IsOver=1;
	}
}