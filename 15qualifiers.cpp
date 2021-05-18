#include<iostream>
#include<cstdint>
using namespace std;

int lifeUp(){
    // to keep state updated in all processses
    // it's now is i global state
    // works similar in classes
    static int life=3;
    // return life=life+1;
    return ++life; //more efficient life=life+1(evaluated twice)
    // return life++;
}

int main(){
    int life=3;
    cout<<"Your starting life is: "<<life<<endl;

    life=lifeUp();
    printf("Your updated life is %d\n",life);

    life=lifeUp();
    printf("Your updated life is %d\n",life);
    printf("Your new life is %d\n",life);
    return 0;
}