#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    // Dont use static with inline functions
    // static int c=0; // This executes only once 
    // c=c+1; // Next Time, the value of c will be retained
    return a*b;
}


float moneyReceived(int currentMoney, float factor=1.04)
{
    return currentMoney*factor;
}

// int strlen(const char *p)
// {

// }

int main()
{
    int a,b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    return 0;
}