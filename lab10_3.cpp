#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    ifstream read;
    string textline;
    double numline, mean = 0, xpow2, standivi;
    int i = 0;
    read.open("score.txt");
    while (getline(read,textline)){
        numline = atof(textline.c_str());
        mean += numline;
        xpow2 += numline*numline;
        i++;
    }
    mean = mean/i;
    standivi = sqrt((xpow2/i) - (mean * mean));
    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standivi;
}