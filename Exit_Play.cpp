//�˳���Ϸ��������ֻ���
#include"G_Snack.h"
extern snack *head,*tail,*apple;
void Clean_Mem()
{
	snack *p=head;
	while(head->next)
	{
		p=head;
		head=head->next;
		free(p);
		p=NULL;
	}
	free(apple);
	apple=NULL;
}