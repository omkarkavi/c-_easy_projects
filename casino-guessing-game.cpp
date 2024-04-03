#include <iostream>
#include <cstdlib> 
using namespace std;

int main(int argc, char** argv) {
	cout << "Number guessing game";
	int i=0;
	
	int j;
	int k;
	while(i<5)
	{
		cout << "Select a number between 1-5"<<endl;
		cin >> k;
		
		if(k>=1 and k<=5)
		{
			k = k -1;
			j=rand()%5;
			if(k==j)  // O{N} complexity solutions
			{
				cout << "You win\n";
				
			}
			else{
				cout << "House wins\n";
			}
			i = i+1;
			
				
		}
			
	}
		
	return 0;
	
}