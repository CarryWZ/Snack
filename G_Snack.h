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
void Eat_Apple();//吃苹果
void Init_Map();//初始化地图
void Play_Music();//加载音乐
void Init_Snack();//初始化蛇
void Move_Snack();//移动蛇
void Game_Con();//控制蛇
void Init_Apple();//创建苹果
void IsCrossWall();//是否穿墙
void IsEatSlef();//是否吃到自己
void Frash_Score();//刷新分数
void Save();//保存分数
void Clean_Mem();//清楚内存
void IsGameOver();//游戏是否结束
void Creat_Wrong_Apple();//创建毒苹果
void View_Score();
int Char_ToInt(char ch[]);
void Main_Menu();
void SleepTime();
bool IsEatWapple();
//蛇节点
typedef struct SNACK{
	int left;
	int top;
	int right;
	int bottom;
	struct SNACK* next;
}snack;
