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

	//	仮想デストラクタを追加することで、派生クラスのデストラクタが正しく呼び出されるようにする。
	virtual ~Enemy() = default;

};

class Slime :public Enemy {
public:
	Slime() :Enemy(Slime_Name, Slime_ID, Slime_HP, Slime_ATK){
		// Enemyクラスのコンストラクタを呼び出す
	}
	const std::string Slime_Name = "スライム";
	const int Slime_ID = 0;
	const int Slime_HP = 10;
	const int Slime_ATK = 1;

};

class Goblin :public Enemy {
public:
	Goblin() :Enemy(Goblin_Name, Goblin_ID, Goblin_HP, Goblin_ATK){
		// Enemyクラスのコンストラクタを呼び出す
	}
	const std::string Goblin_Name = "ゴブリン";
	const int Goblin_ID = 1;
	const int Goblin_HP = 30;
	const int Goblin_ATK = 3;

};

class Dragon :public Enemy {
public:
	Dragon() :Enemy(Dragon_Name, Dragon_ID, Dragon_HP, Dragon_ATK){
		// Enemyクラスのコンストラクタを呼び出す
	}
	const std::string Dragon_Name = "ドラゴン";
	const int Dragon_ID = 2;
	const int Dragon_HP = 200;
	const int Dragon_ATK = 25;

};