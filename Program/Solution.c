#include <stdio.h>
#include <math.h>

struct Player
{
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ���
	// ������ �� ������

	char blood;	    // 1 byte
	int health;	    // 4 byte
	float attack;	// 4 byte
	double defense; // 8 byte

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
};

struct Character
{
	int x;
	int y;
};

struct Enemy
{
	int x;
	int y;
};


int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	//struct Player player = { 'B', 75, 5.5f };

	///*
	//player.attack = 10.5f;
	//player.blood  = 'A';
	//player.health = 100;
	//*/

	//// printf("player.attack�� �� : %f \n", player.attack);
	//printf("player.blood�� ��  : %c  \n", player.blood);
	//printf("player.health�� �� : %d\n", player.health);

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� ��
	// �ֵ���, �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ��
	// �е����ִ� ����ȭ �۾��Դϴ�.

	// printf("Player ����ü�� ũ�� : %d\n", sizeof(struct Player));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ ���� ū
	// �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	struct Character character = { 0, 0 };
	struct Enemy enemy = { 6, 4 };

#pragma endregion


	return 0;
}