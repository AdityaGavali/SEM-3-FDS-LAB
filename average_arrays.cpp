#include<iostream>
using namespace std;
int main(){
    int n;

    float a[n], sum = 0 ,average;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements : "<<endl;

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n ; i++){
        sum += a[i];
    }
    average = sum/n;
    cout<<"Average : "<<average<<endl;
    return 0;
    

}