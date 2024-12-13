#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double interest(double money,double rate){
	return money * (rate/100);
}

double payment(double pay,double total){
	if(total >= pay) return pay;
	else return total; 
}

int main(){	
	double money,rate,pay;
	cout << "Enter initial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i =  1;
	double total,New;
	do{
		cout << fixed << setprecision(2); 

		total = money+interest(money,rate);
		New = total-payment(pay,total);

		cout << setw(13) << left << i; 
		cout << setw(13) << left << money;
		cout << setw(13) << left << interest(money,rate);
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment(pay,total);
		cout << setw(13) << left << New;
		cout << "\n";	

		money = New;
		i++;
	}while(New != 0);
	
	return 0;
}
