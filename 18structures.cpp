#include<iostream>
#include<cstdint>
using namespace std;

struct User{
    const int uId;
    // making pointer constant not it's value
    // pointer has to point to the very particular location not any thing else
    const char *name;
    const char *email;
    int course_count;
};

int main(){
    User mickey={001,"mickey","mickey@cartoon.com",2};
    User donald={002,"donald","donald@cartoon.com",2};

    // pointer of user
    User * d=&donald;

    cout<<mickey.email<<endl;

    donald.course_count=5;
    cout<<donald.course_count<<endl;
    donald.email="d@toon.com";

    cout<<d->name<<endl;
    d->course_count=12;
    cout<<donald.course_count<<endl;

    
    return 0;
}