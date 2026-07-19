#include <iostream>
using namespace std;
int main(){
//     int a;
//     cout<<"entre your age "<<endl;
//     cin>>a;
//     if (a>18){
//         cout<<"you can drive "<<endl;

//     }else{
//         cout<<"you cant drive"<<endl;
//     }
// }

// char ch;
// cout<<"enter your character"<<endl;
// cin>>ch;
// if(ch>='A' && ch<='Z'){
//     cout<<"this is the upper case character ";
// }else{
//     cout<<"this is lower case character or anoter special character"<<endl;
// }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int a;
    
//     // Fixed the typo "entre" to "enter"
//     cout << "Enter your age: " << endl; 
//     cin >> a;
    
//     // Added parentheses around the condition
//     if (a >= 18) { 
//         cout << "You can drive!" << endl;
//     } else {
//         cout << "You can't drive." << endl;
//     }
    
//     return 0; // Good practice to show the program finished successfully
// }
// check if a number is prime or not

int num;
bool isprime=true;
cout<<"entre the number you want to check"<<endl;
cin>>num;
for (int i=2 ; i<=num-1;i++){
    if(num%i ==0 ){
       isprime = false;
       break;
    }}
        // cout<<"this number is a prime number"<<endl;
    
if(isprime==true){
    cout<<"this number is  a prime number ";
}else{
    cout<<"this number i not a prime number";
}
}