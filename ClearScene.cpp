#include "ClearScene.h"
#include <Novice.h>


void ClearScene::Init()
{
}

void ClearScene::Update()
{	
	

	
	// キー入力結果を受け取る箱
char keys[256] = { 0 };
char preKeys[256] = { 0 };
//// キー入力を受け取る
memcpy(preKeys, keys, 256);
Novice::GetHitKeyStateAll(keys);



	//while (Novice::ProcessMessage() == 0) {
	//	Novice::BeginFrame();
		if (preKeys[DIK_E] == 0 && keys[DIK_E]) {
			sceneNo = TITLE;
		}
	//}
}

void ClearScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "CLEAR  PUSH:E");

}
