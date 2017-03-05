#include <iostream>
#include <string>
using namespace std;

struct nod{
	string fraza;
	nod *urmator;
};
nod *varf=NULL;

void pune(string fr){
	nod *p;
	p=new nod;
	p->fraza = fr;
	p->urmator = varf;
	varf=p;	
}

void scoate(){
	string a;
	nod *p;
	if( varf!= NULL){
		p=varf;
		varf=varf->urmator;
		a = p->fraza;
		cout << a << " ";
		delete(p);
	}
}


int main(){
	string str;
	cout << "Introduceti o fraza" << endl;
	cin >> str;
	while(str!= "."){
		pune(str);
		cin >> str;
	}
	while(varf!= NULL){
	scoate();
	}
	system("pause");
	return 0;
}