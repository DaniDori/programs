#pragma once
#include<iostream>
#include<vector>
using namespace std;
int scanN(int* n);//��������� �������� �
int scanAdj(int n, vector<vector<int>> arr);//��������� ������� � ������ �� ��� ������ ���������
void dfs(int v, vector<vector<int>> arr, vector<char> used);//����� � �������
bool comSearch(int n, vector<char> used);//�������� �� ������� ������ � ������� �� ����� 