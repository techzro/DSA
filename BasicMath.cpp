#include<bits\stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    int m = n;
    while(n>0){
        if(n%10 == 0){
            ;
        }
        else if(m/(n%10) == 0){
            count++;
            n = n/10;
        }
    }
    return count;
}

int reverse(int n){
    int revNum =0;
    if(n > (2^31) || n <= (-2^31)){
            return 0;
         }
    while(n != 0){
        int a = n%10;
        cout << a << endl;
        revNum = revNum*10 + a;
        cout << revNum << endl;
        n/=10;
    }
    return revNum;
}

bool pallindrom(int n){
    int revNum = 0;
    int b = n;
    while(n != 0){
        int a = n%10;
        revNum = revNum*10 + a;
        n/=10;
    }
    if (b != revNum || b < 0){
        cout << "false" << endl;
        return false;
    }
    else{
        cout << "true" << endl;
        return true;
    }
}

int main(){
    int n;
    bool r;
    cin >> n;
    r = pallindrom(n);
    cout << r;

    return 0;
}