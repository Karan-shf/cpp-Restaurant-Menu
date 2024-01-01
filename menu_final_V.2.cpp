#include <iostream>
using namespace std;

int main () {
    string food;
    int n[5];
    int s=0; //the price of all
    string cmnd_1 = "yes";
    string cmnd_2 = "no";
    string cmnd_3 = "yes";
    string F[5]; //an array for the entered foods
    int j=0;
    int k=0;
    //these are the menu and the price of foods
    string menu[5] = {"gheime" , "kabab" , "mast" , "soop" , "fesenjoon"};
    int price[5] = {40 , 65 , 10 , 25 , 40};
    
    while (cmnd_1 == "yes") {
        while (cmnd_3 == "yes") {
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
                    bool checked = false;
                    for (int z=0;z<5;z++) {
                        if (food==F[z]) {
                            n[z]+=n[j];
                            checked = true;
                        }
                    }
                    if (!checked) {
                        F[j]=food;
                        j++;
                    }
                } else {k++;}       
            }
            if (k==5) {
                cout <<food <<" is not on the menu \n";
                cout << "please enter another food \n";
            } else {cmnd_3 = "no";}
            k=0; //reset k for future loops
        }    
        cmnd_3 = "yes"; //reset for future loops
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