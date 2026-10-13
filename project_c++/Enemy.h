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
    // Enemyクラスのコンストラクタの引数型をconst std::string&に変更
    Enemy(const std::string& NAME, int ID, int HP, int ATK) : Em_name(NAME), Em_ID(ID), Em_HP(HP), Em_ATK(ATK) {}

	//	仮想デストラクタを追加することで、派生クラスのデストラクタが正しく呼び出されるようにする。
	virtual ~Enemy() = default;

};

class Slime : public Enemy {

public:
    Slime() : Enemy( Slime_Name, Slime_ID, Slime_HP, Slime_ATK) {}
    static const std::string Slime_Name;
    static constexpr int Slime_ID = 0;
    static constexpr int Slime_HP = 10;
    static constexpr int Slime_ATK = 1;

};
const std::string Slime::Slime_Name = "スライム";			

class Goblin :public Enemy {

public:
	Goblin() :Enemy(Goblin_Name, Goblin_ID, Goblin_HP, Goblin_ATK){
		// Enemyクラスのコンストラクタを呼び出す
	}
	static const std::string Goblin_Name;
	static constexpr int Goblin_ID = 1;
	static constexpr int Goblin_HP = 30;
	static constexpr int Goblin_ATK = 3;

};

const std::string Goblin::Goblin_Name = "ゴブリン";

class Dragon :public Enemy {
public:
	Dragon() :Enemy(Dragon_Name, Dragon_ID, Dragon_HP, Dragon_ATK){
		// Enemyクラスのコンストラクタを呼び出す
	}
	static const std::string Dragon_Name;
	static constexpr int Dragon_ID = 2;
	static constexpr int Dragon_HP = 200;
	static constexpr int Dragon_ATK = 25;

};

const std::string Dragon::Dragon_Name = "ドラゴン";