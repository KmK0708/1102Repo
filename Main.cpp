#include <iostream>
#include <vector>
#include <array>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

//인자가 여러개면 <T, U, V> 이런식으로 쓰면 된다.
// template <typename T1, typename T2, typename T3>
//template <class T> 도 가능(옛날버전)

// 템플릿 함수
template <typename T>

// 헤더에서 얘 이거있어요 선언

T Add(T Number1, T Number2)
{
	return Number1 + Number2;
}



int main()
{
	// STL
	// standard template library
	// template class

	// 동적배열
	//vector<int> IntArray;
	//array<int, 5> IntArray;
	//list<int> IntArray;
	//int* IntArray = new int[5];

	srand((unsigned int)time(nullptr));

	// 동적배열에 고블린값 넣기
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

	// standard template library의 단점
	// 1. 컴파일 시간이 오래 걸린다.
	// 2. 코드가 길어진다.
	// 3. 디버깅이 어렵다.

	// 함수 오버로딩이란
	// 같은 이름의 함수를 여러개 만들 수 있다.
	// 단, 매개변수의 타입이나 개수가 달라야 한다.
	// 반환값은 상관없다.

	return 0;
}


// 반복문 이유는 배열찾으려고

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

