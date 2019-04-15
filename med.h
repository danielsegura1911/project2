#pragma once
char getMedicationTypeFromUser() {
	char medicationType;

	cout << "Enter a medication type: (a)ANTIBIOTICS (b)ANTISEPTICS (c)ANALGESICS (d)ANTIVIRAL (e)ANTIFUNGALS" << endl;
	cin >> medicationType;
	if (medicationType != 'a' && medicationType != 'b' && medicationType != 'c' && medicationType != 'd' && medicationType != 'e') {
		cout << "Invalid choice, try again..." << endl;
		return getMedicationTypeFromUser();
	}

	else {
		return medicationType;
	}
}
