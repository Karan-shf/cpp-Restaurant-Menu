#include <iostream>
using namespace std;

int main () {
    string food;
    int n;
    int s=0;
    //these are the menu and the price of foods
    string menu[5] = {"gheime" , "kabab" , "mast" , "soop" , "fesenjoon"};
    int price[5] = {40 , 65 , 10 , 25 , 40};
    
    cout <<"enter your food:";
    cin >>food;
    for (int i=0;i<5;i++) {
        if (food == menu[i]) {
            cout << "how many?";
            cin >>n;
            s=s+n*price[i];
        }
    }
    cout <<"your order: \n";
    cout <<n <<" " <<food <<"\n \n";
    cout <<"your price:" <<s;
    
return 0;
}