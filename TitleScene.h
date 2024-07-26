#pragma once

#include <memory>
#include "IScene.h"
#include "StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

class TitleScene:public IScene
{
public:
	void Init()override;
	void Update()override;
	void Draw()override;
};

