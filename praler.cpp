#include <iostream>
#include <fstream>

using namespace std;

int main()
{	
	int x;
	ifstream arq1;
	arq1.open("meufile.meumerm");
	
	for(x=0;x<25;x++)
	{
		cout<<"\n";
		arq1>>x;
	}


}
