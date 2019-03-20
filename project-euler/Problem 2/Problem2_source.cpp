#include <iostream>

using namespace std;

int main () {

    int n1, n2, n3, sum;

    n1 = 1;
    n2 = 2;
    sum = n2;
    n3 = 0;

    while (n3 < 4000000) {

        n3 = n1 + n2;

        n1 = n2;

        n2 = n3;
       
        if (n3 % 2 == 0) {
            sum += n3;
        }
    }
    
    cout << sum;
    return 0;
}
