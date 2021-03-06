// YourChairisKillingYou.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


int main()
{

	//get start time
	auto start = chrono::steady_clock::now();

	//run code
	for (int i = 0; i < 1e7; i++) {
		cout << i;
		Sleep(1000);
		system("cls");
	}

	//find the difference between start and finish
	auto end = chrono::steady_clock::now();

	//find the difference
	double elapsed_time_ns = double(chrono::duration_cast<chrono::seconds>(end - start).count());

	//output
	cout << "Elapsed Time(s) " << elapsed_time_ns / 1e9 << endl;
	system("pause");
    return 0;
}

