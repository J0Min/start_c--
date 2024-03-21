//#include <iostream>
//#include <string>
//using namespace std;
//
//int makeAccount(), inAccount(), outAccount(), allAccount();
//int num; //입력 숫자 1~5
//typedef struct {
//	int account_id;
//	int balance;
//	string name;
//}Account;
//
//Account accArr[100];
//int accCount = 0;
//
//
//int main(void) {
//	while (1) {
//		cout << "-----Menu-----" << endl;
//		cout << "1. 계좌개설" << endl;
//		cout << "2. 입 금" << endl;
//		cout << "3. 출 금" << endl;
//		cout << "4. 계좌정보 전체 출력" << endl;
//		cout << "5. 프로그램 종료" << endl;
//		cout << "선택 : "; cin >> num;
//		cout << endl;
//
//		if (num == 5) break;
//		switch (num) {
//		case 1: makeAccount(); break;
//		case 2: inAccount(); break;
//		case 3: outAccount(); break;
//		case 4: allAccount(); break;
//		}
//	}
//	return 0;
//}
//
//int makeAccount() {
//	int id;
//	string name;
//	int money;
//
//	cout << "[계좌개설]" << endl;
//	cout << "계좌ID : "; cin >> id;
//	cout << "이 름 : "; cin >> name;
//	cout << "입금액 : "; cin >> money;
//	cout << endl;
//
//	accArr[accCount].account_id = id;
//	accArr[accCount].name = name;
//	accArr[accCount].balance = money;
//	accCount++;
//	return 0;
//}
//
//int inAccount() {
//	int id;
//	int money;
//
//	cout << "계좌ID : "; cin >> id;
//	for (int i = 0; i < accCount; i++) {
//		if (accArr[i].account_id == id) {
//			cout << "입금액 : "; cin >> money;
//			cout << "입금 완료"<<endl << endl;
//			accArr[i].balance = money + accArr[i].balance;
//			break;
//		}
//		cout << "일치하는 ID가 없습니다." << endl << endl;
//	}
//	return 0;
//}
//
//int outAccount() {
//	int id;
//	int money;
//
//	cout << "계좌ID : "; cin >> id;
//	for (int i = 0; i < accCount; i++) {
//		if (accArr[i].account_id == id) {
//			cout << "출금액 : "; cin >> money;
//			if (accArr[i].balance >= money) {
//				cout << "출금 완료" << endl << endl;
//				accArr[i].balance = accArr[i].balance - money;
//				break;
//			}
//			else {
//				cout << "잔액 부족" << endl << endl;
//				break;
//			}
//			cout << "일치하는 ID가 없습니다." << endl << endl;
//		}
//	}
//	return 0;
//}
//
//int allAccount() {
//	cout << "[계좌조회]" << endl;
//	for (int i = 0; i < accCount; i++) {
//		cout << "계좌ID : "<< accArr[i].account_id<<endl;
//		cout << "이 름 : " << accArr[i].name << endl;
//		cout << "잔액 : " << accArr[i].balance <<endl;
//		cout << endl;
//	}
//	return 0;
//}