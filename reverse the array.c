string reverseWord(string str){
    
  //Your code here
  int i,j,t=str.length(),n;
  for(i=0,j=t-1;i<=j;i++,j--){
        n=str[i];
        str[i]=str[j];
        str[j]=n;
    }
    for(i=0;i<t;i++){
        cout<<str[i];
    }
  
}