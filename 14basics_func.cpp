#include<iostream>
#include<cstdint>
using namespace std;
// function defination
void sayHello(){
    puts("Hello there..");
}

// void sayTwo(){
//     puts("2");
// }
int sayTwo(){
    return 2;
}

void sayThree(){
    puts("three");
}

int main(){
    sayHello();
    cout<<sayTwo();
    sayThree();
    return 0;
}

