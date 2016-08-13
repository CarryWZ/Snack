//显示当前分数
#include"G_Snack.h"
extern int score;
void Frash_Score()
{
	char Score[4];
    itoa(score,Score, 10);//10代表十进制
	RECT r={600,300,800,450};
	rectangle(600,300,800,450);
	drawtext(Score,&r,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
}