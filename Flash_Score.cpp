//��ʾ��ǰ����
#include"G_Snack.h"
extern int score;
void Frash_Score()
{
	char Score[4];
    itoa(score,Score, 10);//10����ʮ����
	RECT r={600,300,800,450};
	rectangle(600,300,800,450);
	drawtext(Score,&r,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
}