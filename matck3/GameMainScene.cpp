#include"GameClearScene.h"
#include"DxLib.h"
#include"Stage.h"
#include"SceneManager.h"



/************************
*�}�N����`
*************************/
#define TIMELIMIT�@�@�@(3600 * 3) //��������
#define NUMBER_IMAGE_MAX(10)     //�����摜��



/***********************
*�^��`
************************/



/***********************
*�ϐ��錾
************************/
int GameScore;
int GameLevel;
int GameMission;
int GameTime;
int GameCount; //����������Ȃ��悤�ɂ��邽�߂̃J�E���g
int ReStartFlag;


int NumberImage[NUMBER_IMAGE_MAX];