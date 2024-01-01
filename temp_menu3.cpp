#include <iostream>
using namespace std;

int main () {
    string food;
    int n[5];
    int s=0; //the price of all
    string cmnd_1 = "yes";
    string cmnd_2 = "no";
    string F[5]; //an array for the entered foods;
    int j=0;
    //these are the menu and the price of foods
    string menu[5] = {"gheime" , "kabab" , "mast" , "soop" , "fesenjoon"};
    int price[5] = {40 , 65 , 10 , 25 , 40};
    
    while (cmnd_1 == "yes") {
        cout <<"enter your food:";
        cin >>food;
        for (int i=0;i<5;i++) {
            if (food == menu[i]) {
                while (cmnd_2 == "no") {
                    cout << "how many? ";
                    cin >>n[j];
                    cout <<"are you sure? ";
                    cin >>cmnd_2;
                }
                cmnd_2 = "no"; // so that you could enter the loop next time
                s=s+n[j]*price[i];
                F[j]=food;
                j++;
            }
        }
        cout <<"do you want to continue? ";
        cin >>cmnd_1; 
    }
    cout <<endl;
    cout <<"your order: \n";
    for (int i=0;i<j;i++) {
        cout <<n[i] <<" " <<F[i] <<endl;
    }
    cout <<endl;
    cout <<"your price:" <<s;
    
    return 0;
}