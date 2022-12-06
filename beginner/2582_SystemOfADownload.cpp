/*System of a Download é uma famosa banda de Hacker Metal! Certa vez, eles criaram um dispositivo, com seis botões, numerados de 0 a 5, e 
colocaram nesse dispositivo os seus 11 maiores sucessos. Para tocar uma destas músicas, é preciso pressionar dois botões. Com isso, os números 
destes dois botões são somados, e então toca-se a música correspondente ao número da soma, conforme a relação abaixo:

0 - PROXYCITY
1 - P.Y.N.G.
2 - DNSUEY!
3 - SERVERS
4 - HOST!
5 - CRIPTONIZE
6 - OFFLINE DAY
7 - SALT
8 - ANSWER!
9 - RAR?
10 - WIFI ANTENNAS
Por exemplo, se os botões pressionados forem 3 e 4, irá tocar a música 7 - SALT
Escreva um programa que, dados os dois botões que forem pressionados, determine qual música irá tocar.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int c = 0;
    cout << "Quantas múscias deseja ouvir?" << endl;
    cin >> c;
    int x = 0, y = 0;
    int res;

    for(int i = 0; i < c; i++){
        cout << "Precione dois botões" << endl;
        cin >> x >> y;
        res = x + y;

        if(res == 0){
            cout << "PROXYCITY" << endl;
        }if(res == 1){
            cout << "P.Y.N.G." << endl;
        }if(res == 2){
            cout << "DNSUEY!" << endl;
        }if(res == 3){
            cout << "SERVERS" << endl;
        }if(res == 4){
            cout << "HOST!" << endl;
        }if(res == 5){
            cout << "CRIPTONIZE" << endl;
        }if(res == 6){
            cout << "OFFLINE DAY" << endl;
        }if(res == 7){
            cout << "SALT" << endl;
        }if(res == 8){
            cout << "ANSWER!" << endl;
        }if(res == 9){
            cout << "RAR?" << endl; 
        }if(res == 10){
            cout << "WIFI ANTENNAS" << endl;
        }if(res > 10){
            cout << "Música não identificada." << endl;
        }
    }


    return 0;
}
