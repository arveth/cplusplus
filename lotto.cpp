#include <iostream>
#include "lotto.h"

using namespace std;
/* So I guess I should use arrays? Seems like quite good idea, hopefully it'll work as intended.
 * Also I'm still not sure how to avoid duplicates...
*/

void lotto::lotek(){
    for(int i = 0; i < 6; i++) {
        int a = rand()%49+1;
        cout << '\t' << a << " " << endl;
    }
}

void lotto::multilotek() {
    for(int i = 0; i < 20; i++) {
        int a = rand()%80+1;
        cout << a << endl;
    }
}

void lotto::simpleMenu() {
    cout << "Bardzo prosty program używający generator liczb pseudolosowych.\n" << endl;
    cout << "1. Lotto (bez plusa i innych super szans)\n2. Multi multi (bez plusa i super szansy)\n3. Koniec (kończy program)" << endl;
}
