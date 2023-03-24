#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int &, int &);
void getinput(float &, float &);
void sawpTwoValues(int &, int &);
void sawpTwoValues(float &, float &);

// ******************************
// Implement all your functions here
// ******************************

void getinput(int &n1, int &n2)
{
    cout << "Enter 2 values: \n";
    cin >> n1 >> n2;
}
void getinput(float &f1, float &f2)
{
    cout << "Enter 2 values: \n";
    cin >> f1 >> f2;
}

void sawpTwoValues(int &n1, int &n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
void sawpTwoValues(float &f1, float &f2)
{
    float temp;
    temp=f1;
    f1=f2;
    f2=temp;
}
