#include<iostream>
using namespace std;
/*Proc1.Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую
ее в переменной B(A — входной, B — выходнойпараметр; оба параметра являются вещественными).С помощью этой
процедуры найти третьи степени пяти данных чисел.*/
/*int power3(int x) {
	int q = x * x * x;
	return q;
}

int main() {
	int a;
	cin >> a;
	cout<<power3(a);
	return 0;
}*/
/*Proc3. Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую среднее арифметическое AMean = (X+Y)/2
и среднее геометрическоеGMean =√X·Y двух положительных чисел X и Y (X и Y — входные, AMean и GMean — выходные параметры
вещественного типа). С помощью этой процедуры найти среднее арифметическое и среднее геометрическое для пар (A, B), (A, C), (A, D),
если даны A, B, C, D.*/
/*double a_mean(int x,int y) {
	return (x + y) / 2.0;
}
double g_mean(int x,int y) {
	return sqrt(x * y);
}
int main() {
	int a, b;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		cout << a_mean(a, b) << ' ' << g_mean(a, b);
	}
	return 0;
}*/
/*Proc4. Описать процедуру TrianglePS(a, P, S), вычисляющую по стороне a равностороннего треугольника его периметр
P = 3·a и площадь S = a2√3/4 (a — входной, P и S — выходные параметры; все параметры являются вещественными). С помощью этой процедуры
найти периметры и площади трех равносторонних треугольников с данными сторонами.*/
double traingleP(double a) {
	return 3 * a;
}
double traingleS(double a) {
	return a * a * sqrt(3.0)/4.0;
}
int main(){
	double x;
	for(int i = 0; i < 3; i++) {
		cin >> x;
		cout << traingleP(x) << ' ' << traingleS(x);
	}
	return 0;
}
