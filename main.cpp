#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utility.h"

using namespace std;

int part_1(const vector<string> data);
int part_2(const vector<string> data);
string reverse_capitalization(string line);
string char_to_string(char *a);

int main(int argc, char const *argv[])
{
    /* code */
    vector<string> data = read_input("./input");

    cout << data[0] << endl;
    cout << endl;

    // cout << part_1(data) << endl;
    // cout << part_2(data) << endl;

    return 0;
}

string reverse_capitalization(string line)
{
    char newLine[line.length() + 1];

    for (int i = 0; i < line.length(); i++)
    {
        if ((int)line[i] >= 65 || (int)line[i] <= 90)
        {
            newLine[i] += line[i] + 32;
        }
        else
        {
            newLine[i] -= line[i] - 32;
        }
    }

    newLine[sizeof(newLine) / sizeof(char) - 1] = '\0';

    return char_to_string(newLine);
}

string char_to_string(char *a)
{
    string s = a;
    return s;
}

int part_1(const vector<string> data)
{

}
int part_2(const vector<string> data)
{

}