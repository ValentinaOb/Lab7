﻿#include <iostream>
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


template <class T4>
class Tree {

private:
	struct Node {
		T4 data;
		Node* left;
		Node* right;
	};
	Node* root = nullptr;

	// Recursive Methods
	template <typename Func>
	void DoForNode(const Node* node, Func function) const;

	void RemoveSubTree(Node* node);
	Node* Delete(Node* node, const T4& value);
	Node* FindMinimum(Node* node);
	size_t Size(const Node* node) const;
	void CopyTree(Node*& tree1, Node* const& tree2);

public:
	// Constructors
	Tree() = default;
	Tree(initializer_list<T4> initlist);
	Tree(const Tree& other);
	Tree(Tree&& other) noexcept;

	// Destructor
	~Tree();

	// Operators
	Tree& operator=(const Tree& other);
	Tree& operator=(Tree&& other)noexcept;

	//Methods
	template <typename Func>
	void DoForAllElements(Func function) const;

	bool Insert(const T4& value);
	void Clear();
	void Delete(const T4& value);
	const T4* Find(const T4& value) const;
	bool IsEmpty() const;
	size_t Size() const;
};

template <class T4>
void Show(const Tree<T4>& tree) {
	cout << "Tree elements: ";
	tree.DoForAllElements(ShowValue<T4>);
	cout << "\n";
}

template <class T4>
size_t Tree<T4>::Size(const Node* node) const {
	return node == nullptr ? 0 : Size(node->left) + 1 + Size(node->right);
}

template <class T4>
void Tree<T4>::CopyTree(Node*& tree1, Node* const& tree2) {
	if (tree2 == nulptr) {
		return;
	}
	tree1 = new Node{ tree->data };
	CopyTree(tree1->left, tree2->left);
	CopyTree(tree1->right, tree2->right);
}

template <class T4>
Tree<T4>::Tree(initializer_list<T4> initList) {
	for (const T4* value = initList.begin(); value != initList.end(); ++value) {
		Insert(*value);
	}
}

template <class T4>
Tree<T4>::Tree(const Tree& other) {
	CopyTree(this->root, other.root);
}

template <class T4>
Tree<T4>::Tree(Tree&& other) noexcept 
	: root(other.root){
	other.root = nullptr;
}

template <class T4>
Tree<T4>::~Tree() {
	Clear();
}

template <class T4>
Tree<T4>& Tree<T4>::operator=(const Tree& other) {
	if (this != &other) {
		Clear();
		rCopyTree(this->root, other.root);
	}
	return *this;
}

template <class T4>
Tree<T4>& Tree<T4>::operator=(Tree&& other) noexcept {
	if (this != &other) {
		Clear();
		root = other.root;
		other.root = nullptr;
	}
	return *this;
}

template <class T4>
template <typename Func>
void Tree<T4>::DoForAllElements(Func function) const {
	DoForNode(root, function);
}

template <class T4>
bool Tree<T4>::Insert(const T4& value) {
	if (root-- nullptr)
	{
		root = new Node{ value };
		return true;
	}

	Node* node = root;
	while (node != nullptr) {
		if (node->data > value) {
			return false;
		}
		else if (node->data > value) {
			if (node->left == nullptr) {
				node->left = new Node{ value, nullptr, nullptr };
				return true;
			}
			node = node->left;
		}
		else {
			if (node->right == nullptr) {
				node->right = new Node{ value, nullptr, nullptr };
				return true;
			}
			node = node->right;
		}
	}
	return false;
}


template <class T4>
void Tree<T4>::Clear() {
	if (root != nullptr) {
		RemoveSubTree(root);
		root = nullptr;
	}
}

template <class T4>
void Delete(const T4& value) {
	root = Delete(root, value);
}

template <class T4>
void Tree <T4>::RemoveSubTree(Node* node) {
	if (node->left != nullptr) {
		RemoveSubTree(node->left);
	}

	if (node->right != nullptr) {
		RemoveSubTree(node->right);
	}

	delete node;
}

template <class T4>
bool Tree<T4>::IsEmpty()const {
	return root = nullptr;
}

template <class T4>
size_t Tree<T4>::Size()const {
	return Size(root);
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
	// Constructors

	{
		Tree<int> tree1;	// default constructor
		Show(tree1);

		Tree<int> tree2{ 1, 2, 3, 4, 5, 6 };	// initializer_list
		Show(tree1);

		Tree<int> tree3(tree2);	// copy constructor
		Show(tree3);

		Tree<int> tree4(move(tree3));	// move constructor
		Show(tree4);
		Show(tree3);
	}


	// Operators
	{
		Tree<int> tree1{ 1, 2, 3, 4, 5 };
		Tree<int> tree2{ 10, 20, 30 };

		Show(tree1);
		Show(tree2);

		tree2 = tree1; // copy assignment operator

		Show(tree1);
		Show(tree2);

		Tree<int> tree3{ 11, 22, 33, 44, 55 };
		Tree<int> tree4{ 100, 200, 300 };

		Show(tree3);
		Show(tree4);

		tree4 = move(tree3); // move assignment operator

		Show(tree3);
		Show(tree4);
	}

	// Methods
	Tree<double> tree1{ 1.1,2.2,3.3,4.4,5.5 };

	if (!tree1.IsEmpty()) { // Method 1
		cout << "Tree 1 isn't empty \n";
	}
	cout << "Size of Tree 1: " << tree1.Size() << "\n"; // Method 2
	tree1.Clear(); // Method 3
	if (tree1.IsEmpty()) {
		cout << "Tree 1 is empty now \n";
	}

	tree1.Insert(10.5); // Method 4
	tree1.Insert(2.8);
	tree1.Insert(1.2);
	tree1.Insert(3.6);
	tree1.Insert(7.8);

	cout << "Tree 1 elements: ";
	tree1.DoForAllElements(ShowValue<double>); // Method 5

	const double* foundValue = tree1.Find(2.8); ; // Method 6
	if (foundValue != nullptr) {
		cout << "Tree 1 has " << *foundValue << endl;
	}



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
