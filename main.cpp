#include <iostream>
using namespace std;

// ����N���X
class Enemy {
public:
	void Update();

	void Func1();
	void Func2();
	void Func3();

	// �����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::*table[])();

private:
	// �����o�֐��|�C���^�̃e�[�u�����Q�Ƃ���C���f�b�N�X
	int index = 0;
};

void Enemy::Func1() {
	cout << "�G�̐ڋ߁I" << endl;
}

void Enemy::Func2() {
	cout << "�G�̍U���I" << endl;
}

void Enemy::Func3() {
	cout << "�G�̌�ށI" << endl;
}

void Enemy::Update() {

	// �֐��|�C���^�̃e�[�u������֐������s
	(this->*table[index])();
	int a;
	scanf_s("%d", &a);
	if (a == 0) { 
		index++;
	}
}

// static�Ő錾���������o�֐��|�C���^�e�[�u���̎���
void (Enemy::*Enemy::table[])() = {
  &Enemy::Func1, // �C���f�b�N�X�ԍ�0
  &Enemy::Func2, // �C���f�b�N�X�ԍ�1
  &Enemy::Func3  // �C���f�b�N�X�ԍ�2
};

int main()
{
	Enemy my;

	while (1) {
		my.Update();
	}

	return 0;
}