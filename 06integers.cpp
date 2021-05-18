#include<iostream>
#include<cstdint>

using namespace std;

int main(){
    printf("Size of this datatype is :%ld\n",sizeof(int));
    printf("Size of this datatype is :%ld\n",sizeof(short int));
    printf("Size of this datatype is :%ld\n",sizeof(long int));
    printf("Size of this datatype is :%ld\n",sizeof(long long int));
    printf("Size of this datatype is :%ld\n",sizeof(int16_t));


    // int fun=22;
    // printf("value of fun is: %d\n",fun);

    // int fun=0x16;
    int fun =0b00010110;
    printf("value of fun is: %d\n",fun);


    return 0;
}