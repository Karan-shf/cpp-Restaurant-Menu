#include <iostream>
using namespace std;

int main () {
    string food;
    int n[5];
    int s=0; //the price of all
    string cmnd = "yes";
    string F[5]; //an array for the entered foods;
    int j=0;
    //these are the menu and the price of foods
    string menu[5] = {"gheime" , "kabab" , "mast" , "soop" , "fesenjoon"};
    int price[5] = {40 , 65 , 10 , 25 , 40};
    
    while (cmnd == "yes") {
        cout <<"enter your food:";
        cin >>food;
        for (int i=0;i<5;i++) {
            if (food == menu[i]) {
                cout << "how many? ";
                cin >>n[j];
                s=s+n[j]*price[i];
                F[j]=food;
                j++;
            }
        }
        cout <<"do you want to continue? ";
        cin >>cmnd;
    }
    cout <<endl;
    cout <<"your order: \n";
    for (int i=0;i<j;i++) {
        cout <<n[i] <<" " <<F[i] <<endl;
    }
    cout <<"your price:" <<s;
    
    return 0;
}