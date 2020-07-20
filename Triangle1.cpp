#include <iostream>
using namespace std;

int main(){
    //variabel data
    int input;

    cout<<"input value :";
    cin>>input;
    
    for(int i=1; i<=input; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}