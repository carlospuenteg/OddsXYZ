#include <iostream>
#include <math.h>

// You can try it on: https://www.onlinegdb.com/

using namespace std;

int main()
{
    float odds;
    int tries, r;
    cout << "Odds of X (with Y odds) happening after Z tries\n");
    do {
        cout << "Odds of X happening (in %): ";
        cin >> odds;
        odds = odds/100;
        cout << "Tries: ";
        cin >> tries;
        cout << "Odds: " << pow(1-odds,tries)*100 << "%" << endl;
        cout << "Do you want to try with other event?: (1 Yes / 0 No): ";
        cin >> r;
    } while (r == 1);
}

/* Without pow
int main()
{
    float odds;
    float fOdds = 1;
    int tries, r;
    cout << "Odds of X (with Y odds) happening after Z tries\n");
    do {
        cout << "Odds of X happening (in %): ";
        cin >> odds;
        odds = odds/100;
        cout << "Tries: ";
        cin >> tries;
        for (int i=0; i<tries; i++) {
            fOdds *= (1-odds);
        }
        cout << "Odds: " << fOdds*100 << "%" << endl;
        cout << "Do you want to try with other event?: (1 Yes / 0 No): ";
        cin >> r;
    } while (r == 1);
}
*/
