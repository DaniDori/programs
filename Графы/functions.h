#pragma once
#include<iostream>
#include<vector>
using namespace std;
int scanN(int* n);//—читывает красивое Ќ
int scanAdj(int n, vector<vector<int>> arr);//считывает матрицу и делает из нее список смежности
void dfs(int v, vector<vector<int>> arr, vector<char> used);//поиск в глубину
bool comSearch(int n, vector<char> used);//ѕроверка на наличие вершин в которые не вошли 