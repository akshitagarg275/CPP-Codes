#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    int myNumbers[]={4,5,6,7,8,9};
    // int i=0;
    // while (i<6){
    //     if(i==3){
    //         break;
    //     }
    //     cout<<"current number is: "<<myNumbers[i]<<endl;
    //     i++;
    // }
    // while (i<6){
    //     if(i==3){
    //         // to get i=4 as it will not reaching the statements
    //         i++;
    //         continue;
    //     }
    //     cout<<"current number is: "<<myNumbers[i]<<endl;
    //     i++;
    // }

    // do while loop
    int i=8;
    do{
        cout<<"current number is :"<<i<<endl;
    }while (i<6);
    
    return 0;
}