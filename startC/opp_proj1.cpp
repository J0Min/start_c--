//#include <iostream>
//#include <string>
//using namespace std;
//
//int makeAccount(), inAccount(), outAccount(), allAccount();
//int num; //�Է� ���� 1~5
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
//		cout << "1. ���°���" << endl;
//		cout << "2. �� ��" << endl;
//		cout << "3. �� ��" << endl;
//		cout << "4. �������� ��ü ���" << endl;
//		cout << "5. ���α׷� ����" << endl;
//		cout << "���� : "; cin >> num;
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
//	cout << "[���°���]" << endl;
//	cout << "����ID : "; cin >> id;
//	cout << "�� �� : "; cin >> name;
//	cout << "�Աݾ� : "; cin >> money;
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
//	cout << "����ID : "; cin >> id;
//	for (int i = 0; i < accCount; i++) {
//		if (accArr[i].account_id == id) {
//			cout << "�Աݾ� : "; cin >> money;
//			cout << "�Ա� �Ϸ�"<<endl << endl;
//			accArr[i].balance = money + accArr[i].balance;
//			break;
//		}
//		cout << "��ġ�ϴ� ID�� �����ϴ�." << endl << endl;
//	}
//	return 0;
//}
//
//int outAccount() {
//	int id;
//	int money;
//
//	cout << "����ID : "; cin >> id;
//	for (int i = 0; i < accCount; i++) {
//		if (accArr[i].account_id == id) {
//			cout << "��ݾ� : "; cin >> money;
//			if (accArr[i].balance >= money) {
//				cout << "��� �Ϸ�" << endl << endl;
//				accArr[i].balance = accArr[i].balance - money;
//				break;
//			}
//			else {
//				cout << "�ܾ� ����" << endl << endl;
//				break;
//			}
//			cout << "��ġ�ϴ� ID�� �����ϴ�." << endl << endl;
//		}
//	}
//	return 0;
//}
//
//int allAccount() {
//	cout << "[������ȸ]" << endl;
//	for (int i = 0; i < accCount; i++) {
//		cout << "����ID : "<< accArr[i].account_id<<endl;
//		cout << "�� �� : " << accArr[i].name << endl;
//		cout << "�ܾ� : " << accArr[i].balance <<endl;
//		cout << endl;
//	}
//	return 0;
//}