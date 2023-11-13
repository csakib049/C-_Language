#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    float array[8];
    float cgpa=0;
   float fi;
    void calculate_cgpa(){

    for(int i=0;i<8;i++){
        cout<<i+1<<" Semester result :";
        cin>>array[i];
    }

    for(int i=0;i<8;i++){

        cgpa=cgpa+array[i];


    }
       fi=cgpa/8;

       cout<<"\n\n\n\n\n";
    cout<<"Final result:"<<fi<<endl;

    }


};


int main(){

A ob;
ob.calculate_cgpa();

}
