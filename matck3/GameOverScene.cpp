#include "GameOverScene.h"
#include "DxLib.h"
#include "SceneManager.h"


/***********************
*�ϐ��錾
************************/
int GameOverImage;
int GameOverSE;
int GameOverFlag;

/***********************
*�v���g�^�C�v�錾
************************/


/***********************
*�Q�[�����C����ʁF����������
* ���@���F�Ȃ�
* �߂�l�F�G���[���
************************/

int GameOverScene_Initialize(void)
{
	int ret = 0;


	//�摜�ǂݍ���
	GameOverImage = LoadGraph("images/gameover.pug");

    //�����ǂݍ���
	GameOverSE = LoadSoundMem("sounds/gaemover_se.mp3");

	GameOverFlag = FALSE;

	//�G���[�`�F�b�N
	if (GameOverImage == -1)
	{
		ret = -1;

	}
	if

}