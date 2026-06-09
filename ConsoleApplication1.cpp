// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
	Enemy* enemy = EnemyFactory::CreateEnemy(1);

	if (enemy != nullptr) {
		std::cout 
			<< enemy->Data.Name
			<< "EXP:" << enemy->Data.EXP 
			<< "Gold:" << enemy->Data.Gold
		    << " CriticalRate:" << enemy->Data.CriticalRate
			<< "%";
	}
	delete enemy;

	return 0;
}
