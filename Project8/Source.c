#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 1000

int main()
{
#pragma region ���� ����
	// fopen() : ������ �����ִ� �Լ�
    // "w" : ������ ���� ��带 �����մϴ�.

	//FILE* file = fopen("Data.txt", "w");

	//// fputs() : ���Ͽ� �ؽ�Ʈ�� �Է��մϴ�.
	// fputs("health", file);

	//// fclose() : ���� ������ �ݾ��ݴϴ�.
	// fclose(file);
#pragma endregion

#pragma region ���� �б�
	// "r" : ������ �б� ��带 �����մϴ�.
	FILE * file = fopen("Data.txt", "r");

	// ������ �����͸� ���� �� �ִ� char �迭�� �����մϴ�.
	char buffer[SIZE] = { 0, };

	// fread() : ������ ��ü �о��ִ� �Լ�
	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
#pragma endregion


	return 0;
}
