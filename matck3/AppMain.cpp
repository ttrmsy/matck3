#include"DxLib.h"
#

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInatance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return -1;
	}

//入力待機
WaitKey();

//Dxライブラリ使用の終了処理
DxLib_End();

return 0;
}
