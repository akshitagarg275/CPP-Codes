#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    // int life =3;
    // int score;
    // int points=4;
    // // int score=-points+life;
    // score=score+points;
    // // more optimised way it is
    // score+=points;
    // cout<<score;

    bool isSignedIn=true;
    bool isAdmin=true;
    bool isGoogleUser=false;
    bool isFBUser=true;

    // if (isSignedIn && isAdmin)
    // {
    //     puts("Welcome Admin!!");
    // }
    
    // if((isFBUser || isGoogleUser) && isAdmin){
    //     puts("Welcome Admin");
    // }
    
    // Bitwise operators
    unsigned int  x=6;
    unsigned int y=7;
    unsigned int z=x&y;
    cout<<z;
    return 0;
}