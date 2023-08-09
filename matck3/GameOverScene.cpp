#include "GameOverScene.h"
#include "DxLib.h"
#include "SceneManager.h"


/***********************
*変数宣言
************************/
int GameOverImage;
int GameOverSE;
int GameOverFlag;

/***********************
*プロトタイプ宣言
************************/


/***********************
*ゲームメイン画面：初期化処理
* 引　数：なし
* 戻り値：エラー情報
************************/

int GameOverScene_Initialize(void)
{
	int ret = 0;


	//画像読み込み
	GameOverImage = LoadGraph("images/gameover.pug");

    //音源読み込み
	GameOverSE = LoadSoundMem("sounds/gaemover_se.mp3");

	GameOverFlag = FALSE;

	//エラーチェック
	if (GameOverImage == -1)
	{
		ret = -1;

	}
	if

}