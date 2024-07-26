#include "GameManager.h"
#include <Novice.h>

//コンストラクタ
GameManager::GameManager()
{
	//各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	//初期シーンの設定
	currentSceneNo_ = TITLE;
}

//デストラクタ
GameManager::~GameManager(){}


void GameManager::run() {

	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		char keys[256] = { 0 };
		char preKeys[256] = { 0 };

		//シーンのチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		//シーンの変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		//更新処理
		sceneArr_[currentSceneNo_]->Update();

		//描画処理
		sceneArr_[currentSceneNo_]->Draw();
		// フレームの終了
		Novice::EndFrame();


		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
}
