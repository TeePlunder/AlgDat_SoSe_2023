#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double p,q,D,x,x1,x2;
    string again;
    do {
        cout << "input value of p and q: ";
        cin >> p >> q;
        D = p * p / 4.0 - q;
        if(D > 0) {
            x1 = -p / 2 + sqrt(D);
            x2 = -p / 2 - sqrt(D);
            cout << "x1: " << x1 << '\t' << "x2: " << x2 << endl; // print out results
        } else {
            if(D == 0) {
                x = -p / 2;
                cout << "x: " << x << endl;
            } else {
                cout << "no real solution" << endl;
            }
        }
        cout << "again? (yes/no)" << endl;
        cin >> again;
    } while ((again == "yes") || (again == "y"));
    cout << "program end" << endl;
    return 0;
}
