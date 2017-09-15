#include <iostream>
#include <cmath>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    ifstream infile;
    infile.open("integers.txt");

    if(infile.fail()){
        cout<<"Oops\n";
    }
    else{
        string s;
        while(getline(infile,s)){
            cout<<s<<endl;
        }
    }
    infile.close();
    infile.clear();

    ofstream outfile;
    outfile.open("newfile.txt");
    outfile<<"Words. Words.\nWords.";
    outfile.close();
    outfile.clear();

    return 0;
}