#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {

	string str1, str2;
	int cnt = 0;
	cin >> str1 >> str2;

	int strCnt1[26] = { 0 };
	int strCnt2[26] = { 0 };

	for (char c : str1) {
		if (isalpha(c)) strCnt1[tolower(c) - 'a']++;
	}

	for (char c : str2) {
		if (isalpha(c)) strCnt2[tolower(c) - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cnt += abs(strCnt1[i] - strCnt2[i]);
	}

	cout << cnt << endl;

	return 0;
}