#include"G_Snack.h"
int directtion=RIGHT;
extern snack *tail,*head;
extern int score;
extern int O_Time;
void Move_Snack()
{
	if(directtion==5)
		getch();
	int left,top,right,bottom;
	int newleft,newtop,newright,newbottom;
	IMAGE imagepic_l,imagepic_r;
	snack *p;
	//Init_Apple();
	/*setcolor(WHITE);
	setfillcolor(GREEN);
	fillrectangle(tail->left,tail->top,tail->right,tail->bottom);
	*/
	//������β
	loadimage(&imagepic_l,"res\\pic_l.jpg");
	loadimage(&imagepic_r,"res\\pic_r.jpg");
	if((tail->left+tail->top)%40)
	{
		putimage(tail->left+1,tail->top+1,&imagepic_l);
		//fillrectangle(x,y,x_1,y_1);
	}
	else
	{
		putimage(tail->left+1,tail->top+1,&imagepic_r);
	}
	p=head;
	while(p!=NULL)
	{
		//�ٶȿ���
		Sleep(O_Time);
		if(p==head)
		{
			//������ͷԭ��λ��
			newleft=p->left;
			newright=p->right;
			newtop=p->top;
			newbottom=p->bottom;
			//��ͷʹ����һλ������
			if(directtion==RIGHT)
			{
				p->left+=20;
				p->right+=20;
			}
			if(directtion==LEFT)
			{
				p->left-=20;
				p->right-=20;
			}
			if(directtion==UP)
			{
				p->top-=20;
				p->bottom-=20;
			}
			if(directtion==DOWN)
			{
				p->top+=20;
				p->bottom+=20;
			}
			if(directtion==5)
			{
				getch();
			}
		}
		//�����ڵ�ʹ����һ�ڵ��λ��
		else
		{
			//���浱ǰ��������
			left=p->left;
			right=p->right;
			top=p->top;
			bottom=p->bottom;
			//������ǰλ�ñ���������һ���ڵ�����
			p->bottom=newbottom;
			p->left=newleft;
			p->right=newright;
			p->top=newtop;
			newbottom=bottom;
			newleft=left;
			newright=right;
			newtop=top;
			
		}
		//�ж��Ƿ�ײǽ
		//IsCrossWall();
		//�����ߵĵ�ǰ��
		setcolor(WHITE);
		setfillcolor(RED);
		fillrectangle(p->left+1,p->top+1,p->right-1,p->bottom-1);
		if(p==head)
		{
			fillrectangle(newleft+1,newtop+1,newright-1,newbottom-1);
			int x=(p->left+p->right)/2;
			int y=(p->bottom+p->top)/2;
			setfillcolor(YELLOW);
			fillcircle(x,y,2);
		}
		p=p->next;
	}
}