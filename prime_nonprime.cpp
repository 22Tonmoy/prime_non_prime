#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter a number : ";
    cin>>n;

    bool flag=0;

    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
        cout << "Non-prime" << endl;
        flag=1;
        break;
        }
    }
    if(flag==0){
        cout << "Prime" << endl;
    }
    
    return 0;
}
