//保存游戏分数
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
		printf("打开失败,分数未保存\n");
		exit(0);
	}
	fprintf(fp,"%s\n",Score);
	fclose(fp);//关闭文件
	fp=NULL;
}
