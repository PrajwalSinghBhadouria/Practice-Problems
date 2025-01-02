#include<iostream>
//#include<string>
using namespace std;

int main(){
	string st = "123.1208931";
	int p;
	for(int i=0; i<st.size(); i++){
		if(st[i]=='.'){
			p = i+1;
			break;
		}
	}
	string s="";
	for(int i=p; i<st.size(); i++){
		s = s+st[i];
		
	}
	int n = stoi(s);
	cout<<n<<endl;
	int sum=0;
	while(n!=0){
		sum = sum + n%10;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
