#include <iostream>
#include <string>

using namespace std;
main (){
    string x;
    int j = 0,y = 0;
    cout << "Escreva uma palavra: \n" << endl;
    cin >> x;
    y = x.length();
    cout << y << endl;
    for(int i = 0 ; i < y ; i++){
        if(x[i] == 'a' || x[i] == 'A'){
            j++;
        }
    }
    cout << "Tem " << j << " letras A nessa palavra!" << endl;
}