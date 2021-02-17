#pragma once
#include <iostream>




double add(double x, double y) {
	
	double sum;
	sum = x + y;
	std::cout << "your result is : " << sum<<std::endl;
	return 1;
}
double subtract(double x, double y) {
	
	double sum;
	sum = x - y;
	std::cout << "your result is : " << sum<<std::endl;
	return 0;
}
double multiply(double x,double y) {
	
	double sum;
	sum = x * y;
	std::cout << "your result is : " << sum<<std::endl;
	return 0;
}
double divide(double x, double y) {
	
	double sum;
	
	if (y!=0)
	{
		sum = x / y;
		std::cout << "your result is " << sum << std::endl;
	}
	else
	{
		std::cout << "your input is invalid"<<std::endl;
	}
	return 0;
}
double square(double x) {
	
	
	double sum;
	
	
	sum = x * x;
	std::cout << "your result is : " << sum<<std::endl;
	return 0;
}
double square_root(double x) {
	
	double sum;
	sum = sqrt(x);
	std::cout << "your result is : " << sum<<std::endl;
	return 0;
}
double second_eq(double a, double b, double c) {
	
	double delta = (b * b) - (4 * a * c);
	double x1, x2;
	auto sqrtdel = sqrt(delta);

	if (delta > 0) {
	
		x1 = ((-sqrtdel) - b) / (2 * a);
		x2 = ((sqrtdel) - b) / (2 * a);

		std::cout << "the solutions for the equation is : " << x1 << "::" << x2 << std::endl;
	}
	else if (delta == 0) {
		x2 = ((sqrtdel)-b) / (2 * a);
		x1 = x2;
		std::cout << "the solution of the equation is : " << "x1" << " = " << "x2" << x1 << std::endl;
	}
	else
		std::cout << "the equation has no solution\n";
	return 1;

}