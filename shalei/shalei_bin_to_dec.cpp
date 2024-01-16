#include <iostream>
#include <math.h>
using namespace std;

int main(){ 
    unsigned char bin[8];// string is chars array
    short int dec=0,binary[8];// short int == int16 ;size of int 16 == 2bytes
    cout << "input binary :";
    cin>>bin; //input 
    for (int i = 0,j=7;i<8;i++,j--){
        binary[i]=(int)bin[i]-48; // convert char to int
        dec+=binary[i]*pow(2,j); // formula
        }
    cout<<"output"<<dec<<endl; //this is the output
    return 0;
}