#include <iostream>
#include <vector>
using namespace std;

void tree(vector<int> v, int loc){
    int leftson , rightson;
    if((2*loc) + 1 > v.size()){
        leftson = -1,rightson = -1;
    }else if(2*loc + 1 == v.size()-1){
        leftson = (2*loc)+1,rightson = -1;
    }else{
        leftson = (2*loc)+1,rightson = 2*(loc+1);
    }
    cout<<loc<<" , "<<leftson<<" , "<<rightson<<endl;
}

void heapify(vector<int> base, int a, int b, int c){
    
}

int main() {
    vector<int> ve {1,9,7,5,4,6,3,8,2,0};
    
    for(int h = 0; h < ve.size(); h++){
        cout << ve.at(h) << ", ";
    }
    cout << endl;
    
    for(int h = 0; h < ve.size(); h++){
        tree(ve,h);
    }
    
    return 0;
}
