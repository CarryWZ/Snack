//������Ϸ����
#include"G_Snack.h"
extern int score;
void Save()
{
	FILE *fp;
	char Score[4];
	itoa(score,Score,10);
	fp=fopen("Data//Play_Data.txt","a");
	if(fp==NULL)
	{
		printf("��ʧ��,����δ����\n");
		exit(0);
	}
	fprintf(fp,"%s\n",Score);
	fclose(fp);//�ر��ļ�
	fp=NULL;
}
