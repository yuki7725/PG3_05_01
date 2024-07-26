#pragma once

#include <memory>
#include "IScene.h"
#include "StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

class GameManager {
private:
	//シーンを保持するメンバ関数
	std::unique_ptr<IScene>sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_;
	int prevSceneNo_;

	/*void Init()override;
	void Update()override;
	void Draw()override;*/

public:
	GameManager();
	~GameManager();

	//キー入力
	//memcpy(preKeys, keys, 256);
	//Novice::GetHitKeyStateAll(keys);

	void run();
};

