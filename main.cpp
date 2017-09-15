#include <iostream>
#include <cmath>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    ifstream infile;
    vector<int> numVec;
    infile.open("integers.txt");

    if(infile.fail()){
        cout<<"Oops\n";
    }
    else{
        int value;
        while(infile >> value){
            numVec.push_back(value);
        }
    }
    infile.close();
    infile.clear();

    cout << numVec.front() << endl;
    cout << numVec.back() << endl;
    cout << numVec.at(3) << endl;

    int* numInt = &numVec[0];

    cout << "#######" << endl;
    cout << numInt[0] << endl;
    cout << numInt[1] << endl;
    cout << numInt[2] << endl;
    cout << numInt[3] << endl;
    cout << numInt[4] << endl;
    cout << numInt[5] << endl;

    return 0;
}