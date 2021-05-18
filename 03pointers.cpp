#include<iostream>
using namespace std;

int main(){
    int card=40;
    int my_card=card;
    int *myp;
    myp=&card;

    my_card=*myp; //dereferencing of pointer
    printf("valur at myp: %p\n",myp);
    printf("valur at myp: %d",my_card);
    return 0;
}