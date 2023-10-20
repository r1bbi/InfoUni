#include <iostream>
using namespace std;
int l1;
int l2;
int l3;
int c12;
int c23;
int c31;
int num = 1;

int main()
{
    cout << "Programma avviato..." << endl;

    cout << "Inserire il primo numero ";
    cin >> l1;
    cout << "Inserire il secondo numero ";
    cin >> l2;
    cout << "Inserire il terzo numero ";
    cin >> l3;

    c12 = l1 + l2;
    c23 = l2 + l3;
    c31 = l1 + l3;

    
    if (l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)
    {
        cout << "Il triangolo è";
        if (c12 == c23 && c23 == c31 && c12 == c31)
        {
            cout << " equilatero" << endl;
        }
        else if (c12 == c23 || c23 == c31 || c31 == c12)
        {
            cout << " isoscele" << endl;
        }
        else
            cout << " scaleno" << endl;
    }

    else
    cout << "il triangolo inserito non valido" << endl;

    cout << "Fine programma" << endl;

    return 0;
}