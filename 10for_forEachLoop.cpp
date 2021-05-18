#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    int myNums[]={2,3,4,5,6,7};
    // for(int i=0;i<6;i++){
    //     cout<<"Value is :"<<myNums[i]<<endl;
    // }

    // for each loop/ for range loop
    for(int i:myNums){
        cout<<"Value is: "<<i<<endl;
    }

    
    
    
    return 0;
}