#include <iostream>
#include <cmath>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    ifstream infile;
    infile.open("F:\\Code_Projects\\P2_MtPath\\integers.txt");

    if(infile.fail()){
        cout<<"Oops\n";
    }
    else{
        string s;
        while(getline(infile,s)){
            cout<<s<<endl;
        }
    }
    return 0;
}