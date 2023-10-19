int countDigits(int n){
	// Write your code here.	

     int count=0;
	 
     cin>>n;
     int temp=n;
	while(temp!=0){
	 int d;
	 d=temp%10;
	 temp=temp/10;
	 if(n>0 && d>0 && n%d ==0){
		 
	     count++;
	 }
	 
	}
	 

    return count;

}