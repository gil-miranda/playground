#include <iostream>

using namespace std;

int main()
{
    int sum;
    sum = 0;
    
    
    
    /*progression sum = ((a_1 + a_n)*n)/2
    nth term of the progression: a_n = a1 + (n-1)*r -> n = (an - (a1+r))/r
    */
    
    
    
    sum = ((3 + 999)*(999/3))/2; //adding numbers on the form 3n;
    
    sum += ((5 + 995)*(995/5))/2; //adding numbers on the form 5n;
    
    sum -= ((15+990)*(990/15))/2; //subtracting numbers on the form 15n, which we counted twice because 15n are also 5n and 3n
    
cout << sum;

}
