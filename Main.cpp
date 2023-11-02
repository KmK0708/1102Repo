#include <iostream>
#include <vector>
#include <array>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

//���ڰ� �������� <T, U, V> �̷������� ���� �ȴ�.
// template <typename T1, typename T2, typename T3>
//template <class T> �� ����(��������)

// ���ø� �Լ�
template <typename T>

// ������� �� �̰��־�� ����

T Add(T Number1, T Number2)
{
	return Number1 + Number2;
}



int main()
{
	// STL
	// standard template library
	// template class

	// �����迭
	//vector<int> IntArray;
	//array<int, 5> IntArray;
	//list<int> IntArray;
	//int* IntArray = new int[5];

	srand((unsigned int)time(nullptr));

	// �����迭�� ����� �ֱ�
	vector<FGoblin*> GoblinList;

	for (int i = 0; i < (rand() % 5) + 1; ++i)
	{
		GoblinList.push_back(new FGoblin);
	}

	for (int i = 0; i < GoblinList.size(); ++i)
	{
		cout << GoblinList[i]->HP << endl;
	}

	for (int i = 0; i < GoblinList.size(); ++i)
	{
		delete GoblinList[i];
	}

	GoblinList.clear();

	//intArray.assign(5, 0);
	//for (int i = 0; i < IntArray.size(); ++i)
	//{
	//	IntArray[i] = 6 + i;

	//for (int i = 0; i < IntArray.size(); ++i)
	//{
	//	cout << IntArray[i] << endl;
	//}
	//cout << IntArray[0] << endl;

	// template Function
//	cout << Add<float>(1.1f, 2.1f) << endl;
//	cout << Add<char>(34, 33) << endl;

	// standard template library�� ����
	// 1. ������ �ð��� ���� �ɸ���.
	// 2. �ڵ尡 �������.
	// 3. ������� ��ƴ�.

	// �Լ� �����ε��̶�
	// ���� �̸��� �Լ��� ������ ���� �� �ִ�.
	// ��, �Ű������� Ÿ���̳� ������ �޶�� �Ѵ�.
	// ��ȯ���� �������.

	return 0;
}


// �ݺ��� ������ �迭ã������

//int SlimeCount = rand() % 5;
//int GoblinCount = rand() % 5;
//
//FPlayer* Player = new FPlayer();
//FGoblin* Goblins = new FGoblin[GoblinCount];
//FSlime* Slimes = new FSlime[SlimeCount];
//FBoar* Boar = new FBoar();
//
//Player->HP = 100;
//
//Player->Move();
//
//for (int i = 0; i < SlimeCount; i++)
//{
//	Slimes[i].SlimeMove();
//}
//
//for (int i = 0; i < GoblinCount; i++)
//{
//	Goblins[i].GoblinMove();
//}
//
//Boar->BoarMove();
//
//
//delete Player;
//delete[] Goblins;
//delete[] Slimes;
//delete Boar;

