#include <iostream>

using namespace std;

int main(){
    int a = 0,b = 1, c = 1,fb = 0;
    cout << "Informe o número que deseja saber se está ou não incluso na sequeência de Fibbonacci!! \n";
    cin >> a;
    if (a == fb || a == 2 || a == 1){
        cout << endl <<"O numero "<< a <<" esta presente na sequencia de Fibonnaci!! \n" << endl;
        return 0;
    }
    while(fb <= a){
       fb = c + b;
       if(fb == a){
        break;
       }
       b = fb;
       fb = c + b;
       if(fb == a){
        break;
       }
       c = fb;
       fb = c + b;
    }
    if(fb == a){
        cout << endl <<"O numero "<< a <<" esta presente na sequencia de Fibonnaci!! \n" << endl;
        return 0;
    }
    else{
        cout << endl <<"O numero "<< a <<" nao esta na sequencia de Fibonacci!! \n" << endl;
        return 0;
    }
}    