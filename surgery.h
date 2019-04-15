#pragma once
char getSurgeryTypeFromUser() {
	char surgeryType;

	cout << "Enter a surgery type: (a)HEART (b)APPENDIX (c)EYE (d)LIVER (e)BONE" << endl;
	cin >> surgeryType;
	if (surgeryType != 'a' && surgeryType != 'b' && surgeryType != 'c'&& surgeryType != 'd' && surgeryType != 'e') {
		cout << "Invalid choice, try again..." << endl;
		return getSurgeryTypeFromUser();
	}
	else {
		return surgeryType;
	}
}
