#pragma once
//シングルトン：
//ゲーム中に1個だけ存在してほしいオブジェクトを作るための考え方
class GameManager
{

private:
	GameManager(){}

public:
	//	シングルトンの基本形
	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager&) = delete;

	static GameManager& Instance() {
		static GameManager instance;
		
		return instance;
	}

	//　ゲーム内で一回だけ必要な処理をここに書く


	// ゲーム開始処理
	void StartGame()
	{
		
	}

};