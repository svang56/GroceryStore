#include<iostream>
#include<string>
using namespace std;

const int LISTSIZE = 5; //array of 5 strings
int main()
{
  int numItems = 0;
  char input;
  string item;
  string list[LISTSIZE];
  int max = LISTSIZE - 1;
  int total = LISTSIZE;


  do
  {
 
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  
  if((input == 'a' || input == 'A'))
  {
    cout<<"What is the item?"<<endl;
    cin>>item;
    if(numItems < total)
    {
    list[numItems] = item;
    }

    if(numItems < total)
    {
    numItems++;
    }

   else
    {
    cout<<"You'll need a bigger list!";
    }
  } 
  
  }while( input != 'Q' && input != 'q');



  return 0;
}
