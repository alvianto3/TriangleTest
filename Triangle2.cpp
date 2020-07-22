#include <iostream>
using namespace std;

int main(){
    //variavel data
    int input;

    //IO operation
    cout<<"Input Value : ";
    cin>>input;

    //loop 1
    for(int i=1; i<=input; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    //loop 2
    for(int i=1; i<=input; i++){
        for(int j=i; j<=input; j++){
            printf("*");
        }
        printf("\n");
    }
}