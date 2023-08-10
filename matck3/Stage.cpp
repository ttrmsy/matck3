#include "stage.h"
#include "Dxlib.h"
#include "InputControl.h"


/***********************
*マクロ定義
************************/
#define HEIGHT              (12)  //ブロック配置のサイズ(高さ)
#define WIDTH               (12)  //ブロック配置サイズ(幅)
#define BLOCKSIZE           (48)  //ブロックサイズ
#define BLOCK_IMAGE_MAX     (10)  //ブロック画像数

#define ITEM_MAX            (8)  //アイテム最大数

#define SELECT_CURSOR       (0)  
#define NEXT_CURSOR         (1)
#define TMP_CURSOR          (2)  

/***********************
*型定義
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
*変数宣言
************************/

T_Objet Block[HEIGHT][WIDTH];
T_CURSOR select[3];
int Click

/***********************
*プロトタイプ宣言
************************/