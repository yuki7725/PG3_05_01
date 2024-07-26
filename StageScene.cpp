#include "StageScene.h"
#include <Novice.h>


void StageScene::Init()
{
}

void StageScene::Update()
{
	

	
		// キー入力結果を受け取る箱
		char keys[256] = { 0 };
		char preKeys[256] = { 0 };
		//// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);


		//敵
		en.pos.x += en.speed;
		if (en.pos.x >= 1270 || en.pos.x <= 0) {
			en.speed *= -1;
		}

		//プレイヤー
		if (keys[DIK_D]) {
			pl.pos.x += pl.speed;
		}
		if (keys[DIK_A]) {
			pl.pos.x -= pl.speed;
		}

		//弾
		if (keys[DIK_SPACE] && ball.push == false) {
			ball.push = true;
			ball.pos.x = pl.pos.x;
			ball.pos.y = pl.pos.y;
		}
		if (ball.push == true) {

			ball.pos.y -= ball.speed;
			if (ball.pos.y <= 0) {
				ball.push = false;
			}
		}

		//弾が当たったらシーン切り替えに書き換える
		if (preKeys[DIK_RETURN] == 0 && keys[DIK_RETURN]) {
			sceneNo = CLEAR;
		}
	
}

void StageScene::Draw()
{
	//敵
	Novice::DrawEllipse((int)en.pos.x, (int)en.pos.y, (int)en.radius, (int)en.radius, 0.0f, RED, kFillModeSolid);

	//プレイヤー
	Novice::DrawEllipse((int)pl.pos.x, (int)pl.pos.y, (int)pl.radius, (int)pl.radius, 0.0f, WHITE, kFillModeSolid);

	//弾
	if (ball.push == true) {
		Novice::DrawEllipse((int)ball.pos.x, (int)ball.pos.y, (int)ball.radius, (int)ball.radius, 0.0f, RED, kFillModeSolid);
	}

	Novice::ScreenPrintf(0, 0, "STAGE  PUSH:ENTER");

}
