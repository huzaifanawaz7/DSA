#include<iostream>
using namespace std;
int main(){
    int notes=0;
    int amount=0;
    cout<<"enter the amount you want to check the number of notes"<<amount<<endl;
    cin>>amount;

    for ( int i=1; i<8 ; i++){
        switch(i){
            case(1):
            notes=amount/5000;
            amount=amount%5000;
            cout<<"the notes of 5000 rupees are "<<notes<<endl;
            // notes=0;
            break;
        case(2):
            notes=amount/1000;
            amount%=1000;
            cout<<"the notes of 1000 are "<<notes<<endl;
            break;
        case(3):
        notes=amount/500;
        amount%=500;
        cout<<"the 500 notes are "<<notes;
        break;
        case(4):
        notes=amount/100;
        amount%=100;
        cout<<"the 100 notes are "<<notes;
        break;
         case(5):
        notes=amount/50;
        amount%=50;
        cout<<"the 50 notes are "<<notes;
        break;
         case(6):
        notes=amount/20;
        amount%=20;
        cout<<"the 20 notes are "<<notes;
        break;
         case(7):
        notes=amount/10;
        amount%=10;
        cout<<"the 10 notes are "<<notes;
        break;
        }
    }
}