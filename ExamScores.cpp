// ExamScores.cpp - Anna Myers - November 8, 2026
// Description: Reads up to 20 exam scores into an array then 
// displays the highest score, lowest score, and class average.

#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

const int MAX_STUDENTS = 20;

int main(void) {
	// Created array for Max Students
	int scores[MAX_STUDENTS];
	int n;

	// Ask for the lass size
	cout << "Number of students: ";
	cin >> n;
	while (n < 1 || n > MAX_STUDENTS) {
		cout << "Please enter a number from 1 to " << MAX_STUDENTS << ": ";
		cin >> n;
	}

	// Prompts start at 1 but note that array starts at index 0
	for (int i = 0; i < n; i++) {
		cout << "Enter score #" << i + 1 << ": ";
		cin >> scores[i];
	}

	// Search for highest and lowest, then add up total
	int highest = scores[0];
	int lowest = scores[0];
	int total = 0;
	for (int i = 0; i < n; i++) {
		if (scores[i] > highest) {
			highest = scores[i];
		}
		if (scores[i] < lowest) {
			lowest = scores[i];
		}
		total += scores[i];
	}
	double average = (double)total / n;

	// Display to user
	cout << "high = " << highest << " low = " << lowest << " average = " << fixed << setprecision(1) << average << endl;
	return 0;

}