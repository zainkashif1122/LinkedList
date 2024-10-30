#include"node.h"

template<class T>
class LinkedList
{
private:
	Node<T>* head;
public:
	LinkedList();
	~LinkedList();

	void insertAtHead(T val);
	void deleteAtHead();

	void insertAtTail(T val);
	void deleteAtTail();

	void display();

	void search(T val);
	void reverse();
	void findNthNode(int n);
	void insertAfter(T insertAt, T newVal);
};

template<class T>
inline LinkedList<T>::LinkedList()
{
	head = nullptr;
}

template<class T>
inline LinkedList<T>::~LinkedList()
{
	//deletes all nodes
	while (head != nullptr)
	{
		Node<T>* temp = head;
		head = head->next;
		delete temp;
	}
}

template<class T>
inline void LinkedList<T>::insertAtHead(T val)
{
	Node<T>* newNode = new Node<T>(val);
	newNode->next = head;
	head = newNode;
}

template<class T>
inline void LinkedList<T>::deleteAtHead()
{
	if (head == nullptr)
	{
		cout << "Cannot Delete!" << endl;
		return;
	}
	Node<T>* temp = head;
	head = head->next;
	delete temp;
}

template<class T>
inline void LinkedList<T>::insertAtTail(T val)
{
	Node<T>* newNode = new Node<T>(val);
	newNode->next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	Node<T>* current = head;
	while (current->next != nullptr)
	{
		current = current->next;
	}

	current->next = newNode;
}

template<class T>
inline void LinkedList<T>::deleteAtTail()
{
	if (head == nullptr)
	{
		cout << "No!" << endl;
		return;
	}

	// Check if there is only one node in the list
	if (head->next == nullptr)
	{
		// If there is only one node, delete it and set head to nullptr
		delete head;
		head = nullptr;
		return;
	}

	// Traverse the list to find the second last node
	Node<T>* current = head;
	while (current->next->next != nullptr)
	{
		current = current->next;
	}

	// Delete the last node and set the next pointer of the second last node to nullptr
	delete current->next;
	current->next = nullptr;
}

template<class T>
inline void LinkedList<T>::display()
{
	Node<T>* current = head;
	while (current != nullptr)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}

template<class T>
inline void LinkedList<T>::search(T val)
{
	Node<T>* current = head;
	while (current != nullptr)
	{
		if (current->data == val)
		{
			cout << "Value Found!" << endl;
			return;
		}
		current = current->next;
	}
	cout << "Value Not Found!" << endl;
}

template<class T>
inline void LinkedList<T>::reverse()
{
	Node<T>* prev = nullptr;
	Node<T>* current = head;
	Node<T>* next = nullptr;

	// Reverse the links between nodes
	while (current != nullptr)
	{
		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	// Update the head pointer to point to the last node
	head = prev;
}

template<class T>
inline void LinkedList<T>::findNthNode(int n)
{
	Node<T>* current = head;
	int count = 0;

	// Traverse the list to find the nth node
	while (current != nullptr)
	{
		if (count == n)
		{
			cout << "Data at " << n << " node: " << current->data << endl;
			return;
		}
		count++;
		current = current->next;
	}
	cout << "Node not found!" << endl;
}

template<class T>
inline void LinkedList<T>::insertAfter(T insertAt, T newVal)
{
	Node<T>* current = head;
	while (current != nullptr)
	{
		// Find the node with the value insertAt
		if (current->data == insertAt)
		{
			// Create a new node with the value newVal
			Node<T>* newNode = new Node<T>(newVal);
			// Insert the new node after the current node
			newNode->next = current->next;
			current->next = newNode;
			return;
		}
		current = current->next;
	}
	cout << "Value not found!" << endl;
}