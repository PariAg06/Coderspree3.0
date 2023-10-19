vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    cin>>n;
    int fact=1,x=2;
    while(fact<=n){
        cout<<fact<<" ";
        fact=fact*x;
        x++;
    }
}