#pragma once
#include "IScene.h"

class StageScene : public IScene {
	void Update(char* keys, char* preKeys) override;
};