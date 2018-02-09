//Author: Lucas Eastburn
#include<iostream>

using namespace std;

int main()
{
char input;

  cout<<"What character do you want to know about?\n";
  cin>>input;  


  if(input>=65 && input<=90){
  //when user's entry is between A-Z...
  cout<<input<<" is an upper case letter!\n";
  }

  else if(input>=97 && input<=122){
  //when user's entry is between a-z...
  cout<<input<<" is a lower case letter!\n";
  }

  else{
  //in all other cases...
  cout<<input<<"?! Pssh. What are you talking about?\n";
}  
  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int) input<<endl;
  
  return 0;
}
