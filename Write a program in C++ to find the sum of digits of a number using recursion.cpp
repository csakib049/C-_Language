#include<iostream>
using namespace std;
int sumdigit(int n){
    if(n==0){
        return 0;
    }else{
        int digit= n % 10;
        int sum=sumdigit( n / 10);
        return digit + sum;
    }
}
int main(){
    int sumdigit(int n);
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sakib = sumdigit(n);
    cout<<"The sum of digit in "<<n<<" is "<<sakib<<endl;
    
    
    return 0;
}
