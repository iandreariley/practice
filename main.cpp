#include <iostream>
#include <cstdlib>

using namespace std;

void zero() {cout<<"zero!";}
void number() {cout<<"a number!";}

typedef void (*fptr)();

int main (int argc, char * const argv[])
{
	int specicalC = (int)'?'
	bool truth;
	srand(time(0));
	fptr funcs[2];
	funcs[0] = &zero;
	funcs[1] = &number;
	char c;
	int n, numbers[10];
	do
	{
		for(int i = 0; i < 10; i++)
		{
			truth = n = rand()%5;
			cout<<n<<" is ";
			(*funcs[truth])();
			cout<<endl;
		}
		cout<<endl<<"again?";
		cin>>c;
	}while(c != 'n');
}
