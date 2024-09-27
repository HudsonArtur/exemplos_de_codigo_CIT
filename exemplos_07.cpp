#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int num;

    cout << "Digite um número e veja seus valores na tabuada: ";
    cin >> num;
    cout << endl << endl;

    cout << "Tabuda do " << num << ": " << endl << endl;

    for(int i = 1; i <= 10; i++){
        cout << num << " * " << i << " = " << i*num << endl;
    }

    cout << endl;

    system("pause");
    return 0;
}