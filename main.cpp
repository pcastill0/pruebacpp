#include <iostream>

int main(int argc, char** argv ){
	//std::cout << "Buenaaaas\n";

	//std::cout << argc << std::endl;
	if(argc > 1){
		std::cout << "Hola " << argv[1] << "!" << std::endl;
	} else {
		std::cout << "Introduce un nombre como parametro!!!" << std::endl;
	}

	return 0;
}
