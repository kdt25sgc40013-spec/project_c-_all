#pragma once
#include "Enemy.h"

// 敵の生成をまとめるクラス
class Enemy_Factory {
public:
	//　Factoryは生成処理をまとめる。
	static Enemy* Create(int ID) {
		switch (ID){

		case 0:
			return new Slime();
		case 1:
			return new Goblin();
		case 2:
			return new Dragon();
		default:
			return nullptr;

		}
	}
};