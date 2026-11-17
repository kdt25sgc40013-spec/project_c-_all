// project_c++.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include"Enemy.h"
#include"Factory.h"
#include"Player.h"

//	場面の切り替え

enum class SCENE
{
	TITLE_MENU,
	GAME_MENU,
	END_MENU,
};

//	どの場面にいるかを判定
SCENE scene= SCENE::TITLE_MENU;
int input;
// コンストラクタ         ○
// ファクトリーパターン   ○
//  データテーブル        ○
//  シングルトン          
//  有限状態機械FMS　　 enum switch
//  オブジェクトプール   一気にメモリーを取ってから使うときに、取る(メモリーリークの可能性がなくなる)


//  表示
int main()
{
	while (scene != SCENE::END_MENU) {
		//	文字を出す
		switch (scene) {
		case SCENE::TITLE_MENU:
			std::cout << "RPG:\n";
			//	1で０

			std::cout << "1を押したらゲームメニューに:\n";
			std::cin >> input;
			if (input == 1) {
				scene = SCENE::GAME_MENU;

			}

			break;
		case SCENE::GAME_MENU:
			std::cout << "GAME_MENU";
			std::cin >> input;
			//	プレイヤーのステータス表示
			
			//	敵のステータス表示
			

			break;
		case SCENE::END_MENU:
			std::cout << "END_MENU";
			std::cin >> input;

			break;
		}
	}
		Enemy* enemy = Enemy_Factory::Create(0);
	
}