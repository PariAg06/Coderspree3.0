bool checkArmstrong(int n){
	//Write your code here
	int arm=0,k=0,num;
	cin>>n;
	int temp=n;

	while(n!=0){
		
		n=n/10;
		 k++;

	}
	n=temp;
	while(n!=0){
		num=n%10;
		arm=arm+pow(num,k);
		n=n/10;
	}
	if(temp==arm || temp==1 || temp==0){
		return 1;
	}
	else{
		return 0;
	}
}
