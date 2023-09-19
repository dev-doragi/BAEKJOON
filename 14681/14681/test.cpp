/*사분면 문제
 두개의 정수를 각각 x좌표, y좌표로 입력받아 4분면을 판별해주는 코드*/
#include <stdio.h>
using namespace std;

//int main() {
//
//	int x, y;
//
//	cin >> x >> y;
//
//	if (x < -1000 || x > 1000 || x == 0 || y < -1000 || y > 1000 || y == 0) return 0;
//
//	if (x > 0) {
//		if (y > 0) cout << "1" << endl;
//		else cout << "4" << endl;
//	}
//	else {
//		if (y > 0) cout << "2" << endl;
//		else cout << "3" << endl;
//	}
//
//	return 0;
//}

int main() {

	int x, y; scanf_s("%d %d", &x, &y);
	printf(x > 0 ? (y > 0 ? "1" : "4") : (y > 0 ? "2" : "3"));

	return 0;
}