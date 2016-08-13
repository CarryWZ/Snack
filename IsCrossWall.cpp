//ÅÐ¶ÏÊÇ·ñ×²Ç½
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
		//drawtext("ÅöÇ½ÁË",&r1,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
		OrCrossWall=1;
	}
	/*
	//×²µ½ÓÒ±ßµÄÇ½
	if(head->left+20>=600&&directtion==RIGHT)
		OrCrossWall=1;
	//×²µ½×ó±ßµÄÇ½±Ú
	if(head->left<=0&&directtion==LEFT)
		OrCrossWall=1;
	//×²µ½ÏÂÃæµÄÇ½±Ú
	if(head->top<=0&&directtion==UP)
		OrCrossWall=1;
	//×²µ½ÏÂÃæµÄÇ½±Ú
	if(head->top+20>=600&&directtion==DOWN)
		OrCrossWall=1;
	*/
}