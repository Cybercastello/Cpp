#include <iostream>
using namespace std;

class menu {
    int a[10], i;
    int array1[100], array2[100], array3[200];

public:
    void insert();
    void del();
    void traversa();
    void merged();
    menu() {
        i = -1;
    }
};

int main() {
    int n;
    menu mn;
    do {
        cout << " ***** Your Choices Are.*****" << endl;
        cout << " 1. INSERT \n";
        cout << " 2. Delete\n";
        cout << " 3. Traverse\n";
        cout << " 4. Merged\n";
        cout << " 5. Exit\n";
        cout << " Now Enter Your Choice :" << endl;
        cin >> n;
        switch (n) {
        case 1:
            mn.insert();
            break;
        case 2:
            mn.del();
            break;
        case 3:
            mn.traversa();
            break;
        case 4:
            mn.merged();
            break;
        case 5:
            break;
        default:
            cout << " Sorry! Your Choice is Invalid !! ";
        }
    } while (n != 5);
}

void menu::insert() {
    if (i < 9) {
        cout << " Enter the no: (10 elements) : " << endl;
        while (i < 9) {
            cin >> a[++i];
        }
    } else {
        cout << " the array is full" << endl;
    }
}

void menu::del() {
    int item, j, flag = 0, pos;
    cout << "enter the no to delete :" << endl;
    cin >> item;
    for (j = 0; j <= i; j++) {
        if (a[j] == item) {
            flag = 1;
            pos = j;
            break;
        }
    }
    if (flag) {
        for (j = pos; j < i; j++) {
            a[j] = a[j + 1];
        }
        i--;
    } else {
        cout << "the no is not in list, sorry" << endl;
    }
}

void menu::traversa() {
    int j;
    for (j = 0; j <= i; j++) {
        cout << a[j] << endl;
    }
}

void menu::merged() {
    int p, q, m, n, c;
    cout << "enter no of elements of the first sorted array" << endl;
    cin >> p;
    cout << "enter the elements of the first sorted array" << endl;
    for (m = 0; m < p; m++) {
        cin >> array1[m];
    }
    cout << "enter no of elements of the second sorted array" << endl;
    cin >> q;
    cout << "enter the elements of the second sorted array" << endl;
    for (n = 0; n < q; n++) {
        cin >> array2[n];
    }
    c = 0;
    m = 0;
    n = 0;
    while ((m < p) && (n < q)) {
        if (array1[m] <= array2[n]) {
            array3[c++] = array1[m++];
        } else {
            array3[c++] = array2[n++];
        }
    }
    while (m < p) {
        array3[c++] = array1[m++];
    }
    while (n < q) {
        array3[c++] = array2[n++];
    }
    cout << "merged array in ascending order" << endl;
    for (m = 0; m < c; m++) {
        cout << array3[m] << endl;
    }
}
