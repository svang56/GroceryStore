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
        int NumberList = 1;
        cout<<"==ITEMS TO BUY=="<<endl;
        for(int i = 0; i < list.size(); i++)
        {
            cout<<NumberList<<" "<<list[i]<<endl;
            NumberList++;
        }
    }

  return 0;
}
