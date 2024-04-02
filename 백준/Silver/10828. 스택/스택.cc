#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	stack<int> s;
	int n;
	string command;
	int num;
	int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		// push
		if (command == "push") {
			cin >> num;
			s.push(num);
		}

		// pop
		else if (command == "pop") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
				s.pop();
			}
		}

		// size
		else if (command == "size") {
			cout << s.size() << endl;
		}

		// empty
		else if (command == "empty") {
			if (s.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}

		// top
		else if (command == "top") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
			}
		}
	}

	return 0;
}