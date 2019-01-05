
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int r;
    float phi=3.14,luas;

    printf("Program Menentukan luas lingkarang\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Firdaus Pratama\n\t");
    printf("Nim  : 311810014\n");
    printf("--------------------------------------------\n");

    cout<<"masukan jari jari lingkaran : ";
    cin>>r;


    luas=phi*r*r;
    cout<<"luas lingkaran adalah : "<<luas;
    return 0;

}
