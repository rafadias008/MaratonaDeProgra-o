#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string entradaSomaMedia;
    int linha;
    double soma;
    double arr[12][12];
    cin >> linha;
    cin >> entradaSomaMedia;
    double media = soma / 12.0;

    for(int x = 0; x < 12; x++){
        for(int y = 0; y < 12; y++){
            cin>>arr[x][y];
        }
    }

    for(int y = 0; y < 12; y++){
        soma = arr[linha][y] + soma;
    }
  
    if(entradaSomaMedia == "S"){
        cout<<soma<<endl;
    } else if (entradaSomaMedia == "N"){
        cout<<media<<endl;
    } else {
        cout <<"Letra incorreta"<<endl;
    }
    return 0;
}