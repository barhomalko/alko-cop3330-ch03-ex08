/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 barhom alko
 */


#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>

using namespace std;


int main()
{
	int num = 0;
	cout << "Enter integer number\n";
	cin >> num;
	if (num % 2 == 0) {
		cout << "The value " << num << " is an even number.\n";
	}
	else {
		cout << "The value " << num << " is an odd number.\n";
	}
	return 0;
}
