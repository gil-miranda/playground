#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {

int a, b, sum;
unsigned long long int number;
vector <int> num;
sum = 0;

cout << "Qual o numero da base?";
cin >> a;

cout << "Quer elevar a qual potencia?";
cin >> b;

number = pow(a,b);
cout << number << endl;
while (number > 0) {
    int d = number%10;
    number /= 10;
    num.push_back(d);
}

for(int i; i < num.size(); i++){
    sum += num[i];
}

return 0;
}