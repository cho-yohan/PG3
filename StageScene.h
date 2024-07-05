#pragma once

class StageScene {
protected:
	static int sceneNo;
public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual ~StageScene();

	int GetSceneNo();
};