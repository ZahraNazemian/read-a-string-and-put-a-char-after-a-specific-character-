#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;

    while (getline(cin, word)) {

        if (word.empty()) {
            break;
        }

        size_t k = word.find('e');

        if (k != string::npos) {
            word.replace(k + 1, 0, ",");
        }

        cout << word << '\n';
    }

    return 0;
}
