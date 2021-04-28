#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"\n\nType year : ";
    cin>>year;
    if (year%4==0){
        if (year%100==0){
            if (year%400==0){
                cout<<"\n\nThis year is leap!";
            }
            else{
                cout<<"\n\nThis year is common!";
            }
        }
        else{
            cout<<"\n\nThis year is leap!";
        }
    }
    else{
        cout<<"\n\nThis year is common!";
    }


    return 0;
}
