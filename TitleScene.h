#pragma once

class IScene;

class TitleScene {
public:
	static int sceneNo;

public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual ~TitleScene();

	int GetSceneNo();
};