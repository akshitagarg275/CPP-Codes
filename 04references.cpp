#include<iostream>
using namespace std;

int main(){
    int score=200;
    int *myp=&score;
    printf("Value of score is :%d\n",score);
    printf("Value of pointer is :%p\n",myp);
    printf("Value at pointer is :%d\n",*myp);
    printf("Value of address of  score is :%p\n",&score);

    int &another_score=score;
    another_score=800;
    printf("New value of score: %d\n",score);
    printf("New value of another_score: %d\n",another_score);
    printf("value of myp: %p\n",myp);


    return 0;
}