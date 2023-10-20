#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utility.h"

using namespace std;

int part_1(const vector<string> data);
int part_2(const vector<string> data);

// this means i need to substract by 48 to get numerical value of character
string normalize_to_49(string line);
string char_to_string(char *a);

int main(int argc, char const *argv[])
{
    /* code */
    vector<string> data = read_input("./input");

    string a =normalize_to_49("a");
    cout << (int)a[0] << endl;

    // cout << part_1(data) << endl;
    // cout << part_2(data) << endl;

    return 0;
}

string normalize_to_49(string line)
{
    string newLine;

    for (int i = 0; i < line.length(); i++)
    {
        if ((int)line[i] >= 65 && (int)line[i] <= 90)
            newLine += line[i] + 10;
        else
            newLine += line[i] - 48;
    }

    return newLine;
}

int part_1(const vector<string> data)
{

}
int part_2(const vector<string> data)
{

}