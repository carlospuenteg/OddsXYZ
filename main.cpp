#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float odds;
    float oddOdds = 1;
    int tries, r;
    printf("Odds of X (with Y odds) happening after Z tries\n");
    do {
        cout << "Odds of X happening (in %): ";
        cin >> odds;
        odds = odds/100;
        cout << "Tries: ";
        cin >> tries;
        cout << "Odds: " << pow(1-odds,tries)*100 << "%" << endl;
        /* OTHER WAY OF DOING IT (without pow)
        for (int i=0; i<tries; i++) {
            oddOdds *= (1-odds); // 1 * 0.99 * 0.99 * 0.99 ...
        }
        */
        cout << "Do you want to try with other event?: (1 Yes / 0 No): ";
        cin >> r;
    } while (r == 1);
}