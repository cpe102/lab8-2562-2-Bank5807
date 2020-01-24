#include<iostream>
using namespace std;

string printO(int M, int N){
    int i, j;
    string x = "";
    if(M <= 0 || N <= 0){
        cout << "Invalid input\n";
    }
    for(j = 1; j <= M;j++){
        for(i = 1; i <= N;i++){
            cout << "O";
            }
        cout << "\n";
        }
    return x;
    }

int main(){

	printO(2,2);
	cout << "\n";

	printO(3,5);
	cout << "\n";

	printO(5,3);
	cout << "\n";

	printO(0,3);
	cout << "\n";

	printO(7,-1);
	cout << "\n";

	return 0;
}
