//显示分数
#include"G_Snack.h"
int HighScore=0;
void View_Score()
{
	FILE *fp;
	char Score[4];
	int score[50],n=0;;
	fp=fopen("Data//Play_Data.txt","r");
	if(!fp)
		printf("打开失败\n");
	else
	{
		while(!(feof(fp)))
		{
			fgets(Score,4,fp);
			score[n]=Char_ToInt(Score);
			n++;
		}
	}
	//计算最高分
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n-1;j++)
		{
			if(score[i]<score[j])
			{
				int temp=score[i];
				score[i]=score[j];
				score[j]=temp;
			}
		}
	}
	system("cls");
	printf("\t\t\t\t\t_________________________________________\n");
	printf("\t\t\t\t\t|\t\t游戏排名\t\t|\n");
	for(i=0;i<n-1;i++)
	{
		if(n>5&&i>4)  break;
		printf("\t\t\t\t\t|\t\t   %d\t\t\t|\n",score[i]);
	}
	printf("\t\t\t\t\t|_______________________________________|\n");
	HighScore=score[0];
}