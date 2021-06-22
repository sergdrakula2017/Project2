//24
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string buf;
	 int  k=1; int  m=1;
	ifstream file ("C:\\24_demo.txt");
	if (!file)
	{
		cout << "ERROR";
	}
	
	file >> buf;
	
	for (int i = 1; i<=(buf.size()-1);i++)
	{
		if (buf[i]!=buf[i-1])
		{
			k++;
			m = max(k, m);
			
			
		}//cout << i << " ";
		else  k = 1; 

	}
	cout << endl;
	cout << m;
	return(0);
}