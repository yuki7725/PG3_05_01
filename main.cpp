#include <Novice.h>
#include <GameManager.h>
#include <clac.h>
#include <IScene.h>


//struct Object {
//	Vector2 pos;
//	float speed;
//	float radius;
//	bool push;
//};

const char kWindowTitle[] = "GC2B_ナカノ_ユキ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	GameManager* gameManager = new GameManager;

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);
	gameManager->run();

	//Object pl{//プレイヤー
	//	{100.0f,400.0f},
	//	{10.0f},
	//	{50.0f},
	//};

	//Object ball{//弾
	//	{100.0f,400.0f},
	//	{20.0f},
	//	{30.0f},
	//	{false},
	//};

	//Object en{//敵
	//	{100.0f,100.0f},
	//	{5.0f},
	//	{50.0f},
	//	
	//};

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	

		//// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///
		

		

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		

		///
		/// ↑描画処理ここまで
		///

		
	

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
