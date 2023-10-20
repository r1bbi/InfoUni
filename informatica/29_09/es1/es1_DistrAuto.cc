#include <iostream>
using namespace std;

float const p_caffe = 0.5;
float const p_panini = 5.5;
float const p_bibita = 2.0;
float m2=1.0;
float m1=1.0;
float m50=1.0;
float m20=2.0;
float m10=1.0;
float codice;
float credito=0.0;
float resto;
float s;
float prezzo=0.0;

    int
    main()
{
    cout << "Inserire codice prodotto" << endl;
    cin >> codice;
    
    switch (codice)
    {
    case 1: 
    cout << "Selezionato caffè prezzo 0.5 euro" << endl;
    prezzo=0.5;
    systemctl_poweroff;
        break;

    case 2:
    cout << "Selezionato paino prezzo 5.5 euro" << endl;
    prezzo=5.5;
        break;

    case 3:
    cout << "Selezionato bibita prezzo 2 euro" << endl;
    prezzo=2.0;

        break;

    default:
        cout << "Codice prodotto non valido" << endl;
        break;
    }


    cout <<"inserire denaro"<<endl;
    cin >> s;
    credito=credito+s;
    cout <<"Denaro inserito "<< credito << endl;

    while (prezzo>credito)
    {
    cout <<"inserire denaro"<<endl;
    cin >> s;
    if (s==1.0 ||s==2.0 || s==0.5 || s==0.2 || s==0.1)
    {
    credito=credito+s;
    cout <<"Denaro inserito "<< credito << endl;
    s=0.0;
    }
    else 
    {
        cout << "credito inserito non accettato" << endl;
    }
    }
    cout << "erogazione prodotto"<<endl;

    if (prezzo<credito)
    {
        resto=credito-prezzo;
        while (resto!=0.0)
    {
        if (resto%2.0==0 && m2!=0)
        {
            cout << "Resto erogato 2 e " <<endl;
            resto=resto-2.0;
        }
        if (resto%1.0==0 && m1!=0)
        {
            cout << "Resto erogato 1 e " <<endl;
            resto=resto-1.0;
        }
        if (resto%0.5==0 && m50!=0)
        {
            cout << "Resto erogato 0.5 e " <<endl;
            resto=resto-0.5;
        }
        if (resto%0.2==0 && m20=0.0)
        {
            cout << "Resto erogato 5 e " << endl;
            resto=resto-0.2;
        }
    }
    }

    while (resto!=0.0)
    {
        resto%5.0=0.0
    }
    
    return 0;

}
