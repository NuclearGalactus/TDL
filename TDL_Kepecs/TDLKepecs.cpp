// TDLKepecs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TDLKepecs.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	TDLKepecs main;
	main.run();
}

void TDLKepecs::run() {
	int stage;
	getInput();
	while (TDLKepecs::input != "done") {
		
		cout << input << "\n";
		stage++;
		getInput();
	}
}

void TDLKepecs::getInput() {
	getline(cin, TDLKepecs::input);	
}

