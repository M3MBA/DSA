#include <iostream>

using namespace std;

int main() {
    int T;
    cin>>T;

    while(T--){
        int N, C;
        cin>>N >>C;
        int A[N];
        int sum=0;
        for (int i=0; i<N; i++){
            cin>>A[i];
            sum+= A[i];
        }
        if (sum>C)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
    return 0;
}
