#include <iostream>
#include <math.h>

using namespace std;

int main() {

    
int n, i;    
cout << "Qual a dimensão dos vetores? ";
cin >> n;

int x[n], y[n], w[n];
    
for(i = 0; i < n; i++){
    cout << "Digite a coordenada " << i << " do vetor x: ";
    cin >> x[i];
}

for(i = 0; i < n; i++){
    cout << "Digite a coordenada " << i << " do vetor y: ";
    cin >> y[i];
}

for(i = 0; i < n; i++){
    w[i] = x[i]+y[i];
}
    
cout << "x+y = [";
for(i = 0; i < n; i++){
    if (i != n-1){
        cout << w[i] << ",";
    } else {
        cout << w[i];
    }
}
cout << "]" << endl;

return 0;
}