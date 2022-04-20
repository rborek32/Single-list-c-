#include<iostream>
#include<list>
#include<windows.h>
#include "LinkedList.h"
using namespace std;

int choice,number,position;

int main()
{
    LinkedList ll;

    do
    {
        ll.print();
        cout << "1. Add element-front" << endl;
        cout << "2. Add element-back" << endl;
        cout << "3. Add element at position" << endl;
        cout << "4. Remove first element" << endl;
        cout << "5. Remove last element" << endl;
        cout << "6. Remove by position" << endl;
        cout << "7. Remove by element" << endl;
        cout << "8. Clear list" << endl;
        cout << "9. Quit!" << endl;
        cout << "Choice: ";
        cin >> choice;


        switch(choice)
        {
        case 1:
            cout << " Your number: ";
            cin >> number;
            ll.element_pushfront(number);
            break;
        case 2:
            cout << " Your number: ";
            cin >> number;
            ll.element_pushback(number);
            break;
        case 3:
            cout << " Your number: ";
            cin >> number;
            cout << "Position: ";
            cin >> position;
            ll.element_pushToPosition(number,position);
            break;
        case 4:
            ll.removeFirstElement();
            break;
        case 5:
            ll.removeLastElement();
            break;
        case 6:
            cout << " Position of element: ";
            cin >> number;
            ll.removeByPosition(number);
            break;
        case 7:
            cout << "Value of element: ";
            cin >> number;
            ll.removeChoosenElement(number);
            break;
        case 8:
            ll.clearList();
            break;
        default:
            cout << "1-7";
            break;
        }

    }
    while (choice != 9);

    return 0;
}
