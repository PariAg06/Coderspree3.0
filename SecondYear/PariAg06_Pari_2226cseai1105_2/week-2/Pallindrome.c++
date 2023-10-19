bool palindrome(int n)
{
    // Write your code here
    cin>>n;
    int temp=n,rev=0,num;
    while(n!=0){
        num=n%10;
        rev=rev*10+num;
        n=n/10;
    }
    if(temp==rev){
        return 1;
    }
    else{
    return 0;
    }
}