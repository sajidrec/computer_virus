#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    fstream file;

    long long int i, limit;
    string str, msg = "";

    cout << "Enter how many files to generate give negative value if you want infinite : ";

    cin >> limit;

    cout << endl;

    cout << "Enter any message you wanna give in one line (default message is Boom) : ";

    cin.ignore();
    getline(cin, msg);

    if (msg == "")
    {
        msg = "Boom";
    }

    cout << endl;

    for (i = 0; i < limit || limit < 0; i++)
    {
        str = to_string(i) + ".txt";
        file.open(str, ios::out);
        file << msg;
        file.close();
    }

    return 0;
}