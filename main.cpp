#include <iostream>
#include <cmath>
#include <fstream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

int main() {
    // ### Takes in file as string vector then convert to integer. ###
    ifstream infile;
    infile.open("test1.dat");
    vector<string> numStr;
    vector<int> numVec;

    if(infile.fail()){
        cout<<"Oops\n";
        return 0;
    }
    else{
        string value;
        while(infile >> value){
            numStr.push_back(value);
        }
    }
    infile.close();
    infile.clear();

    int numSize = numStr.size();
    for(int a=0; a < numSize; a++){
        int n = atoi(numStr.at(a).c_str());
        numVec.push_back(n);
    }


    // ### Vector integer converted to integer array then find max. ###
    int* numInt = &numVec[0];

    int max = numInt[0];
    int min = numInt[0];

    for (int i = 0; i < numSize; i++) {
        if (numInt[i] > max) {max = numInt[i];}
        else if(numInt[i] < min) {min = numInt[i];}
    }

    // ### Making ppm file. ###
    int w = numInt[0];
    int h = numInt[1];

    ofstream img;
    img.open("pic.ppm");
    img << "P3" << endl;
    img << w << " " << h << endl;
    img <<  max << endl;

    for(int b = 2; b < numSize; b += w){
        for(int c = b; c < w + b && c < numSize; c++){
            img << numInt[c]  <<" "<< numInt[c]  <<" "<< numInt[c]  << "\t";
        }
        img << endl;

    }
    img.close();
    img.clear();

    return 0;
}