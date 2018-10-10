//Author:Charlie Kline
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> list; //vector 
        int numItems = 0;
        char input;
        string num1;
        string item;

        do {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                if (list.size()>=1)
                {
                cout<<"\n (D)elete last item";
                }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if (input ==  'A' || input == 'a') 
                {          
                        cout<<"What is the item?\n";
                        cin>>num1;
                        list.push_back(num1);
                }        
                else if ((input == 'D' || input == 'd') && list.size() > 0)
                {
                        item = list.back();
                        list.pop_back();
                        cout<<item<<" was deleted from the list.\n";
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
