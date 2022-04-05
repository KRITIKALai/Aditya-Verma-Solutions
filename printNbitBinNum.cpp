#include <iostream>
#include <string>
using namespace std;

void pnbbn(int ones, int zeros, int N, string &s){
    if(ones+zeros == N){
        cout<<s<<endl;
        return;
    }
    
    string s1=s;
    string s2=s;
    if(ones>zeros){
        s1.push_back('0');
        pnbbn(ones,zeros+1,N,s1);
    }
    
    s2.push_back('1');
    pnbbn(ones+1,zeros,N,s2);
}

int main() {
    // Write C++ code here
    int ones,zeros,N;
    string s;
    ones=0,zeros=0;
    s = "";
    cin>>N;
    pnbbn(ones,zeros,N,s);
    return 0;
}
