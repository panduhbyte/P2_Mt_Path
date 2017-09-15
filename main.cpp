#include <iostream>
#include <fstream>
//#include<string>
#include <vector>
using namespace std;

int main(){

    ifstream inFile;
    inFile.open("integers.txt");

    /*
    int cntInt;
    inFile >> cntInt;
    int numb[cntInt];
    for(int a = 0; a < cntInt; a++) inFile >> numb[a];
     */

    inFile.close();
    cout << numb[1];



    return 0;
}