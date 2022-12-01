#include <iostream>

#define имя_макроса(параметры) (выражение)



using namespace std;

/*
Написать функцию, вычисляющую факториал
переданного ей числа.
*/
inline long f1(int a) {
	static long fact = 1;
	for (int i = 1; i <= a; i++) {
		fact *= i;
	}
	return fact;
}

/*
Написать функцию, которая проверяет, является ли 
переданное ей число простым? Число называется
простым, если оно делится без остатка только на себя
и на единицу.
*/
bool f2(int a) {
	for (int i = 2; i < a/2 && a != 2; i++) {
		if (a % i == 0) return false;
	}
	return true;
}

/*
Написать функцию, которая возвращает куб числа.
*/
inline int f3(int a) {
	return a * a * a;
}


void func() {
	static int a = 8;
	int b = 9;
	cout << a << " " << b << endl;
	a += 6;
	b += 6;
}

#define SQR(X) ((X)*(X))
#define CUBE(X) (SQR(X)*(X))
#define ABS(X) (((X) < 0)? -(X) : X)

#define MAX(x,y) ((x) > (y)?x:y)
int main()
{
	//int a;
	//cin >> a;
	//long factorial = f1(a);
	//cout << factorial;
	//f2(18) ? cout << "Prime number" : cout << "Not prime number";
	//cout << f3(5);

	//int a;
	//int t = 10;
	//a = SQR(t);
	//cout << a << endl;
	//a = CUBE(t);
	//cout << a << endl;
	//cout << ABS(16);


	int a = 98453;
	int b = 66394;
	cout << MAX(a + 1 , b + 100);
}
