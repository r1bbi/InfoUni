#include <iostream>
#include <ostream>
using namespace std;

// funzioni
int cifrasign(int n)
{
    cout << "La cifra più significativa di " << n;
    while (n > 10)
    {
        n = n / 10;
    }
    cout << " è " << n << endl;
    return n;
}

int sommacifre(int n)
{
    cout << "La somma delle cifre di " << n << " è ";
    int sum = 0;
    int r;
    while (n >= 1)
    {
        r = n % 10;
        sum += r;

        n = (n - r) / 10;
    }
    cout << sum << endl;
    ;
    return sum;
}

void sommacifrepari(int n)
{
    cout << "Le cifre pari di " << n << " sono ";
    int sum = 0;
    int r;
    while (n > 1)
    {
        r = n % 10;
        if ((r % 2) == 0)
        {
            sum++;
        }
        n = (n - r) / 10;
    }
    cout << sum << endl;
}

void randnm(int n, int m)
{
    int v2;
    if (n > m)
    {
        v2 = rand() % n + m;
    }
    if (n < m)
    {
        v2 = rand() % m + n;
    }
    cout << "Numero ranodm tra " << n << " e " << m << " = " << v2 << endl;
}






int main()
{
    int num;
    int mux;
    int mon;

    cout << "Inserire un numero: ";
    cin >> num;
    cifrasign(num);
    sommacifre(num);
    sommacifrepari(num);
    cout << "Inserire un numero: ";
    cin >> mon;
    cout << "Inserire un numero: ";
    cin >> mux;
    randnm(mux, mon);

    return 0;
}
