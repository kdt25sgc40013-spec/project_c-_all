#pragma once
#include <string>
class Enemy
{
    // 敵の情報をまとめるクラス 
	// 生成処理はFactoryクラスにまとめる。

	std::string Em_name; // 敵の名前

	int Em_ID; // 敵のID
	int Em_HP; // 敵のHP
	int Em_ATK; // 敵の攻撃力



public:

    //  敵の情報をここでコンストラクタ
	Enemy(std::string NAME,int ID, int HP, int ATK):Em_name(NAME),Em_ID(ID),Em_HP(HP),Em_ATK(ATK){
		Em_name = NAME;
		Em_ID = ID;
		Em_HP = HP;
		Em_ATK = ATK;
	}

	// 

};

class{};