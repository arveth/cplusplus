#include <iostream>
#include "lotto.h"
using namespace std;


int main()
{
    lotto loteria;
    loteria.simpleMenu();
    int choice;
    do {
    cin >> choice;
    if(choice == 1) {
        loteria.lotek();
        cout << endl;
    }
    if(choice == 2) {
        loteria.multilotek();
        cout << endl;
    }
    if(choice == 3){
        break;
    }
} while(true);

    return 0;
}

