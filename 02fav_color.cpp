#include<iostream>
#include<string>
using namespace std;

int main(){
    // cout<<"Hello World";
    // std::cout<<"Hello World"<<std::endl;
    // cout<<"Hello World"<<endl;
    // int number;
    // cin>>number;
    // printf("Your id is:%d",number+3);
    string my_color;
    cout<<"Enter a color :\n";
    getline(cin,my_color);
    cout<<"Hey "<<my_color<<" is my fav too";
    return 0;
}