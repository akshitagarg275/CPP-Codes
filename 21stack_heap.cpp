#include<iostream>
#include<cstdint>

struct User{
    const int id;
    int age;

    // assigning default values and creating a constructor
    User() : id(23),age(22){}
};

int main(){
    using namespace std;

    // STACK
    int score=100;
    User mike;
    // HEAP
    int *heap_score=new int;

    *heap_score=200;

    User* nike=new User();
    nike->age=25;
    // error
    // nike->id=12;

    
    return 0;
}