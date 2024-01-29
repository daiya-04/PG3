#include <iostream>
#include <string>
#include <chrono>

int main() {

	std::string a(100000, 'a');

	std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();

	std::string copy = a;

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	auto time = end - start;

	auto msec = std::chrono::duration_cast<std::chrono::microseconds>(time);
	std::cout << msec << std::endl;


	start = std::chrono::steady_clock::now();

	std::string move = std::move(a);

	end = std::chrono::steady_clock::now();

	time = end - start;

	msec = std::chrono::duration_cast<std::chrono::microseconds>(time);
	std::cout << msec << std::endl;
	
	return 0;
}