#include <iostream>
#include <math.h>

using namespace std;
int main() {

int n,x,y;

cout << "Digite o n";
cin >> n;

cout << "Digite o x";
cin >> x;

cout << "Digite o y";
cin >> y;

int xs[n];
int ys[n];

int j, i = 0;
for(i = 1; i <= n; i++) {
    xs[j] = x*i;
    ys[j] = y*i;
    j++;
}

for(i = 0; i < n; i++){
    cout << xs[i] << endl;
}

for(i = 0; i < n; i++){
    cout << ys[i] << endl;
}


return 0;
}