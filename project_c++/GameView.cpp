// project_c++.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include"Enemy.h"
#include"Factory.h"

//	場面の切り替え
enum
{
	TITLE_MENU,
	GAME_MENU,
	END_MENU,
};

//	どの場面にいるかを判定
int scene= TITLE_MENU;

// コンストラクタ         ○
// ファクトリーパターン   ○
//  データテーブル        ○
//  シングルトン          
//  有限状態機械FMS　　 enum switch
//  オブジェクトプール   一気にメモリーを取ってから使うときに、取る(メモリーリークの可能性がなくなる)


//  表示
int main()
{
	//	文字を出す
	switch (scene){
		case TITLE_MENU:
			std::cout << "RPG" << std::endl;
			//	1で０

			//	値によって

		break;
		case GAME_MENU:		
			std::cout << "GAME_MENU" << std::endl;

		break;
		case END_MENU:
			std::cout << "END_MENU" << std::endl;

		break;
	}
	
	Enemy* enemy = Enemy_Factory::Create(0);
}