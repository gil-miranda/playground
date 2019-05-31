#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cout << "Digite uma palavra: ";
  getline(cin, str);
  for ( int i = 0; i < str.length(); i++){
      switch(str[i]) {
        case 'a': str[i] = 'i'; break;
        case 'e': str[i] = 'i'; break;
        case 'o': str[i] = 'i'; break;
        case 'u': str[i] = 'i'; break;
        case 'A': str[i] = 'i'; break;
        case 'E': str[i] = 'i'; break;
        case 'O': str[i] = 'i'; break;
        case 'U': str[i] = 'i'; break;
    }
  }
  cout << str << endl;


  return 0;

} //end main
