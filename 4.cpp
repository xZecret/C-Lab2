#include <iostream>
#include <cmath>

using namespace std;
int main()

{
/*
a)
if !(x<=0)
    if (x%2==0)
        x=x*x;
    else x%=3;  - Правильно
    
 b)
 if (x>0)
    if (x%2!=0)
        x=x*x;
    else x%=3; - Неправильно
    
 c)
 if !(x%2==0)
    if (x>0)
        x=x*x;
    else x%=3; - Неправильно
    
 d)
 if !(x%2==0){
    if (x>0)
    x=x*x;}
    else x%=3; - Неправильно
 
}
