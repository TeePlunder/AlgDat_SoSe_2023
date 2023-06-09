#include <iostream>
#include "stapel_imp.h"

using namespace std;

int main() {
    STAPEL<int> st;

    cout << "Leer? " << st.empty() << endl;
    st.pop();
    st.push(5);
    st.push(4);
    st.push(2);
    st.push(1);
    st.push(8);
    st.push(9);
    cout << "Anzahl: " << st.number() << endl;
    cout << "Leer? " << st.empty() << endl;

    st.pop();
    st.pop();
    st.pop();
    cout << "Anzahl: " << st.number() << endl;
    return 0;
}
