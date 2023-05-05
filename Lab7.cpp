#include <iostream>
#include <stdio.h>
#include <string>
#include <complex>
#include <algorithm>
#include <iterator>
#include <initializer_list>
using namespace std;



/*
Написати функцію-шаблон послідовного пошуку в масиві по
ключу. Функція повертає індекс останнього, знайденого елемента в
масиві, рівного ключу. Написати специфікацію функції-шаблон для типу
char*.
*/

template <typename T>
int el(T v[], int n) {

	T k;
	int b = -1;
	cout << "Input k: ";
	cin >> k;

	for (int i = 0; i < n; i++) {
		if (v[i] == k) {
			b = i;
		}
	}

	return b;
}
template<int> char* el(char* v[], char* n)
{
	char k;
	int b = -1;

	cout << "Input k: ";
	cin >> k;
	cout << "v: ";
	cout << v << "\n";


	for (int i = 0; i < strlen(v[i]); i++) {
		if (v[i] == (char*)k) {
			b = i;
		}
	}

	return b;
}
int main1()
{
	int V[] = { 1,2,3,4,5,5,6,7,8,9 };
	float V1[] = { 1.1, 2.2, 3.3, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	char V3[] = { 'a','b','c','d','e','f','g','h','j','j' };

	cout << "V: ";
	for (int i = 0; i < 10; i++) {
		cout << V[i] << " ";
	}
	cout << endl;

	int b1;
	b1 = el(V, 10);
	if (b1 == -1) { cout << "No" << endl; }
	else
		cout << "B: " << b1 << endl;


	cout << "V1: ";
	for (int i = 0; i < 10; i++) {
		cout << V1[i] << " ";
	}
	cout << endl;

	float b2;
	b2 = el(V1, 10.f);
	if (b2 == -1) { cout << "No" << endl; }
	else
		cout << "B: " << b2 << endl;


	cout << "V3: ";
	for (int i = 0; i < 10; i++) {
		cout << V3[i] << " ";
	}
	cout << endl;


	int b3;

	b3 = el(V3, 10);
	if (b3 == -1) { cout << "No" << endl; }
	else
		cout << "B: " << b3 << endl;

	return 0;
}


/*
Написати функцію-шаблон функцію впорядкування методом
швидкого впорядкування. Написати специфікацію функції-шаблон для
типу char*.
*/

template <class T1>
T1* ell(T1 v[], int n) {
	T1 a;
	T1 t(10);

	for (int i = 0; i < n - i; i++) {
		if (v[i] > v[i + 1]) {
			a = v[i];
			v[i] = v[i + 1];
			v[i + 1] = a;
		}
	}

	return v;
}
char* ell1(char v[])
{
	size_t S = sizeof(v) / sizeof(*v);
	sort(v, v + S);

	return v;
}
int main2()
{
	int V[10] = { 2,4,3,1,8,5,4,2,8,6 };
	float V1[] = { 2.0,2.4,2.1,5.0,3.0,5.4,6.2,6.0,2.0,5.8 };
	char VV[] = { 'b','c','a','c','h','f','a','d','e','j' };

	cout << "V: ";
	for (int i = 0; i < 10; i++) {
		cout << V[i] << " ";
	}
	cout << endl;

	cout << "V1: ";
	for (int i = 0; i < 10; i++) {
		cout << V1[i] << " ";
	}
	cout << endl;

	cout << "VV: ";
	for (int i = 0; i < 10; i++) {
		cout << VV[i] << " ";
	}
	cout << endl;

	int* b1[10] = {};
	*b1 = ell(V, 10);
	cout << "B: " << b1 << endl;

	float* b11[10] = {};
	*b11 = ell(V1, 10);
	cout << "B1: " << b11 << endl;

	char* b2[10]{};
	*b2 = ell1(VV);
	cout << "B2: " << b2 << endl;

	return 0;
}


/*
Створити параметризований масив з конструкторами,
деструктором і перевантаженими операторами [], =, +, +=,-,-=.
*/

template <class T3>
T3* e(T3* v, int n) {

	for (int i = 0; i < n; i++) {
		v[i] = 0;
	}

	return v;
}
template <class T3>
T3 e1(T3* v, int n) {

	T3 k;
	int b = -1;
	cout << "Input k: ";
	cin >> k;

	for (int i = 0; i < n; i++) {
		if (v[i] == k) {
			b = v[i];
		}
	}

	return b;
}
template <class T3>
T3* e2(T3* v, int n) {

	return v;
}
template <class T3>
T3* e3(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] = v[i] + vv[i];
	}

	return v;
}
template <class T3>
T3* e4(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] += vv[i];
	}

	return v;
}
template <class T3>
T3* e5(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] = v[i] - vv[i];
	}

	return v;
}
template <class T3>
T3* e6(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] -= vv[i];
	}

	return v;
}

int main3()
{
	int V[] = { 1,2,3,4,5,5,6,7,8,9 };
	int VV[] = { 9,8,7,6,5,5,4,3,2,1 };
	float V1[] = { 1.1, 2.2, 3.3, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };

	cout << "V: ";
	for (int i = 0; i < 10; i++) {
		cout << V[i] << " ";
	}
	cout << endl;

	int* b[10];
	*b = e(V, 10);
	cout << "B: " << b << endl;

	int b1;
	b1 = el(V, 10);
	if (b1 == -1) { cout << "No" << endl; }
	else
		cout << "[]: " << b1 << endl;


	int* b2[10];
	*b2 = e2(V, 10);
	cout << "=: " << b2 << endl;

	int* b3[10];
	*b3 = e3(V, 10, VV);
	cout << "+: " << b3 << endl;

	int* b4[10];
	*b4 = e4(V, 10, VV);
	cout << "+=: " << b4 << endl;

	int* b5[10];
	*b5 = e5(V, 10, VV);
	cout << "-: " << b5 << endl;

	int* b6[10];
	*b6 = e6(V, 10, VV);
	cout << "-=: " << b6 << endl;

	return 0;
}



/*
Побудувати клас, що описує бінарне дерево стандартної форми.
Побудувати клас ітератор, що дозволяє обходити дерево. Написати
програму, яка проходить по бінарному дереву використовуючи ітератор.
*/

int t = 0;
int k = 0;



// !!!

struct Node {
	int Data;
	Node* Left;
	Node* Right;
};

void Add(int aData, Node*& aNode){
	if (!aNode) {
		aNode = new Node;
		aNode->Data = aData;
		aNode->Left = 0;
		aNode->Right = 0;
		return;
	}
	else
		if (aNode->Data > aData) {
			Add(aData, aNode->Left);
		}
		else {
			Add(aData, aNode->Right);
		}
}

void print(Node* aNode) {
	if (!aNode) return;
	t += 5;

	print(aNode->Left);

	for (int i = 0; i < t; i++)cout << " ";
	cout << aNode->Data << endl;

	print(aNode->Right);

	t -= 5;
	return;
}

void pr(Node*& aNode) {
	if (NULL == aNode) return;

	cout << aNode->Data << endl;
	pr(aNode->Left);
	pr(aNode->Right);
}

void Empty(Node* aNode) {
	if (!aNode) {
		cout << "Empty ";
	}
	else cout << "Not Empty ";
}

void Free(Node* aNode) {
	if (!aNode) return;
	Free(aNode->Left);
	Free(aNode->Right);
	delete aNode;

	return;
}





class Base
{
protected:
	int dat;
	double a[5] = { 1,2,3,4,5 };
public:
	Base() : dat(1) {}
	Base(int d) : dat(d) {}
};
class D1 : protected Base
{
protected:
	int d1;
public:
	D1() : d1(1) {}
	D1(int d) : d1(d) {}
	D1(int d, int dt) : Base(dt), d1(d) {}
};
class D2 : protected Base
{
protected:
	double d2;
public:
	D2() : d2(1) {}
	D2(int d) : d2(d) {}
	D2(int a, double dt) : Base(a), d2(dt) {}
};
class D3 : protected D1
{
protected:
	double dt;
public:
	D3() : dt(1) {}
	D3(int d) : dt(d) {}
	D3(int a, int b, int c, double d, int e) : D1(a, b), dt(e) {}

	void showDat()
    {
        std::cout << "D3::D1::Base::dat = " << D3::D1::Base::dat << std::endl;
        std::cout << "Base::dat = " << Base::dat << std::endl;
    }
};
class D4 : protected D2
{
protected:
	double dt;
public:
	D4() : dt(1) {}
	D4(int d) : dt(d) {}
	D4(int a, int b, int e) : D2(a, b), dt(e) {}

	void showDat()
	{
		std::cout << "D4::D2::Base::dat = " << D4::D2::Base::dat << std::endl;
		std::cout << "Base::dat = " << Base::dat << std::endl;
	}
};
class D5 : protected D1, protected D2
{
protected:
	double dt;
public:
	D5() : dt(1) {}
	D5(int d) : dt(d) {}
	D5(int a, int b, int c, double d, int e) : D1(a, b), D2(a, c), dt(e) {}

	void showDat()
	{
		std::cout << "D5::D1::Base::dat = " << D5::D1::Base::dat << std::endl;
		std::cout << "D5::D2::Base::dat = " << D5::D2::Base::dat << std::endl;
		std::cout << "Base::dat = " << Base::dat << std::endl;
	}
};



int main4()
{
	D3 a, b(1, 2, 3, 4.5, 5);
	D4 a1, b1(1, 2, 3);
	D5 a2, b2(1, 2, 3, 4.5, 5);

	std::cout << "Test !\n";
	std::cout << "Size for Base " << sizeof(Base) << std::endl;

	std::cout << "Size for D1 " << sizeof(D1) << std::endl;
	std::cout << "Size for D2 " << sizeof(D2) << std::endl;

	std::cout << "Size for D3 " << sizeof(D3) << std::endl;
	std::cout << "Size for D4 " << sizeof(D4) << std::endl;

	std::cout << "Size for D5 " << sizeof(D5) << std::endl;


	b.showDat();


	cout << " !!!\n";

	Add;
	print;
	pr;
	Empty;
	Free;

	return 0;
}



int main()
{
	int n;
	cout << "N: ";
e: cin >> n;

	switch (n) {
	case 1: main1(); break;
	case 2: main2(); break;
	case 3: main3(); break;
	case 4: main4(); break;
	default: cout << "Error\n"; goto e;
	}
	return 0;
};
