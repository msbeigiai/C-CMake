#include <iostream>
#include "my_lib.h"
#include "nlohmann/json.hpp"


int main()
{
    print_hello_world();
	
	std::cout << "JSON Lib Version: "
		<< NLOHMANN_JSON_VERSION_MAJOR << "."
		<< NLOHMANN_JSON_VERSION_MINOR << "."
		<< NLOHMANN_JSON_VERSION_PATCH << "."
		<< '\n';

    return 0;
}
