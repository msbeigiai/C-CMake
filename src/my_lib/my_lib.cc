#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>
#include <cxxopts.hpp>
//#include <fmt/format.h>
#include <spdlog/spdlog.h>

/**
 * Prints out hello world and test other libraries.
 */

void print_hello_world()
{
	std::cout << project_name << "\n";
	std::cout << project_version << "\n";

	std::cout << "JSON Lib Version: "
		<< NLOHMANN_JSON_VERSION_MAJOR << "."
		<< NLOHMANN_JSON_VERSION_MINOR << "."
		<< NLOHMANN_JSON_VERSION_PATCH << "."
		<< '\n';
	/*std::cout << "FMT Version: "
		<< FMT_VERSION  
		<< '\n';*/
	std::cout << "CXXOPTS: "
		<< CXXOPTS__VERSION_MAJOR << "."
		<< CXXOPTS__VERSION_MINOR << "."
		<< CXXOPTS__VERSION_PATCH << "."
		<< '\n';
	std::cout << "SPDLOG Version: "
		<< SPDLOG_VER_MAJOR << "."
		<< SPDLOG_VER_MINOR << "."
		<< SPDLOG_VER_PATCH << "."
		<< '\n';



    std::cout << "Hello World!\n";
}

