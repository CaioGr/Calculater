#include <iostream>
 
 using namespace std;

  double numero1;
  double numero2;
  double adici1num;
  double soma;
  double sub;
  double divi;
  double multi;
  double par;
  int main(){

    cout << "adicione os numeros deesejados para a conta" << endl;
        cin >> numero1;
        cin >> numero2;
    cout << "aperte 1 para somar 2 para subtrair 3 para dividir 4 para multiplicar 5 para saber se e par ou impar" << endl;
        cin >> adici1num;

                if(adici1num == 1){
                    soma = numero1 + numero2;
                    cout << soma;
                }else if(adici1num == 2){
                    sub = numero1 - numero2;
                    cout << sub;
                }else if(adici1num == 3){
                    divi = numero1 / numero2;
                    cout << divi;
                }else if(adici1num == 4){
                    multi = numero1 * numero2;
                    cout << multi;
                }else{
                    cout << "essa conta nao existe neste programa";
                }


  }