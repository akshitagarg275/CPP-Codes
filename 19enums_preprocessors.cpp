#include<iostream>
#include<cstdint>
using namespace std;

enum MSOFFICE{
    BOLD,
    ITALICS,
    UNDERLINE
};

int main(){
    int my_attr=BOLD;
    cout<<my_attr;
    return 0;
}