// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solveJosephus(int idx, int K, vector<int> &people){
    if(people.size()==1){
        cout<<people[0]<<endl;
        return;
    }
    
    idx = (idx+K)%people.size();
    people.erase(people.begin()+idx);
    solveJosephus(idx,K,people);
}
int main() {
    // Write C++ code here
    int N,K,idx;
    cin>>N>>K;
    vector<int> people;
    idx=0;
    for(int i=0;i<N;i++) people.push_back(i+1); 
    solveJosephus(idx,K-1,people);
    return 0;
}
