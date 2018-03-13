#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  int numItems = 0;
  char input;
  string item;
  vector<string> list; 
  

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
    list.push_back(item);
    numItems++;

  } 
  
  }while( input != 'Q' && input != 'q');
    if(list.size() == 0)
    {
        cout<<"No items to buy!"<<endl;
    }
    if(numItems > 0)
    {
        for(int i = 0; i < list.size(); i++)
        {
            cout<<list[i]<<endl;
        }
    }

  return 0;
}
