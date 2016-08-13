//º”‘ÿ±≥æ∞“Ù¿÷
#include"G_Snack.h"
void Play_Music()
{
	mciSendString("open res//backmusic.wma alias BackMusic",NULL,0,NULL);
	mciSendString("setaudio BackMusic colume to 300",NULL,0,NULL);
	mciSendString("play BackMusic repeat",NULL,0,NULL);
}