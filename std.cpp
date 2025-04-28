#include<iostream>
int main(){
	int a=-1,b,c=1;
	while (c>0){
		std::cout<<"escribir un numero: ";
		std::cin>>c;
		a=a+1;
		b=b+c;
	}
	std::cout<<"contador: "<<a;
	std::cout<<"\nacumulador: "<<b;
	return 0;
}
