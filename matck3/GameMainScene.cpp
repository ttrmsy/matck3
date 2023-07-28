#include"GameClearScene.h"
#include"DxLib.h"
#include"Stage.h"
#include"SceneManager.h"



/************************
*�}�N����`
*************************/
#define TIMELIMIT        (3600 * 3) //��������
#define NUMBER_IMAGE_MAX (10)     //�����摜��



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


int NumberImage[NUMBER_IMAGE_MAX];   //�����p�摜



/***********************
*�v���g�^�C�v�錾
************************/




/***********************
*�Q�[�����C����ʁF����������
* �����F�Ȃ�
* �߂�l�F�G���[���
************************/

int GameMainScene_Initialze(void)
{
	int ret = 0;
	int i;


	//�摜�ǂݍ���
	LoadDivGraph("images/number.pug", NUMBER_IMAGE_MAX,
		NUMBER_IMAGE_MAX, 1, 60, 120, NumberImage);


	//�X�e�[�W�@�\������
	ret = StageInitialize();


	//�G���[�`�F�b�N
	for (i = 0; i < NUMBER_IMAGE_MAX; i++)
	{
		if (NumberImage[i] == D_ERROR)
		{
			ret = D_ERROR;

			break;
		}
	}


	//�Q�[���v���C�����񂩂ǂ����H
	if (GameCount == 0)
	{
		GameScore = 0;       //�X�R�A�̏�����
		GameLevel = 1;       //�Q�[�����x���̏�����
		Set_StageMission(3); //�~�b�V�����̏�����
		GameCount++;         //����̐ݒ�
	}
	else
	{
		GameLevel++;         //�Q�[�����x���̍X�V
		Set_StageMission(3); //�~�b�V�����𑝂₷
	}
	GameTime = TIMELIMIT;    //�������Ԃ̏�����



	return ret;

}


/***********************
*�Q�[�����C����ʁF�X�V����
* �����F�Ȃ�
* �߂�l�F�Ȃ�
************************/

void GameMainScene_Update(void)

{
	switch (Get_StageState())
	{
	case 0:

			SelectBlock();
			break;

	case 2:
			MoveBlock();
			break;

	case 3:

			CheckBlock();
			break;

	case 4:
			CheckBlock();
			break;


	}
	//�������Ԃ̍X�V
	GameTime--;


	//�������Ԃ��Ȃ��Ȃ�����A�Q�[���I�o�[�ɑJ�ڂ���
	if (GameTime < 0)
	{
		Change_Scene(E_GAME_OVER);
	}
}

