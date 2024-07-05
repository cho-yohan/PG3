#include <Novice.h>
#include "ClearScene.h"

void ClearScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
		sceneNo = CLEAR;
	}
}
