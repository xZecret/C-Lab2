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
    else x%=3;  - Соответствует 
    
 b)
 if (x>0)
    if (x%2!=0)
        x=x*x;
    else x%=3; - Не соответствует 
    
 c)
 if !(x%2==0)
    if (x>0)
        x=x*x;
    else x%=3; - Не соответствует 
 d)
 if !(x%2==0){
    if (x>0)
    x=x*x;}
    else x%=3; - Не соответствует 
}
