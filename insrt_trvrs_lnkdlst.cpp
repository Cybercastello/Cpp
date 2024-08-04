#include<iostream>
using namespace std;

struct node {
    int info;
    node *next;
};

node *start = NULL;

class list {
public:
    void create_empty_list() {
        start = NULL;
    }

    void traverse_in_order() {
        node *ptr = start;
        while (ptr != NULL) {
            cout << endl << ptr->info;
            ptr = ptr->next;
        }
    }

    void insert_at_beginning(int item) {
        node *ptr = new node;
        ptr->info = item;
        ptr->next = start;
        start = ptr;
    }

    void insert_at_end(int item) {
        node *ptr = new node;
        ptr->info = item;
        ptr->next = NULL;
        if (start == NULL) {
            start = ptr;
        } else {
            node *loc = start;
            while (loc->next != NULL) {
                loc = loc->next;
            }
            loc->next = ptr;
        }
    }

    void insert_at_specific_position(int item, int position) {
        node *ptr = new node;
        ptr->info = item;
        if (position == 0) {
            ptr->next = start;
            start = ptr;
            return;
        }
        node *loc = start;
        for (int k = 1; k < position; k++) {
            if (loc == NULL) {
                cout << "Node in the list is less than " << position << endl;
                return;
            }
            loc = loc->next;
        }
        ptr->next = loc->next;
        loc->next = ptr;
    }
};

int main()
{
    int choice, item, position;
    char ch;
    list l;
    l.create_empty_list();

    do {
        cout << endl << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Insert at specific position" << endl;
        cout << "4. Traverse" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item: ";
                cin >> item;
                l.insert_at_beginning(item);
                break;
            case 2:
                cout << "Enter item: ";
                cin >> item;
                l.insert_at_end(item);
                break;
            case 3:
                cout << "Enter item: ";
                cin >> item;
                cout << "Enter position: ";
                cin >> position;
                l.insert_at_specific_position(item, position);
                break;
            case 4:
                cout << "Traverse the list:" << endl;
                l.traverse_in_order();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
        if (choice != 5) {
            cout << "Do you want to continue (y/n)? ";
            cin >> ch;
        }
    } while (choice != 5 && (ch == 'y' || ch == 'Y'));

    return 0;
}
