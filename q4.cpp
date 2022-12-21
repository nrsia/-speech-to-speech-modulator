#include <iostream>
using namespace std;

int main() {
    float c, m, k;

    cout << "Enter the length in centimeter:";
    cin >> c;
    cout<<endl;
    
    m = (float)(c / 100);
    k = (float)(c / 100000);

    cout << "\nLength in Meter      = " << m << " meter "<<endl;
    cout << "Length in Kilometer  = " << k << " kilometer"<<endl;
    return 0;
}