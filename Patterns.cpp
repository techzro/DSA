#include <iostream>
using namespace std;

void print1(int n){         // nxn star pattern
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout << "* ";
                }
            cout << endl;
            }
}
void print2(int n){         // * Right Triangle Pattern
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << "* ";
            }
        cout << endl;
        }
}
void print3(int n){         // nTriangle Numerical right angle pyramid
    for(int i = 0; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << j <<" ";
            }
        cout << endl;
        }
}
void print4(int n){         // Numeical Pyramid with same no.s in a linex
    for(int i = 0; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i << " ";
            }
        cout << endl;
        }
}
void print5(int n){         // seeding
   for (int i = 0; i<n; i++){
    for (int j = 0; j < n-i; j++){
        cout << "* ";
    }
    cout << "\n";
   }
}
void print6(int n){         // nNumberTriangle
   for (int i = 0; i<n; i++){
    for (int j = 1; j <= n-i; j++){
        cout <<j <<" ";
    }
    cout << "\n";
   }
}
void print7(int n){         // equillateral nStarTriangle
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= n-i; j++){
            cout << " ";
        }
        for (int j = 0; j< (i); j++){
            cout << "*";
        }
        for (int j = 1; j< (i); j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print8(int n){         // inverted equillateral nStarTriangle
    for (int i = 0; i < n; i++){
        for (int j = 1; j<= i; j++){
            cout << " ";
        }
        for (int j = 0; j< n-i; j++){
            cout << "*";
        }
        for (int j = 1; j< n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print9(int n){         // equillateral and inverted equillateral nStarTriangle
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= n-i; j++){
            cout << " ";
        }
        for (int j = 0; j< (i); j++){
            cout << "*";
        }
        for (int j = 1; j< (i); j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++){
        for (int j = 1; j<= i; j++){
            cout << " ";
        }
        for (int j = 0; j< n-i; j++){
            cout << "*";
        }
        for (int j = 1; j< n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print10(int n){        // without initial gap equillateral and inverted equillateral nStarTriangle
    for (int i = 1; i <= n; i++){
        for (int j = 0; j< (i); j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j< n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n){        // Numertical nBinaryTriangle
    for (int i = 0; i<n; i++){
        if(i%2 == 0){
            for (int j = 0; j<=i; j++){
                if(j%2 == 0)
                cout << "1 ";
                else
                cout << "0 ";
            }
            cout << "\n";
        }
        else{
            for (int j = 0; j<=i; j++){
                if(j%2 == 0)
                cout << "0 ";
                else
                cout << "1 ";
            }
            cout << "\n";
        }
    }
}
void print12(int n){        // numberCrown
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout << j << " ";
        }
        for(int j = 1; j<= 4*(n-i);j++ ){
            cout << " ";
        }
        for(int j =i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print13(int n){        // Increasing Number Triangle Pattern
    int sum = 1;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            cout << sum <<" ";
            sum++;
        }
        cout << endl;
    }
}
void print14(int n){        // Increasing Letter Triangle Pattern
    for (int i = 0; i<n; i++){
        for(char ch = 'A'; ch<='A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print15(int n){        // Reverse Letter Triangle Pattern
    for (int i = 1; i<=n; i++){
        for (char ch = 'A'; ch <= 'A'+n-i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print16(int n){        // Alpha-Ramp Pattern
    char ch = 'A';
    for (int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
}
void print17(int n){        // Alpha-Hill Pattern
    for (int i = 0; i<n; i++){
        char ch = 'A';
        for (int j = 1; j<2*(n-i-1); j++){
            cout << " ";
        }
        for (int j = 0; j<i; j++){
            cout << ch << " ";
            ch += 1;
        }
        for (char ch = 'A' + i; ch >= 'A'; ch--){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print18(int n){        // Alpha-Triangle Pattern
    for (int i = 0; i < n; i++){
        for (char ch = ('A'+n-1); ch>=('A' + n-1)-i; ch--){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print19(int n){        // Symmetric-Void Pattern
    for (int i=0; i<n; i++){
        for (int j = 0; j<n-i; j++){
            cout<<"* ";
        }
        for(int j=0; j<i; j++){
            cout<<"    ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i =0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<n-i; j++){
            cout<<"    ";
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print20(int n){        // Symmetric-Butterfly Pattern
    for (int i =0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<n-i; j++){
            cout<<"    ";
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=1; i<n; i++){
        for (int j = 0; j<n-i; j++){
            cout<<"* ";
        }
        for(int j=0; j<i; j++){
            cout<<"    ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print21(int n){        // Hollow Rectangle Pattern
    for(int i=0; i<n; i++){
        if(i==0 || i==(n-1)){
            for(int j=0; j<n; j++){
                cout<<"*";
            }
        }
        else{
            for(int j=0; j<n; j++){
                if(j==0 || j==(n-1)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
void print22(int n){        // The Number Pattern
    for (int i =0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top=i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout<< n-min(min(top, left), min(right, bottom));
        }
        cout<<endl;
    }
}
void print23(int n){
    int m =0;
    for (int i=1; i<=n; i++){
        m+=1;
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j = m; j<=2*i-1; j++){
            cout<<j;
        }
        for (int j = 2*i-2; j>=m; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    print1(n);
    print2(n);
    print3(n);
    print4(n);
    print5(n);
    print6(n);
    print7(n);
    print8(n);
    print9(n);
    print10(n);
    print11(n);
    print12(n);
    print13(n);
    print14(n);
    print15(n);
    print16(n);
    print17(n);
    print18(n);
    print19(n);
    print20(n);
    print21(n);
    print22(n);
    print23(n);
    return 0;
}