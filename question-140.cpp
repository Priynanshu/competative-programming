#include <bits/stdc++.h>
using namespace std;

bool checkNum(string value) {
    for (char ch : value) {
        if (!isdigit(ch))
            return false;
    }
    return true;
}

bool checkDrink(string drinkName) {
    vector<string> alcohol = {
        "ABSINTH",
        "BEER",
        "BRANDY",
        "CHAMPAGNE",
        "GIN",
        "RUM",
        "SAKE",
        "TEQUILA",
        "VODKA",
        "WHISKEY",
        "WINE"
    };

    for (int i = 0; i < alcohol.size(); i++) {
        if (alcohol[i] == drinkName) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n--) {
        string drinkOrAge;
        cin >> drinkOrAge;

        if (checkNum(drinkOrAge)) {
            int age = stoi(drinkOrAge);

            if (age < 18)
                count++;
        } else {
            if (checkDrink(drinkOrAge))
                count++;
        }
    }

    cout << count << endl;

    return 0;
}