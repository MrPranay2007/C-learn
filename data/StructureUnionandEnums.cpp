#include<iostream>
using namespace std;

// typedef struct employee
// {
//     int eId;
//     char favchar;
//     float salary;
// }ep;

int main()
{
    ep harry;
    harry.eId = 1;
    harry.favchar = 'C';
    harry.salary = 12000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
}