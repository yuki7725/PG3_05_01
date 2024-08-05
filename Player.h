#pragma once
#include "StageScene.h"

class Player
{
public:

	Player();

	void Init();
	void Update();
	void Draw();

	//メンバ変数
	void MoveRight();
	void MoveLeft();

private:

	struct Vector2 {
		float x, y;
	};

	Vector2 pos_{10,10};
	float speed_ = 10.0f;
};

