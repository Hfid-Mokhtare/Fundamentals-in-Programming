
#include <iostream>
using namespace std;

string separator(int num) {
    if (num < 10) {
        return "   |   ";
    }
    else {
        return "  |   ";
    }
}

void printTableHeader() {
    cout << "\t\t Multiplication Table from 1 to 10" << endl << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "\t";
        cout << i;
    }
    cout << endl << endl;;
    for (int i = 1; i <= 85; i++) {
        cout << "-";
    } 
    cout << endl;
}

void printTableBody() {
    for (int i = 1; i <= 10; i++) {
        cout << i << separator(i);
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

void printTable() {
    printTableHeader();
    printTableBody();

}

int main()
{
    printTable();
}

