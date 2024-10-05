#include <iostream>

using namespace std;

int main(){
    int indice = 12, soma = 0, k = 1;
    while(k < indice){
        k++;
        soma+=k;
    }
    cout << soma << endl;
}