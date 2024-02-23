#include <iostream>
using namespace std;
const int N = 200001;

int main()
{
    int n;
    char s[N];
    cin >>n>>s;
    int minn=n,num=0;
    for(int i=0; i<n; ++i){
        if(s[i]=='(') {num++;}
        else {num--;}
        minn=min(minn,num);
    }
    cout<<( (  (num == 0) && (minn >= -1)  )? "SI" : "NO" );
    return 0;
}