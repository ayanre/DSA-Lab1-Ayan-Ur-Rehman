#include<iostream>
#include<vector>
using namespace std;

vector<int> counter(int arr[], int size, int key);

int main() {
    const int size = 5;    
    int arr[size] = {2, 7, 2, 3, 2};
    int key = 2;

    vector<int> newVec = counter(arr, size, key);

    for(int y = 0; y<newVec.size(); y++){
        cout << newVec.at(y) << " ";
    }

}

vector<int> counter(int arr[], int size, int key){

    vector<int> intV;

    for(int x=0; x< size; x++){
        if(arr[x] == key){
            intV.push_back(x);
        }
    }

    return intV;
}
