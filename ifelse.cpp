#include<iostream>
using namespace std;
int age;

int main(){
    cout<<"tell me your friend age"<<endl;
    cin>>age;
    if ((age<18) && (age>0)){
        cout<<"you cannot enter to the party"<<endl;
    }
    
    else if(age==18){
        cout<<"you are kid and you get kid pass to enter the party"<<endl;
    }
    else if(age<1){
        cout<<"you are not born"<<endl;
    
        
    }
    
    else
        cout<<"you are eligible to enter the party"<<endl;
    
    return 0;
}
