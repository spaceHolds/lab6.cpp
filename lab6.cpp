#include "iostream"
#include <string>

using namespace std;

int main()
{
    int N;
    cout << "Enter a natural number: ";
    cin >> N;
    string numstr = to_string(N);
    size_t length = numstr.length() - 1;
    string num2;
    int index = 1;
    num2 += numstr[length];
    while (index < length) {
        num2 += numstr[index];
        index++;
    }
    num2 += numstr[0];
    cout << num2 << endl;

}