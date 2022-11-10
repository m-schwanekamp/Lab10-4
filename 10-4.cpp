//Lab 10-4
#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b);
void display(vector<int> combined);
int main(void) {
	vector < int > a = { 1,4,9,16 };
	vector < int > b = { 9,7,4,9,11 };

	display(append(a, b));

}

vector<int> append(vector<int> a, vector<int> b) {
	for (int i = 0; i < b.size(); i++) {
		a.push_back(b[i]);
    }
	return a;
}
void display(vector<int> combined) {
	for (int i = 0; i < combined.size(); i++) {
		cout << combined[i] << " ";
	}
}
