#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<< glo;
}
int main(){
    int glo=9;
    glo=78;
    // int a=4;
    // int b=5;
    int a=6, b=4;
    float pi=3.14;
    char c='u';
    bool d=true;
    sum();
     cout<<"Variables and data types are discussed.\n Here the value of a is "<<a<<".\n The value of b is "<<b;
     cout<<"\n The value of pi is "<<pi;
     cout<<"\n The value of c is "<<c;
    cout<<glo;
    cout<<d;
    return 0;
}