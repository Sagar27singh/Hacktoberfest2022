#include <iostream>
using namespace std;
void swapreferencevar(int&a ,int&b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=5;
    cout<<"the value of x is\n"<<x<<"and the value of y is\n"<<y<<endl;
    swapreferencevar(x,y);
    cout<<"the value of x is\n"<<x<<"and the value of y is\n"<<y<<endl;
    return 0;

}
