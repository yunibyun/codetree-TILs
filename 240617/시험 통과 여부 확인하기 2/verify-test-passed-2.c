#include <stdio.h>

int main() {

	int n;
    scanf("%d", &n);

	// 통과한 사람의 수를 나타내는 변수를 초기화
	int pass_people = 0;

	// 총 사람은 n명만큼이므로 (행의 갯수가 n개)
	for (int i = 0; i < n; i++){
		// sum이랑 arr를 굳이 for 문 안에 선언하는 이유는 무엇일까?
		// 바깥에 선언할 경우랑 뭐가 다른거지?
		int arr[4];
		// 총 합을 저장할 변수 sum 선언, 값은 0으로 항상 초기화
		int sum = 0;

		// 4개의 정수를 입력받아서 배열에 저장한다
		for (int j = 0; j < 4; j++){
			scanf("%d", &arr[j]);
		}

		// 4과목의 정수의 합을 구한다
		for (int j = 0; j < 4; j++){
			sum += arr[j];
		}

		// 평균을 구한다
		double avg = (double) sum / 4;

		//출력
		if (avg >= 60){
			printf("pass\n");
			pass_people++;
		} else {
			printf("fail\n");
		}
	}

	// 시험을 통과한 사람의 총 수를 출력한다
	printf("%d", pass_people);
	return 0;
}