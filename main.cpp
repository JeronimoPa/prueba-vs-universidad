

#include <iostream>
#include <string>

std::string perseguido(bool x){
	if(x==true){return "Si";}
	else{return "No";}
}

int main(){
	std::cout<<"¿La mano invisible me persigue?"<<perseguido(false)<<std::endl;
	std::cout<<"Fuck Society";
	return 0;
}
