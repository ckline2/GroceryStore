//Author:Charlie Kline
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> list; //array of 5 strings
        int numItems = 0;
        char input;
        string num1;

        do {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if (input ==  'A' || input == 'a') 
                {          
                        cout<<"What is the item?\n";
                        cin>>num1;
                        list.push_back(num1);
                }
        } while (input != 'Q' && input != 'q');
        if(list.size()==0)
        {
                cout<<"No items to buy!"<<endl;
        }
        else
        {
                cout<<"==ITEMS TO BUY=="<<endl;
                for(int index = 0; index < list.size(); index++)
                {
                        cout<<index+1<<" "<<list[index]<<endl;
                }
        }
        return 0;
}
