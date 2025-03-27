#include<iostream>
using namespace std;
int main(){
    //Day 12 Q3

    /*
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    if(age>=13 && age<=19){
        cout << "Teenager";
    }
    else{
        cout << "Not a Teenager";
    }*/

    /*
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6;j++){
            cout << j*j*j << " ";
        }
        cout << endl;
        
    }*/
    
    for(int i=1;i<=7;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
    
}



