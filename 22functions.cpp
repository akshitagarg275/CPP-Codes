#include<iostream>
#include<cstdint>
using namespace std;

// CALL BY VALUE
// void lifeUp(int life){
//     ++life;
// }

// CALL BY REFERNCE(POINTERS)
// void lifeUp(int * life){
//     ++(*life);
// }

// USING DIRECT REFERNCE
// BE CAUTIOUS WE ARE DIRECTLY CHANGING USING MEMORY
void lifeUp(int &life){
    ++life;
}

int addMe(int a,int b){
    return a+b;
}

float addMe(float a,float b){
    return a+b;
}


int main(){
    int life=3;
    // lifeUp(life);
    // lifeUp(&life);
    // lifeUp(life);
    // cout<<life<<endl;

    int v1=4;
    int v2=5;
    float v3=5.6;
    float v4=7.5;
    cout<<addMe(v1,v2)<<endl;
    cout<<addMe(v3,v4)<<endl;
    // float ans=5.6+7.5;
    float ans=20.2+20.2;
    cout<<ans;
    return 0;
}