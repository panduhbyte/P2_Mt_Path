#include <iostream>
#include <cmath>
#include <fstream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

int main() {
    // ### Takes in file. ###
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

    cout << numStr.front() << endl;
    cout << numStr.back() << endl;
    cout << numStr.at(3) << endl;


    /*

    // ### Integers put into vector, then made into an integer array. ###
    int* numInt = &numVec[0];

    int max = numInt[0];
    int min = numInt[0];
    int numSize = numVec.size();

    for (int i = 0; i < numSize; i++)
    {
        if (numInt[i] > max)
        {
            max = numInt[i];
        }
        else if (numInt[i] < min)
        {
            min = numInt[i];
        }
    }

    // ### Found min and max values within the array. ###

     */
    return 0;
}