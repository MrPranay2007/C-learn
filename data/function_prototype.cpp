#include<iostream>
using namespace std;

//Function prototype
// type function_name(arguments):
//int sum(int, int);//---- acceptable
//void greet();


//This will not swap a and b
void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}


//Call by refrence using pointers
void swapPointer(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


//Call by refrence using C++ refrence variables
int swaprefrencevar(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}

int & swapreutrnrefrence(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}


int main()
{
    //***********Function calling
    // int num1, num2;
    // cout<<"Enter first number "<<endl;
    // cin>>num1;
    // cout<<"Enter second number "<<endl;
    // cin>>num2;
    // num1 and num2 are actual parameters
    // cout<<"The sum is "<<sum(num1, num2)<<endl;
    //greet();

    
    //**********Call by value and call by refrence
    int x=4, y=5;
    cout<<"The sum of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x, y); No swapping will take place
    //swapPointer(&x, &y);  This will swap using pointer reference
    //swaprefrencevar(x, y);  this will swap values using address
    swapreutrnrefrence(x,y)=766; //Changes the value which is being returned
    cout<<"The sum of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}



/* 
int sum(int a, int b)
{
    // int a and int b are formal parameters
    int c=a+b;
    return c;
}


void greet()
{
    cout<<"Hello world"<<endl;
}
*/
