#include<iostream>
using namespace std;
class bank_account
{
	public:
		string depositor_name,account_type;
		int account_number;
		float account_balance;
		
		
		void depositor_infoin()
		{
			
			cout<<"\n\nEnter the Depositor name: ";
			cin>>depositor_name;
			
			cout<<"Enter the Account number: ";
			cin>>account_number;
			
			cout<<"Enter the account type: ";
			cin>>account_type;
			
			cout<<"Enter the account balance: ";
			cin>>account_balance;
		}
		
		void depositor_infoout()
		{
			cout<<"\nDepositor name: "<<depositor_name;
			
			cout<<"\nAccount number: "<<account_number;
			
			cout<<"\nAccount type: "<<account_type;
			
			cout<<"\nAccount balance: "<<account_balance<<"\n\n";
		}
		
		void withdraw()
		{
			int withdrawal;
			cout<<"\n\nEnter the amount to be withdrawn: ";
			cin>>withdrawal;
			account_balance = account_balance - withdrawal;
			cout<<"\n\nYour account balance: "<<account_balance<<"\n\nTHANK YOU\n";
		}
		
		void deposit()
		{
			int deposition;
			cout<<"\n\nEnter amount to be deposited: ";
			cin>>deposition;
			account_balance = account_balance + deposition;
			cout<<"\n\nYour account balance: "<<account_balance<<"\n\nTHANK YOU\n";
		}
};
main()
{
	int useraction1, useraction2,n,m;
	bank_account std;
	cout<<"WELCOME TO GCU BANK ONLINE PORTAL\n\n";
	cout<<"Enter the number of users: ";
	cin>>n;
	std.depositor_infoin();
	for(m=0;m<n;m++)
	{
		cout<<"\nSelect action \n(1) Access account (2) Exit\nRequest: ";
		cin>>useraction1;
		cout<<"\n";
		if (useraction1==1)
		{
			std.depositor_infoin();
			cout<<"\nSelect your desired operation: \n(1) Show user information \n(2) Withdraw \n(3) Deposit \n\nRequest: ";
			cin>>useraction2;
			cout<<"\n";
			if (useraction2==1)
			{
				std.depositor_infoout();	
			}
			else if (useraction2==2)
			{
				std.withdraw();	
			}
			else if (useraction2==3)
			{
				std.deposit();	
			}
			else
			{
				cout<<"Ivalid input";
			}
		}
		else if(useraction1==2)
		{
			cout<<"\nExited Sucessfull\nTHANK YOU";
			break;
		}	
	}
}



