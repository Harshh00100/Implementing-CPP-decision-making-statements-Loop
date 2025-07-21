//Harsh kumar
//24070123146
//B3
#include <iostream>
using namespace std;

int main() {
    string password = "007";
    int a=0;
    while(true){
        cout<< "enter the password : "<<endl;
        string p;
        cin>>p;
        if (p==password){
            cout<<"correct!!  ";
            break;
        }
        else{
            cout<<"try again"<<endl;
        }
    }
return 0;
}