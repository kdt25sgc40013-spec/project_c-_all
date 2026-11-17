#pragma once
#include <string>
//	MVC　だと　modelにあたる部分
class Player
{
	// 敵の情報をまとめるクラス 
	// 生成処理はFactoryクラスにまとめる。

	std::string Pl_name; // 敵の名前

	int Pl_ID; // 敵のID
	int Pl_HP; // 敵のHP
	int Pl_ATK; // 敵の攻撃力


public:
	// Playerクラスのコンストラクタの引数型をconst std::string&に変更
	Player(const std::string& NAME, int ID, int HP, int ATK) : Pl_name(NAME), Pl_ID(ID), Pl_HP(HP), Pl_ATK(ATK) {}

	//	仮想デストラクタを追加することで、派生クラスのデストラクタが正しく呼び出されるようにする。
	virtual ~Player() = default;

};

class Morisita : public Player {

public:
	Morisita() : Player(Player_Name, Player_ID, Player_HP, Player_ATK) {}
	static const std::string Player_Name;
	static constexpr int Player_ID = 0;
	static constexpr int Player_HP = 50;
	static constexpr int Player_ATK = 5;
};
const std::string Morisita::Player_Name = "森下";

