#include "my_math.h"
#include <string>
#include <iterator>




int main() {
	std::string arr[7] = { "add","subtract","multiply","divide","square","square root","second_eq" };
	std::string done;
	
	char C;
	double x, y,a,b,c;


	
	do {

		std::cout << "what do you you wanna do"<<std::endl;
		for (auto i = arr; i != end(arr); i++) {
			std::cout << *i << std::endl;
		}
		std::cin >> done;
		
		if (done == arr[0])
		{
			std::cout << "enter the numbers you wanna use" << std::endl;

			std::cin >> x >> y;
			add(x, y);

		}
		else if (done == arr[1])
		{
			std::cout << "enter the numbers you wanna use" << std::endl;

			std::cin >> x >> y;
			subtract(x, y);

		}
		else if (done == arr[2])
		{
			std::cout << "enter the numbers you wanna use" << std::endl;

			std::cin >> x >> y;
			multiply(x, y);


		}
		else if (done == arr[3])
		{
			std::cout << "enter the numbers you wanna use" << std::endl;

			std::cin >> x >> y;

			divide(x, y);


		}
		else if (done == arr[4])
		{
			std::cout << "enter the number you wanna use" << std::endl;

			std::cin >> x ;
			square(x);

		}
		else if (done == arr[5])
		{
			std::cout << "enter the number you wanna use" << std::endl;

			std::cin >> x;
			square_root(x);


		}
		else if (done == arr[6]) {
			std::cin >> a >> b >> c;
			if (a == 0) {
				std::cout << "you're input is invalid" << std::endl;
			}
			else
				second_eq(a, b, c);
			
			
		}
		else
			std::cout << "your input is invalid" << std::endl;
		
			
			std::cout << " try again? y or n"<<std::endl;
			std::cin >> C;
	} while (C =='y');
}