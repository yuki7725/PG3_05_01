#include "TitleScene.h"
#include <Novice.h>


void TitleScene::Init()
{
}

void TitleScene::Update()
{
	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	//// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);


	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}

}

void TitleScene::Draw()
{
	//Novice::DrawEllipse(0, 0, 100, 100, 0.0f, WHITE, kFillModeSolid);

	Novice::ScreenPrintf(0, 0, "TITLE  PUSH:SPACE");
}
