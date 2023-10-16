#include<iostream>
using namespace std;
int main()
{
int n, t1 = 1, t2 = 1, nextTerm = 0, i;
cin >> n;
if( n == 1) 
cout << n; 
else{
nextTerm = t1 + t2;
for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
cout << t2;
}

}
