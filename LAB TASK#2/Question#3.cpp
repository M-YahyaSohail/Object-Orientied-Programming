#include <iostream>
using namespace std;
int *arr(int num,int *array){
    array= new(nothrow) int[num];
    return array;
}
int main(){
    int num;
    cin>>num;
    int *array=nullptr;
    array=arr(num,array);
    if(array==nullptr){
        cout<<"Allocation failed!";
        delete[] array;
    }
    else {
        cout<<"Allocation successful!";
        delete[] array;
    }
    return 0;
}
