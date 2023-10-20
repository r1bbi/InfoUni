// Esercizio array
#include <iostream>
using namespace std;

int a[10];
int taglia = sizeof(a) / 4;
int val;
int massimiliAno = 0;
int sum;

int main()
{
    for (int i = 0; i < taglia; i++)
    {
        cout << "Inserire il valore di indice [" << i << "]" << endl;
        cin >> a[i];
        if (a[i] > val)
        {
            massimiliAno = i;
            val=a[i];
        }
        sum+=a[i];
    }
    for (int i = 0; i < taglia; i++)
    {
        cout << a[i] << ";";
    }
    cout << endl;
    for (int i = taglia - 1; i >= 0; i--)
    {
        cout << a[i] << ";";
    }
    cout << endl;
    cout << "Il carattere massimo è ["<< a[massimiliAno] << "] e la posizione del valore nell'indice è ["<< massimiliAno <<"]" << endl;
    cout << "La somma totale è [" << sum <<"]"<< endl;

}