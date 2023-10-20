// Potenze 13-10-2023

#include <iostream>
using namespace std;
int b = 0;
int e = 0;
float r = 1.00;
int main()
{
    cout << "Inserire base" << endl;
    cin >> b;
    cout << "Inserire l'esponente" << endl;
    cin >> e;
    if (e > 0)
    {
        for (int i = 0; i < e; i++)
        {
            r *= b;
        }
    }
    else if (e==0)
    {
        r=1;
    }
    else if (e<0)
    {
        for (int i = 0; i>e; i--)
        {
            r/=b;
        }
        
    }
    
cout << "L'esponenziale è " << r << endl;
    return 0;
}