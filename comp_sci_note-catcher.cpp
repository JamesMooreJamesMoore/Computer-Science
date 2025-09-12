#include <iostream>
#include <vector>

using namespace std;

int unit_1();

int unit_2();

int main() {
int input = 0;
char yorn = 'x';
    cout << "Welcome to your organized notes, which unit would you like to view?" << endl << "1 - Unit 1" <<  endl << "2 - Unit 2" << endl;
    cin >> input;
    if (input == 1) {
        unit_1();
    } else if (input == 2) {
        unit_2();
    }
    while (yorn != 'n') {
        cout << "would you like to view a different unit?" << endl;
        cin >> yorn;
        if (yorn == 'y') {
            cout << "What unit would you like to view?" << endl;
            cin >> input;
                if (input == 1) { 
                unit_1();
                } else if (input == 2) {
                unit_2();
            }
        } else if (yorn == 'n') {
            cout << "Good Luck!" << endl;
        }
    }
}

int unit_1() {
    vector<vector<string>>unit_1_notes = {{"1.1", "-", "-"}, {"1.7", "- Computer programs implement an algorithm", 
        "- An anlgorithm is a sequence of steps that is unambiguous, executable, and terminiating", 
        "- Psuedocode is an informal presentation of algorithm that can be translated into real code (A sequence of precise steps formulated in English).",
        "- An operator is a symbol that tells the computer to perform a specific action on one or more values. ", "- "}};
    int num = 1;
    char yorn = 'x';
    int input = 0;
    cout << "Would you like to view all unit 1 notes? (y/n)" << endl;
    cin >> yorn;
    if (yorn == 'y') {
        for (auto v : unit_1_notes) {
            for (auto i : v)
                cout << i << endl;
        }
    } else if (yorn == 'n') {
        cout << "What lesson are you looking for?" << endl;
        for (auto i : unit_1_notes) {
            cout << num << " - " << i[0] << endl;
            num = num + 1;
        }
        cin >> input;
        for (auto i : unit_1_notes[(input - 1)]) {
                cout << i << endl;
        }
    }
    yorn = 'x';
    while (yorn != 'n') {
        num = 1;
        cout << "Would you like to view any other lessons from this unit? (y/n)" << endl;
        cin >> yorn;
        if (yorn == 'y') {
            cout << "What lesson are you looking for?" << endl;
            for (auto i : unit_1_notes) {
                cout << num << " - " << i[0] << endl;
                num = num + 1;
            }
            cin >> input;
            for (auto i : unit_1_notes[(input - 1)]) {
                    cout << i << endl;
            }
        } else if (yorn == 'n') {
            break;
        }
    }
    return 0;
}

int unit_2() {
    vector<vector<string>>unit_2_notes = {{"2.1", "-", "-"}, {"2.2", "-", "-"},  {"2.3", "-", "-"}, {"2.5", "-", "-"}, {"2.4", "-", "-"}};
    int num = 1;
    char yorn = 'x';
    int input = 0;
    cout << "Would you like to view all unit 2 notes? (y/n)" << endl;
    cin >> yorn;
    if (yorn == 'y') {
        for (auto v : unit_2_notes) {
            for (auto i : v) {
                cout << i << endl;
            }
        }
    } else if (yorn == 'n') {
        cout << "What lesson are you looking for?" << endl;
        for (auto i : unit_2_notes) {
            cout << num << " - " << i[0] << endl;
            num = num + 1;
        }
        cin >> input;
        for (auto i : unit_2_notes[(input - 1)]) {
                cout << i << endl;
        }
    }
    yorn = 'x';
    while (yorn != 'n') {
        num = 1;
        cout << "Would you like to view any other lessons from this unit? (y/n)" << endl;
        cin >> yorn;
        if (yorn == 'y') {
            cout << "What lesson are you looking for?" << endl;
            for (auto i : unit_2_notes) {
                cout << num << " - " << i[0] << endl;
                num = num + 1;
            }
            cin >> input;
            for (auto i : unit_2_notes[(input - 1)]) {
                    cout << i << endl;
            }
        } else if (yorn == 'n') {
            break;
        }
    }
    return 0;
}

