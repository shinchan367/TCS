bool checkArmstrong(int n){
	//Write your code here
	int len=to_string(n).length();
	int original=n;
	int last=0;
	int modi=0;
	while(n>0){
         last=n%10;
        modi=pow(last,len)+modi;
		n=n/10;
	}
	if(modi==original){
		return true;
	}
	else{
		return false;
	}
}
