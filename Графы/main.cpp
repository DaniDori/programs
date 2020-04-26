//Лабораторная работа №2 Графы, вариант 8.
//Дорофеев Даниил ИВТ13
#include"functions.h"
int main() {
	cout << "Laboratory work of Dorofeev Daniil\nGrafs, variant 8\n\n";
	vector<vector<int>>arr;
	vector<char>used;
	int n, v = 0;
	if (!scanN(&n))
		return 0;
	arr.resize(n);
	used.assign(n, 0);
	if (!scanAdj(n, arr))
		return 0;
	dfs(v, arr, used);
	if (comSearch(n, used) && n>1) 
		cout << endl << "Yes, you can divide people into unfamiliar groups." << endl;
	else
		cout << endl <<"No, you can't divide people into unfamiliar groups." << endl;
	arr.clear();
	used.clear();
}