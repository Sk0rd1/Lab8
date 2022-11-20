#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;
#define SIZE 10

template <class L>
class Information {
public:
	L a[SIZE];
	L& operator[](int i);
	L& operator==(const L & other)
	{
		if (this->a == other->a)
			return true;
		else
			return false;
	}
};

template <class L>
L& Information<L>::operator[](int i)
{
	return a[i];
}

template <class L>
ostream& operator<<(ostream& t, Information<L>& L)
{
	for (int i = 0; i < SIZE; i++)
		t << L.a[i] << " ";
	t << endl;
	return t;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Information<int> intob;
	Information<string> str = {"Hello", "its", "me", "Mario", "one", "two", "ten", "five", "ten", "chiken"};
	
	for (int i = 0; i < SIZE; i++)
		intob[i] = rand() % 90 + 10;
	cout << intob;
	cout << str;

	bool res = intob[1] == intob[2];
	cout << res << endl;
	res = str[6] == str[8];
	cout << res;
}