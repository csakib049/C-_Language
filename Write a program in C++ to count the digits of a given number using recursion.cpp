#include<iostream>
using namespace std;
int sakib(int n){
    if(n<10){
        return 1;
    }else{
        //recursive call
        return 1+sakib(n/10);
    }
}

int main(){
    int sakib(int n);
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int shahriar=sakib(n);
    cout<<"The number of digits in "<<n<<" is "<<shahriar;
    
    return 0;
}
