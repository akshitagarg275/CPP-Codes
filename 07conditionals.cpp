#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    int rating=5;
    // if(rating ==5){
    //     puts("Rating is 5");
    // }else if(rating==4){
    //     puts("Rating is 4");
    // }else{
    //     puts("Not a 5 star rated");
    // }

    // Ternary operators
    printf("Your rating feedback is %s\n",rating>4?"true block":"false block");
    return 0;
}