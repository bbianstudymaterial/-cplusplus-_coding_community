#include<iostream>
#include<cstring>
using namespace std;

int main(void) {
    char s1[20]="Programming";
    //From right hand side
    cout<<strrchr(s1,'g')<<endl;
    cout<<strrchr(s1,'r')<<endl;
    
    return 0;
}