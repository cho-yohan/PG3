#include <Novice.h>
#include "StageScene.h"

void StageScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
		sceneNo = STAGE;
	}
}
