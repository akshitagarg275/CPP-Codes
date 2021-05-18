#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    int rating=5;
    switch (rating)
    {
    case 5:
        puts("Rating is 5");
        break;
    case 4:
        puts("rating is 4");
        break;
    case 3:
        puts("rating is 3");
        break;
    case 2:
        puts("rating is 2");
        break;
    case 1:
        puts("rating is 1");
        break;
    default:
        puts("Invalid rating");
    }
    return 0;
}