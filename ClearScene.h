#pragma once
#include "IScene.h"

class ClearScene : public IScene {
	void Update(char* keys, char* preKeys) override;
};