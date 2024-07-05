#include <Novice.h>
#include "TitleScene.h"

void TitleScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
		sceneNo = TITLE;
	}
}
