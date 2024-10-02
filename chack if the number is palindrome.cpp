bool palindrome(int n)
{
    // Write your code here
    int dup=n;
    int revnum=0;
    while(n>0){
        int last=n%10;
        revnum=revnum*10+last;
        n=n/10;
    }
    if(dup==revnum){
        return true;
    }
    else{
    return false;
    }
}
