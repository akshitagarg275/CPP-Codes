#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    // int call_api=2;
    char call_api='2';
    try{
        cout<<"Trying to use API value\n";
        cout<<"did some testng with api value\n";
        throw call_api;
        cout<<"No code execute after return and throw\n";
    }catch(int x){
        cout<<"Integer exception handeled\n";
    }
    catch(float x){
        cout<<"Float exception handeled\nS";
    }catch(...){
        cout<<"Something went wrong...";
    }

    cout<<"Keep on moving with rest of code\n";
    return 0;
}