#include<iostream>
using namespace std;
int main (){
	int n1,n2,result,opc;
	std::cout<<"ingresa una opcion 1-4:";
	std::cin>>opc;
	switch(opc){
		case 1:
		std::cout<<"ponga un numero";
		std::cin>>n1;
		std::cout<<"ponga otro numero";
		std::cin>>n2;
		result=n1+n2;
		std::cout<<"el valor de"<<n1<<"+"<<n2<<"es:"<<result<<std::endl;
		break;
		case 2:
		std::cout<<"ponga un numero";
		std::cin>>n1;
		std::cout<<"ponga otro numero";
		std::cin>>n2;
		result=n1-n2;
		std::cout<<"el valor de"<<n1<<"-"<<n2<<"es:"<<result<<std::endl;
		break;
		case 3:
		std::cout<<"ponga un numero";
		std::cin>>n1;
		std::cout<<"ponga otro numero";
		std::cin>>n2;
		result=n1*n2;
		std::cout<<"el valor de"<<n1<<"*"<<n2<<"es:"<<result<<std::endl;
		break;
		case 4:
		std::cout<<"ponga un numero";
		std::cin>>n1;
		std::cout<<"ponga otro numero";
		std::cin>>n2;
		if(n2!=0){
			double division=staic_cast<double>(n1)/n2;
		std::cout<<"el valor de"<<n1<<"/"<<n2<<"es:"<<result<<std::endl;
        
		}else{
		
		std::cout<<"error: no se puede dividir entre cero"<<endel;
		}
		break;
		defautl:
			std::cout<<"opcion no valida. por favor, ingrese un numero entre 1 y 4."<<endl;
	}
	return 0;
}
