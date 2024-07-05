#pragma once
#include "IScene.h"

class TitleScene : public IScene {
	void Update(char* keys, char* preKeys) override;
};