#include <iostream>
using namespace std;
int main() {
    int temp;
    int array[5]={2,8,0,3,4};
    cout<<"befor swap: "<<endl;
    for (int i = 0; i <5 ; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for (int j = 0; j <4 ; j++) {
        for (int i = 0; i <4 ; i++) {
            if (array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;

            }
        }
    }
    cout<<"After swap: "<<endl;
    for (int i = 0; i <5 ; i++) {
        cout<<array[i]<<" ";
    }
    return 0;
}