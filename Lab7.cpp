﻿#include <iostream>
#include <stdio.h>
#include <string>
#include <complex>
#include <iterator>
#include <stack>
#include <algorithm>
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
void ell(T1 v[], int n) {
	T1 a;

	for (int j = 1; j < n; j++)
		for (int i = 0; i < n - j; i++) {
			if (v[i] > v[i + 1]) {
				a = v[i];
				v[i] = v[i + 1];
				v[i + 1] = a;
			}
		}

	return;
}
void ell1(char v[])
{
	size_t S = sizeof(v) / sizeof(*v);
	sort(v, v + S);

	return;
}
int main2()
{
	int V[10] = { 2,4,3,1,8,5,4,2,8,6 };
	float V1[10] = { 2.0,2.4,2.1,5.0,3.0,5.4,6.2,6.0,2.0,5.8 };
	char VV[10] = { 'b','c','a','c','h','f','a','d','e','j' };

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

	
	ell(V, 10);
	cout << "B: ";
	for(auto r : V)
	{
		cout << r << "\n";
	}

	ell(V1, 10);
	cout << "\nB1: ";
	for (auto r1 : V1)
	{
		cout << r1 << "\n";
	}

	ell1(VV);
	cout << "\nB2: ";
	for (auto r2 : VV)
	{
		cout << r2 << "\n";
	}

	return 0;
}

/*
Створити параметризований масив з конструкторами,
деструктором і перевантаженими операторами [], =, +, +=,-,-=.
*/


template <class T3>
void e0(T3* v, int n) {
	T3 b[10];
	for (int i = 0; i < n; i++) {
		b[i] = 0;
		cout << b[i] << " ";
	}

	return;
}
template <class T3>
void e(T3* v, int n) {

	for (int i = 0; i < n; i++) {
		v[i] = 0;
		cout << v[i] << " ";
	}

	return;
}
template <class T3>
int e1(T3* v, int n) {

	T3 k;
	int b = -1;
	cout << "\nInput k: ";
	cin >> k;

	for (int i = 0; i < n; i++) {
		if (v[i] == k) {
			b = i;
		}
	}

	return b;
}
template <class T3>
void e2(T3* v, int n) {
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	return;
}
template <class T3>
void e3(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] = v[i] + vv[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	return;
}
template <class T3>
void e4(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] += vv[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}

	return;
}
template <class T3>
void e5(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] = v[i] - vv[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}

	return;
}
template <class T3>
void e6(T3* v, int n, T3* vv) {

	for (int i = 0; i < n; i++) {
		v[i] -= vv[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}

	return;
}
int main3()
{
	int V[] = { 1,2,3,4,5,5,6,7,8,9 };
	int VV[] = { 9,8,7,6,5,5,4,3,2,1 };
	float V1[] = { 1.1, 2.2, 3.3, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	float VV1[] = { 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1 };

	cout << "V: ";
	for (int i = 0; i < 10; i++) {
		cout << V[i] << " ";
	}
	cout << endl;
	
	cout << "VV: ";
	for (int i = 0; i < 10; i++) {
		cout << VV[i] << " ";
	}
	cout << endl;

	cout << ": " << endl;
	e0(V, 10);

	int b1;
	b1 = e1(V, 10);
	if (b1 == -1) { cout << "No" << endl; }
	else
		cout << "[]: " << b1 << endl;


	cout << "=: " << endl;
	e2(V, 10);

	cout << "\n+: " << endl;
	e3(V, 10, VV);

	cout << "\n+=: " << endl;
	e4(V, 10, VV);

	cout << "\n-: " << endl;
	e5(V, 10, VV);

	cout << "\n-=: " << endl;
	e6(V, 10, VV);

	cout << "\nB: " << endl;
	e(V, 10);

	cout << "\n\n";


	cout << "V1: ";
	for (int i = 0; i < 10; i++) {
		cout << V1[i] << " ";
	}
	cout << endl;

	cout << "VV1: ";
	for (int i = 0; i < 10; i++) {
		cout << VV1[i] << " ";
	}
	cout << endl;

	cout << ": " << endl;
	e0(VV, 10);

	int b2;
	b2 = e1(V1, 10);
	if (b2 == -1) { cout << "No" << endl; }
	else
		cout << "[]: " << b2 << endl;


	cout << "=: " << endl;
	e2(V1, 10);

	cout << "\n+: " << endl;
	e3(V1, 10, VV1);

	cout << "\n+=: " << endl;
	e4(V1, 10, VV1);

	cout << "\n-: " << endl;
	e5(V1, 10, VV1);

	cout << "\n-=: " << endl;
	e6(V1, 10, VV1);

	cout << "\nB: " << endl;
	e(V1, 10);

	cout << endl;

	return 0;
}

/*
Побудувати клас, що описує бінарне дерево стандартної форми.
Побудувати клас ітератор, що дозволяє обходити дерево. Написати
програму, яка проходить по бінарному дереву використовуючи ітератор.
*/

struct Node {
	int data;
	Node* left;
	Node* right;
};
Node* newNode(int data)
{
	Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return node;
}
class Iterator {
private:
	stack<Node*> traversal;

public:
	Iterator(Node* root)
	{
		Left(root);
	}

	void Left(Node* current)
	{
		while (current) {
			traversal.push(current);
			current = current->left;
		}
	}

	bool hasNext()
	{
		return !traversal.empty();
	}

	Node* next()
	{
		Node* current = traversal.top();
		traversal.pop();

		if (current->right)
			Left(current->right);

		return current;
	}
};
int main4()
{
	int a,b,c,d,e,f;
	cout << "Input root: ";
	cin >> a;
	cout << "Input root->right: ";
	cin >> b;
	cout << "Input root->left: ";
	cin >> c;
	cout << "Input root->left->left: ";
	cin >> d;
	cout << "Input root->left->right: ";
	cin >> e;
	cout << "Input root->left->right->right: ";
	cin >> f;

	Node* root = newNode(a);
	root->right = newNode(b);
	root->left = newNode(c);
	root->left->left = newNode(d);
	root->left->right = newNode(e);
	root->left->right->right = newNode(f);

	Iterator itr(root);

	cout << itr.next()->data << " ";
	if(itr.hasNext()==1) cout << "true "; 
	else cout << "false ";
	cout << itr.next()->data << " ";
	cout << itr.next()->data << " ";
	cout << itr.next()->data << " ";
	if (itr.hasNext() == 1) cout << "true ";
	else cout << "false ";
	cout << itr.next()->data << " ";
	cout << itr.next()->data << " ";
	if (itr.hasNext() == 1) cout << "true ";
	else cout << "false ";
	cout << "\n";

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
