#include<graphics.h>
#include<conio.h>
#include<malloc.h>
#include<time.h>
#include<cstdio>
#include <cstdlib>
#include<cstring>
#include<windows.h>
#pragma comment(lib,"winmm.lib")
#define ROWS 30
#define CLOS 30
#define X 0
#define Y 0
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
#define N 1000000
//bool IsExistApple=false;
void Eat_Apple();//��ƻ��
void Init_Map();//��ʼ����ͼ
void Play_Music();//��������
void Init_Snack();//��ʼ����
void Move_Snack();//�ƶ���
void Game_Con();//������
void Init_Apple();//����ƻ��
void IsCrossWall();//�Ƿ�ǽ
void IsEatSlef();//�Ƿ�Ե��Լ�
void Frash_Score();//ˢ�·���
void Save();//�������
void Clean_Mem();//����ڴ�
void IsGameOver();//��Ϸ�Ƿ����
void Creat_Wrong_Apple();//������ƻ��
void View_Score();
int Char_ToInt(char ch[]);
void Main_Menu();
void SleepTime();
bool IsEatWapple();
//�߽ڵ�
typedef struct SNACK{
	int left;
	int top;
	int right;
	int bottom;
	struct SNACK* next;
}snack;
