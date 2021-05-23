#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int programa=rand()%3, potrebitel, scissors=0, rock=1, paper=2;
    cout<<"scissors (0), rock (1), paper (2): ";
    cin>>potrebitel;
    if (potrebitel==programa){
        cout<<"It is a draw.";
    }
    else if (potrebitel==0 and programa==1 or potrebitel==1 and programa==2 or potrebitel==2 and programa==0){
        cout<<"You won.";
    }
    else{
        cout<<"You lost.";
    }
    return 0;
}
