#include<iostream>
#include<sstream>
#include<regex>
using namespace std;

int main(int argc, char** argv)
{
	string s(argv[1]);
	stringstream ss(s);
	string tokens[3];
	string token;
	for(int i = 0; i < 3; i++)
	{
		getline(ss, token, ' ');
		tokens[i] = token;
	}

	string op = tokens[1];
	regex decimal("\\d*(\\d*\\.|\\.\\d*)\\d*");
	if(regex_match(tokens[0], decimal) || regex_match(tokens[2], decimal))
	{
		double d1 = stod(tokens[0]);
		double d2 = stod(tokens[2]);
		if(op.compare("+") == 0)
		{
			cout<<s<< " = ";
			printf("%.2f", d1+d2);
			cout<<endl;
		}	
		else if(op.compare("-") == 0)
		{
			cout<<s<< " = ";
			printf("%.2f", d1-d2);
			cout<<endl;
		}
		else if(op.compare("*") == 0)
		{
			cout<<s<< " = ";
			printf("%.2f", d1*d2);
			cout<<endl;
		}	
		else
		{
			cout<<s<< " = ";
			printf("%.2f", d1/d2);
			cout<<endl;
		}	

	}
	else
	{
		int n1 = stoi(tokens[0]);
		int n2 = stoi(tokens[2]);
		if(op.compare("+") == 0)
			cout<<s<< " = "<<n1 + n2<<endl;
		else if(op.compare("-") == 0)
			cout<<s<< " = "<<n1 - n2<<endl;
		else if(op.compare("*") == 0)
			cout<<s<< " = "<<n1 * n2<<endl;
		else
			cout<<s<< " = "<<n1 / n2<<endl;
	}

	return 0;
}