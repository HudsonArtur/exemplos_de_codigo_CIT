#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    float altura; //altura em metros
    char sexo;    //F feminino, M masculino
    float peso;   //peso em Quilograma 

    cout << "Digite seu sexo (F/M) Feminino ou Masculino: ";
    cin >> sexo;
    cout << endl << "Digte sua altura: ";
    cin >> altura;

    cout << endl;

    if (sexo == 'M')
    {
        peso = (72.7 * altura) - 58;
    }
    else{
        peso = (62.1 * altura) - 44.7;
    }

    cout << "Seu peso ideal é: " << peso << endl << endl;

    system("pause");
    return 0;
}