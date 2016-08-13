//游戏结束判断
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
		//游戏结束
		if(OrEatSelf)
		{
			RECT R={0,0,600,200};
			drawtext("你吃到了自己，按任意键退出游戏",&R,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		}
		else if(OrCrossWall)
		{
			RECT R={0,0,600,200};
			drawtext("你撞墙了，按任意键退出游戏",&R,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		}
		IsOver=1;
	}
}