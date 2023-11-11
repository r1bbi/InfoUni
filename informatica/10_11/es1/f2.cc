#include <algorithm>
#include <iostream>
using namespace std;

// void display(int far[10]) {
//    cout << "array: ";

// display array elements
//  for (int i = 0; i < 10; ++i) {
//      cout << far[i] << "   ";
//  }
//}
void display(int m[10]) {

    // display array elements 
    for (int i = 0; i < 10; ++i) {
        cout<< m[i]<<"     ";
    }
    cout << endl;
}

int sommacifre(int n)
{
    //cout << "La somma delle cifre di " << n << " è ";
    int sum = 0;
    int r;
    while (n >= 1)
    {
        r = n % 10;
        sum += r;

        n = (n - r) / 10;
    }
   // cout << sum << endl;
    
    return sum;
}

int randnm(int n, int m)
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
    return v2;
}

int cifrasign(int n)
{
    while (n > 10)
    {
        n = n / 10;
    }
    return n;
}

int numcifrepari(int n)
{
    
    int num = 0;
    int r;
    while (n > 1)
    {
        r = n % 10;
        if ((r % 2) == 0)
        {
            num++;
        }
        n = (n - r) / 10;
    }
    return num;
}












int main()
{
   
    int a[10];
    int b[10];
    int c[10];
    int d[10];
//------------------ a[10]----------------------
    for (int i = 0; i < 10; i++)
    {
        a[i] = randnm(1, 1000);
    }
    cout<<"a[10]->   ";
    display(a);
//------------------ b[10]---------------------- 
for (int i = 0; i < 10; i++)
    {
        b[i] = sommacifre(a[i]);
    }
    cout<<"b[10]->   ";
    display(b);
//------------------ c[10]---------------------- 
for (int i = 0; i < 10; i++)
    {
        c[i] = (cifrasign(a[i])+numcifrepari(a[i]));
    }
    cout<<"c[10]->   ";
    display(c);
//------------------ c[10]---------------------- 
for (int i = 0; i < 10; i++)
    {
        d[i] = (a[i]+b[i]+c[i]);
    }
    cout<<"d[10]->   ";
    display(d);
//------------------ riordina a[10]---------------------- 
