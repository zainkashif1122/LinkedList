/*#include"linkedlist.h"

int main()
{
	LinkedList<int> list;

	list.insertAtHead(10);
	list.insertAtHead(12);
	list.insertAtHead(19);
	list.insertAtHead(22);

	cout << "List: ";
	list.display();

	list.deleteAtHead();
	cout << "List after deletion (head): ";
	list.display();

	list.insertAtTail(23);
	list.insertAtTail(26);

	cout << "List: ";
	list.display();

	list.deleteAtTail();
	cout << "List after deletion (tail): ";
	list.display();

	int ValToSearch;
	cout << "Enter value you want to search: ";
	cin >> ValToSearch;
	list.search(ValToSearch);

	list.reverse();
	cout << "Reversed List: ";
	list.display();

	int n;
	cout << "Enter node you want to display: ";
	cin >> n;
	list.findNthNode(n);

	int insert, newInsert;
	cout << "Enter value you want to insert after: ";
	cin >> insert;
	list.insertAfter(insert, 4);

	cout << "List after insertion: ";
	list.display();

	return 0;
}*/

#include "LinkedList.h"

int main() 
{
    LinkedList<int> list;
    int choice, value, position;

    do {
        cout << endl << "Linked List Operations Menu:" << endl << endl;
        cout << "1. Insert at Head" << endl;
        cout << "2. Delete at Head" << endl;
        cout << "3. Insert at Tail" << endl;
        cout << "4. Delete at Tail" << endl;
        cout << "5. Display List" << endl;
        cout << "6. Search for a Value" << endl;
        cout << "7. Reverse List" << endl;
        cout << "8. Find Nth Node" << endl;
        cout << "9. Insert After a Value" << endl;
        cout << "0. Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert at head: ";
            cin >> value;
            list.insertAtHead(value);
            break;

        case 2:
            list.deleteAtHead();
            cout << "Deleted head node.\n";
            break;

        case 3:
            cout << "Enter value to insert at tail: ";
            cin >> value;
            list.insertAtTail(value);
            break;

        case 4:
            list.deleteAtTail();
            cout << "Deleted tail node.\n";
            break;

        case 5:
            cout << "List: ";
            list.display();
            break;

        case 6:
            cout << "Enter value to search: ";
            cin >> value;
            list.search(value);
            break;

        case 7:
            list.reverse();
            cout << "Reversed list.\n";
            break;

        case 8:
            cout << "Enter position of the node to find: ";
            cin >> position;
            list.findNthNode(position);
            break;

        case 9:
            int insertAfterValue;
            cout << "Enter value to insert after: ";
            cin >> insertAfterValue;
            cout << "Enter new value to insert: ";
            cin >> value;
            list.insertAfter(insertAfterValue, value);
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Please select a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}