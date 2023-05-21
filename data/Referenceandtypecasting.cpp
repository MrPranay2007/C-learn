#include<iostream>
using namespace std;

int c=45;

int main()
{
    /*******************Build in Data types****************/
    int a, b, c;
    cout<<"Enter the value of a"<<endl; 
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is"<<::c;

    //***************Float, double and long double literal******************
    float d=34.4f;
    long double e=34.4l;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e; 

    // ********************Reference variables********************
    float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;


    //**************Type casting******************
    int m=45;
    float n=45.5;
    cout<<"The float value of z is "<<(float)m<<endl;
    cout<<"The integer value of m is "<<(int)n<<endl;
    int o=int(n);

    //Testings
    int x=455;
    int & y=x;
     x=3, y=4;
    cout<<x<<endl;
    cout<<y<<endl;

return 0;
}