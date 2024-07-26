#pragma once

#include <memory>
#include "IScene.h"
#include "StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

class StageScene:public IScene
{
public:
	void Init()override;
	void Update()override;
	void Draw()override;

private:
	struct Vector2 {
		float x;
		float y;
	};

	struct Object {
		Vector2 pos;
		float speed;
		float radius;
		bool push;
	};

	Object pl{//プレイヤー
		{100.0f,400.0f},
		{10.0f},
		{50.0f},
	};

	Object ball{//弾
		{100.0f,400.0f},
		{20.0f},
		{30.0f},
		{false},
	};

	Object en{//敵
		{100.0f,100.0f},
		{5.0f},
		{50.0f},

	};
};

