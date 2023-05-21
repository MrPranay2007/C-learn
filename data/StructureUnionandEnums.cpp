#include<iostream>
using namespace std;

//typedef may/may not be used
typedef struct employee
{
    int eId;
    char favchar;
    float salary;
}ep;

//typedef cannot be used
union money
{
    int rice;
    char car;
    float pounds;
};



int main()
{
    //Struct 
    // ep harry;
    // harry.eId = 1;
    // harry.favchar = 'C';
    // harry.salary = 12000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favchar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    //Union
    // union money m1;
    // m1.rice =34;
    // cout<<m1.rice<<endl;
    // m1.car='C';
    // cout<<m1.rice<<endl;

    //Enum
    enum Meal{ breakfast, lunch, dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    int m=dinner;
    cout<<m;
    return 0;
}