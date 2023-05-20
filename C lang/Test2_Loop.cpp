#include <iostream>
#include <iomanip>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	using namespace std;
int main(int argc, char** argv) {
	
	int itemcode=0;
	double oprice=0.0;
	char item;
	double nprice=0.0;
	double men=0.20;
	double women=0.10;
	double child=0.10;
	char again='y';
	int nwomen=0;
	int nmen=0;
	int nchild=0;
	double gtotal=0.0;

do{
	system("cls");	
	
	cout<<"\t\t\tCLOTHES SHOP"<<endl;
	cout<<"ENTER ITEM CODE: ";
	cin>>itemcode;
	cout<<"ENTER OLD PRICE: ";
	cin>>oprice;
	
	
	if(itemcode==1)
	{
		cout<<"ITEM: WOMEN'S WEAR"<<endl;
		nprice=(oprice*women)+oprice;
		cout<<"NEW PRICE: "<<nprice<<endl;
		nwomen++;
	}
	
	else if(itemcode==2)
	{
		cout<<"ITEM: MEN'S WEAR"<<endl;
		nprice=(oprice*men)+oprice;
		cout<<"NEW PRICE: "<<nprice<<endl;
		nmen++;
	}
	else if(itemcode==3)
	{
		cout<<"ITEM: CHILDREN'S WEAR"<<endl;
		nprice=(oprice*child)+oprice;
		cout<<"NEW PRICE: "<<nprice<<endl;
		nchild++;
	}
	else
	{
		cout<<"INPUT ERROR";
	}
	gtotal=nprice+gtotal;
	cout<<"PROCESS ANOTHER ONE?: <Y/N>"<<endl;
	cin>>again;
}while((again=='y')||(again=='Y'));
	cout<<"NUMBER OF CHILDRENS PROCESSED: "<<nchild<<endl;
	cout<<"NUMBER OF WOMEN PROCESSED: "<<nwomen<<endl;
	cout<<"NUMBER OF MEN PROCESSED: "<<nmen<<endl;
	cout<<"GRAND TOTAL: "<<gtotal<<endl;
	
	
	
	
	return 0;
}
