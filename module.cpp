#include <Windows.h>
#include <cmath> 



const double e = 2.71828182845904523523536028747713527;

double sinh_imp1(double x) {
	return (1 - pow(e, (-2 * x))) / (2 * pow(e, -x));

} 

double cosh_imp1(double x) {
	return (1 + pow(e, (-2 * x))) / (2 * pow(e, -x));

}  

double tanh_impl(double x) {
	return sinh_imp1(x) / cosh_imp1(x);
} 

