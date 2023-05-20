#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	double british_rate = .571505;
	double mexican_rate = 10.7956;
	double japanese_rate = 112.212;
	int choice = 0;
	double american_dollar = 0.0;
	double converted_dollar = 0.0;
	char answer = 'y';
	
	do {
	system("cls");
	
	cout <<"1. BRITISH POUNDS: "<<endl;
	cout <<"2. MEXICAN PESOS: "<<endl;
	cout <<"3. JAPANESE YEN: "<<endl;
	cout <<"ENTER 1, 2 OR 3: "<<endl;
	cin >> choice;
	cout <<"ENTER NUMBER OF AMERICAN DOLLARS: "<<endl;
	cin >> american_dollar;
	
	cout <<fixed <<setprecision(2) <<endl;
	
	if (choice ==1)
	{
		converted_dollar = american_dollar * british_rate;
		cout <<"BRITISH POUND; " <<converted_dollar <<endl;
	}
	else if (choice ==2)
	{
		converted_dollar = american_dollar * mexican_rate;
		cout <<"MEXICAN PESOS: " <<converted_dollar <<endl;
	}
	else
	{
		converted_dollar = american_dollar * japanese_rate;
		cout <<"JAPANESE YEN: " <<converted_dollar <<endl;
	}
	
	cout <<"PROCESS ANOTHER (Y/N): ";
	cin >>answer;
	}
	while ((answer=='Y')||(answer=='y'));
	system ("pause");
	return 0;
}
