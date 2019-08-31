#include<fstream>
#include<iostream>
using namespace std;
int main(){
	int choice;
	string webSite;
	//to write it we need ofstream
	ofstream out;
	start:
		cout<<"Choose your operating system:"<<endl;
		cout<<"1-Windows"<<endl;
		cout<<"2-Linux"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Give me the site that i will block from your pc"<<endl;
				cout<<"For example:  www.example.com"<<endl;
				cin>> webSite;
				out.open("C:/Windows/System32/drivers/etc/hosts",ios::app);
				if(!out){
					cout<<"Please try with adm."<<endl;
				}
				else{
					out<<"127.0.0.1"<<"\t"<<webSite<<endl;
					cout<<webSite<<"\t BANNED!"<<endl;
				}
				break;
				case 2:
					cout<<"Give me the site that i will block from your pc"<<endl;
					cout<<"For example:  www.example.com"<<endl;
					cin>> webSite;
					out.open("/etc/hosts",ios::app);
					if(!out){
						cout<<"Please try with adm."<<endl;
					}
					else{
						out<<"127.0.0.1"<<"\t"<<webSite<<endl;
						cout<<webSite<<"\t BANNED!"<<endl;
					}
					break;
					default:
						cout<<"you make wrong choice!"<<endl;
						goto start;
							break;
		}
		cout<<endl;
		cout<<"If you want to allow your website again:"<<endl;
		cout<<endl;
		cout<<"For Windows use this path -C:/Windows/System32/drivers/etc/hosts- go and delete your banned website from the hosts!"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<"For Linux use this path -/etc/hosts- go and delete your banned website from the hosts!"<<endl;
		system("PAUSE");
	return 0;
}
