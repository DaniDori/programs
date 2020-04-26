#define Ok 1
#define Bad 0
#include"functions.h"
int scanN(int* n) {
	cout << "Enter the number of people:" << endl;
	if (!(cin >> *n) || *n < 0) {
		cout << "Wrong data.";
		return Bad;
	}
	if (!(*n)) {
		cout << "Data is empty.";
		return Bad;
	}
	return Ok;
}
int scanAdj(int n, vector<vector<int>> arr) {
	bool x;
	cout << endl << "Enter data about people:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!(cin >> x)) {
				cout << "wrong data.";
				return Bad;
			}
			if (x) {
				arr[i].push_back(j);
			}
		}
	}
	return Ok;
}
void dfs(int v, vector<vector<int>> arr, vector<char> used) {
	used[v] = true;
	for (auto i = arr[v].begin(); i != arr[v].end(); i++) {
		if (!used[*i])
			dfs(*i, arr, used);
	}
}
bool comSearch(int n, vector<char> used) {
	for (int i = 0; i < n; i++) {//Пробегаемся по массиву использованных вершин и смотрим смогли
		if (!used[i]) {			 //ли мы попасть в каждую вершину за один проход в глубину
			return Ok;
		}
	}
	return Bad;
}