bool isPrime(int n)
{
	// Write your code here.
    int c=0;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
        
    }
    if(c==2){
        return 1;
    }
    else{
         return 0;
    }
}
