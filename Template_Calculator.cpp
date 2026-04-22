// Solution for Sec 2 - Exercise 1: Generic Calculator using Templates
/* A program that demonstrates Template Classes, allowing 
   mathematical operations to work with multiple data types (int, float, etc.) */
#include<iostream>
using namespace std;
template<class T>
class Calc{
    private:
    T num1;
    T num2;
    public:
    
    void display()
    {
    cout<<num1<<"+"<<num2<<"="<<add()<<endl;
    cout<<num1<<"*"<<num2<<"="<<multiply()<<endl;
    cout<<num1<<"-"<<num2<<"="<<subtract()<<endl; 
    }
    
     T add()
{
    return num1+num2;
}
T multiply()
{
    return num1*num2;
}
T subtract()
{
    return num1-num2;
}
Calc(T x,T y);
};
template<class T>
  Calc<T>::Calc(T x,T y)
    {
    num1=x;
    num2=y;
    }
  
int main()
{
    int x,y;
    float f,z;
    cout<<"enter int value1: ";
    cin>>x;
    cout<<"enter int value2: ";
    cin>>y;
    cout<<"enter float value1: ";
    cin>>f;
    cout<<"enter float value2: ";
    cin>>z;
    
    Calc<int>intcalc(x,y);
    Calc<float>floatcalc(f,z);
    cout<<"Float"<<endl;;
    floatcalc.display();
    cout<<endl;
    cout<<"Int"<<endl;
    intcalc.display();
    
return 0;
}
