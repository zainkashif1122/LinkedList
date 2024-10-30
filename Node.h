#include<iostream>
using namespace std;

template<class T>
class Node
{
public:
	T data;
	Node<T>* next;

	Node(T d);
};

template<class T>
inline Node<T>::Node(T d)
{
	data = d;
	next = nullptr;
}