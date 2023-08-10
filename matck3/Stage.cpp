#include "stage.h"
#include "Dxlib.h"
#include "InputControl.h"


/***********************
*�}�N����`
************************/
#define HEIGHT              (12)  //�u���b�N�z�u�̃T�C�Y(����)
#define WIDTH               (12)  //�u���b�N�z�u�T�C�Y(��)
#define BLOCKSIZE           (48)  //�u���b�N�T�C�Y
#define BLOCK_IMAGE_MAX     (10)  //�u���b�N�摜��

#define ITEM_MAX            (8)  //�A�C�e���ő吔

#define SELECT_CURSOR       (0)  
#define NEXT_CURSOR         (1)
#define TMP_CURSOR          (2)  

/***********************
*�^��`
************************/

typedef struct
{
	int flg;
	int x, y;
	int width, height;
	int image;
	int backup;


}T_Objet;

typedef struct

{
	int x;
	int y;
}T_CURSOR;


enum
{
	E_NONE,
	E_ONCE,
	E_SECOND

};

/***********************
*�ϐ��錾
************************/

T_Objet Block[HEIGHT][WIDTH];
T_CURSOR select[3];
int Click

/***********************
*�v���g�^�C�v�錾
************************/