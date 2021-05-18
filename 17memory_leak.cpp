#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    int * myp;

    // reserving memory
    // myp=new int [100];
    // cout<<"Memory space allocated";
    // delete [] myp;

    // NOT RECOMMENDED
    //  myp=new(nothrow) int [100];
    // cout<<"Memory space allocated";
    // delete [] myp;
    // return 0;

    try{
        myp=new int[100];
        cout<<"space allocated";
    }catch(...){
        cout<<"Failed to allocate memory";
    }
    delete [] myp;
}