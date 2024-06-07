#include <iostream>
using namespace std;

// 自作クラス
class Enemy {
public:
	void Update();

	void Func1();
	void Func2();
	void Func3();

	// メンバ関数ポインタのテーブル
	static void (Enemy::*table[])();

private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0;
};

void Enemy::Func1() {
	cout << "敵の接近！" << endl;
}

void Enemy::Func2() {
	cout << "敵の攻撃！" << endl;
}

void Enemy::Func3() {
	cout << "敵の後退！" << endl;
}

void Enemy::Update() {

	// 関数ポインタのテーブルから関数を実行
	(this->*table[index])();
	int a;
	scanf_s("%d", &a);
	if (a == 0) { 
		index++;
	}
}

// staticで宣言したメンバ関数ポインタテーブルの実体
void (Enemy::*Enemy::table[])() = {
  &Enemy::Func1, // インデックス番号0
  &Enemy::Func2, // インデックス番号1
  &Enemy::Func3  // インデックス番号2
};

int main()
{
	Enemy my;

	while (1) {
		my.Update();
	}

	return 0;
}