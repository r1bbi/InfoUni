// 6-10-2023 esercizio ciclo while
#include <iostream>
using namespace std;
char start;
int i=0;
int guess=0;
int main(){
    cout << "Press s to start"<< endl;
    cin >> start;
    if(start=='s'){
        srand(time(NULL));
        int random =1 + rand()%(100-1+1);
         
        while (i<10)
        {
            cout<<"Guess a number:"<< endl;
            cin>>guess;
            if (guess==random)
            {
               cout<<"You won"<< endl;
               break;
            }
            else{
                if (guess>random)
                {
                    cout<<"Your number is higher"<< endl;
                }
                else{
                    cout<<"Your number is lower"<< endl;
                }
                
                cout<<"Try again"<< endl;
                i++;
            }
            
        }
        
    }
    else{
        cout<<"exit program"<< endl;
    }

return 0;
}