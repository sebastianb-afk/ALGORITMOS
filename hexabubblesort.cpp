#include <iostream>
#include <vector>
using namespace std;
//asume h es pequeño = false
bool dohexaswap(string h,string h2){
    if(h.size() == h2.size()){
        for(int i = 0,j = 0; i<h.size() || j<h2.size() ;i++ , j++){
            if((int)h[i]<(int)h2[i]){
                return false;
            }
        }  
    }else if(h.size() < h2.size()){
        return false;
    }else{
        return true;
    }
}

void bubbleSort(vector<string> &v){
    for(int i = 0; i<v.size(); i++){
        for(int j = 0;j<v.size()-1;j++){
            if(dohexaswap(v.at(j),v.at(j+1)) == 1){
                string temp = v.at(j);
                v.at(j) = v.at(j+1);
                v.at(j+1) = temp;
            }
        }
    }
}

int main() {
    vector <string> v = {"12BC","A","9B1A","D1CE","FFF"};
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" , ";
    }
    cout<<endl;
    bubbleSort(v);
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" , ";
    }
    cout<<endl;
    return 0;
}
