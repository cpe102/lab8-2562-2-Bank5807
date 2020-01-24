#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){

    double loan, rate, pay;
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year(%): ";
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

	int year = 1;
	double inter = 0, payment = 0, total = 0;

	do{
	cout << fixed << setprecision(2);
	cout << setw(13) << left << year++;
	cout << setw(13) << left << loan;

	inter = loan * (rate/100);
    if(inter > pay){
        cout << "you can't pay with this amount of monny.";
        break;
    }
    total = loan + inter;
	cout << setw(13) << left << inter;
	cout << setw(13) << left << total;

    if(loan < pay){
        payment = total;
    }else{
        payment = pay;
    }
	cout << setw(13) << left << payment;

	loan = total - payment;
	cout << setw(13) << left << loan;
	cout << "\n";
	}while(loan > 0);

	return 0;
}
