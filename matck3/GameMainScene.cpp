#include"GameClearScene.h"
#include"DxLib.h"
#include"Stage.h"
#include"SceneManager.h"



/************************
*マクロ定義
*************************/
#define TIMELIMIT　　　(3600 * 3) //制限時間
#define NUMBER_IMAGE_MAX(10)     //数字画像数



/***********************
*型定義
************************/



/***********************
*変数宣言
************************/
int GameScore;
int GameLevel;
int GameMission;
int GameTime;
int GameCount; //初期化されないようにするためのカウント
int ReStartFlag;


int NumberImage[NUMBER_IMAGE_MAX];