#pragma once

enum SCENE { TITLE, STAGE, CLEAR };

class IScene
{
protected:
	//シーン番号を管理する変数
	static int sceneNo;

public:
	//継承先で実装される関数(純粋仮想関数)
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	//仮想デストラクタを用意
	virtual ~IScene();

	//シーン番号のゲッター
	int GetSceneNo();
};

