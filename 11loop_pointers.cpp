#include<iostream>
#include<cstdint>
using namespace std;

int main(){
    int myNums[]={1,2,3,4,5,6};

    char my_string[]="akshita";
    char my_name[]={'a','k','s','h','i','t','a',0};
    // printf("My name is :%s\n",my_string);
    // printf("My name is :%s\n",my_name);

    // for(int i=0;my_name[i] != 0;i++){
    //     printf("%c",my_name[i]);
    // }
    // for(int i=0;my_string[i] != 0;i++){
    //     printf("%c",my_string[i]);
    // }

    // for(int i=0;my_name[i];i++){
    //     // printf("%c",my_name[i]);
    //     cout<<my_name[i];
    // }

    // *******using character pointer
    // for(char * cp=my_name;*cp!=0;cp++){
    //     cout<<"Character is: "<<*cp<<endl;
    // }

    for(char i:my_name){
        cout<<i<<endl;

    }

    return 0;
}