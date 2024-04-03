#include <iostream>
//#include <stl>
#include <cstdlib> 
using namespace std;

int main(int argc, char** argv) {
	cout << "My rock paper scissors game";
	int i=0;
	
	int j;
	int k;
	while(i<23)
	{
		cout << "\nSelect 1 for rock\n2 for paper\n3 for scissor"<<endl;
		cin >> k;
		
		if(k>=1 and k<=3)
		{
			k = k -1;
			j=rand()%3;
			if(k-j== 1 or k-j == -2)  // O{N} complexity solutions
			{
				cout << "You win\n"<<k<<endl<<j<<endl;
				
			}
			else{
				cout << "Computer wins\n"<<k<<endl<<j<<endl;
			}
			i = i+1;
			
				
		}
			
	}
		
	return 0;
	
}
