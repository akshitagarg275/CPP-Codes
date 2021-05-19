#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    // printf("Float sixe is: %ld\n",sizeof(float));
    // printf("double sixe is: %ld\n",sizeof(double));
    // printf("l Long sixe is: %ld\n",sizeof(long));
    // printf("Long Double sixe is: %ld\n",sizeof(long double));

    float my_precise_value=20.2;
    printf("My precise value is : %.30f\n",my_precise_value);
    // cout doesn't provides complete precision while printing
    // cout<<my_precise_value;

    float p=20.2+20.2;
    // cout<<p<<endl;
    if(p==40.400002){
        printf("SAmme");
    }
    else{
        printf("Not same");
    }

    return 0;
}