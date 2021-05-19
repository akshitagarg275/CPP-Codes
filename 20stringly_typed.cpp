#include<iostream>
#include<cstdint>
#include<string>
using namespace std;

string api_call(){
    return "got some value";
}

int another_api_call(){
    return 12;
}
int main(){
    // string response=api_call();
    auto response=api_call();
    auto res=another_api_call();
    cout<<response<<endl<<res<<endl;
    if (typeid(response)==typeid(string))
    {
        puts("Type of both id matched\n");
    }
    
    return 0;
}