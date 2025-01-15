#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;

    string result = "";
    for (int i = 0; i < num1.size(); ++i) {
        result += (num1[i] != num2[i]) ? '1' : '0';
    }

    cout << result << endl;

    return 0;
}