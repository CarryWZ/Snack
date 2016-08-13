#include"G_Snack.h"
extern snack *head,*P_Apple;
bool IsEatWapple()
{
	if(head->left==P_Apple->left&&head->top==P_Apple->top)
	{
		return true;
	}
	return false;
}