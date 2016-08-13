//字符转化为数字
#include"G_Snack.h"
int Char_ToInt(char ch[])
{
	int In=0;
	int len;
	len=strlen(ch);
	for(int i=0;i<len&&ch[i]!='\n';i++)
	{
		In=In*10+(int)ch[i]-48;
	}
	return In;
}