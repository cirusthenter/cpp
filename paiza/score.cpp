#include <iostream>

using namespace std;

int main()
{
	int num_student, border_score;
	
	cin >> num_student >> border_score;
	for (int i = 1; i <= num_student; i++) {
		int score;
		int exam_score, absence_cnt;

		cin >> exam_score >> absence_cnt;	
		score = exam_score - absence_cnt * 5;
		if (score < 0) {
			score = 0;
		}
		if (score >= border_score) {
			cout << i << endl;
		}
	}

	return 0;
}
