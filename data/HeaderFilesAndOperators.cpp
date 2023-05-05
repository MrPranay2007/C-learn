//System defined header file, one of them being <io stream>
#include<iostream>
//User defined header file is defined by the user Ex- FILENAME.h
//#include"example.h" --> Error will be produced if theres no example.h in current directory
using namespace std;

int main()
{
    cout<<" All the operators in c++"<<endl;
    //Arithmetic operator
    cout<<"Following are the Arithmetic Operators in c++"<<endl;   
    int a=2,b=2;// Here '=' is an assignment operator
    cout<<"Value of a+b is "<<a+b<<endl;
    cout<<"Value of a-b is "<<a-b<<endl;
    cout<<"Value of a*b is "<<a*b<<endl;
    cout<<"Value of a/b is "<<a/b<<endl;
    cout<<"Value of a%b is "<<a%b<<endl;
    cout<<"Value of a++ is "<<a++<<endl;
    cout<<"Value of a-- is "<<a--<<endl;
    cout<<"Value of ++a is "<<++a<<endl;
    cout<<"Value of --a is "<<--a<<endl;
    cout<<endl<<endl<<endl;

    //Compraison operator
    cout<<"Following are the Comparison Operators"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a ! b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<endl<<endl<<endl;

    //Logical Opearators
    cout<<"Following are the Logical Operators"<<endl;
    cout<<"The value of logical and operator a==b and a<b is "<<((a==b) & (a<b))<<endl;
    cout<<"The value of logical or operator a==b or a<b is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical not operator (!(a==b) is "<<(!(a==b))<<endl;
    cout<<endl<<endl<<endl;
    
    
    return 0;
}
