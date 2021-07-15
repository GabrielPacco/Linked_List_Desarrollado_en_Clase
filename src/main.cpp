#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList l1;
    l1.insert(8);
    l1.insert(4);
    l1.insert(15);
    l1.insert(12);
    l1.insert(10);
    l1.insert(20);
    l1.insert(25);
    l1.insert(8);

    cout << l1 << endl;

    l1.removeByValue(12);
    cout << l1 << endl;
    l1.removeByValue(25);
    cout << l1 << endl;
    l1.removeByValue(10);
    cout << l1 << endl;
    l1.removeByPosition(0);
    cout << l1 << endl;

    cout << l1.search(8) << endl;
    cout << l1.search(13) << endl;

    if(true)
        LinkedList l2 = l1;

    return 0;
}