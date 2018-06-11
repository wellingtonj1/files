#include <iostream>
#include <fstream>


using namespace std;

class Aluno 
{
	public:
	int mat,fr;
	float n1,n2;
	string nome;
	
};

int main()
{
	Aluno A;
	ofstream arqs("meufile.meumerm",ios::binary);
	for(int i=0;i<5;i++)
	{
		getline(cin, A.nome);
		cin>>A.mat;
		cin>>A.n1;
		cin>>A.n2;
		cin>>A.fr;
		
		arqs.write(reinterpret_cast <const char*>(&A),sizeof(Aluno));
	}
	arqs.close();
}

