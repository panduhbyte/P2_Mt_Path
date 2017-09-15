#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main(){

    ifstream inFile;
    inFile.open("integers.txt");

    int cntInt;
    inFile >> cntInt;
    int numb[cntInt];
    for(int a = 0; a < cntInt; a++) inFile >> numb[a];


    return 0;
}