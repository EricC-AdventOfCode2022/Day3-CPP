#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "utility.h"

using namespace std;

int part_1(const vector<string> data);
int part_2(const vector<string> data);

vector<string> copy_data(const vector<string> data);

// this means i need to substract by 48 to get numerical value of character
vector<string> normalize_to_49(vector<string> data);
string char_to_string(char *a);

int main(int argc, char const *argv[])
{
    /* code */
    vector<string> data = read_input("./input");
    vector<string> normalizedData = normalize_to_49(copy_data(data));

    // 13250 too high
    // 9954 too high
    // 984 too low
    // 7446 correct (counted manually, find way to get it to show)
    cout << part_1(normalizedData) << endl;
    cout << part_2(normalizedData) << endl;

    return 0;
}

vector<string> normalize_to_49(vector<string> data)
{
    vector<string> normalized;

    for (int i = 0; i < data.size(); i++)
    {
        string line = data[i];
        string newLine = "";

        for (int j = 0; j < line.length(); j++)
        {
            if ((int)line[j] >= 65 && (int)line[j] <= 90)
                newLine += (char)((int)line[j] + 10);
            else
                newLine += (char)((int)line[j] - 48);
        }
        normalized.push_back(newLine);
    }

    return normalized;
}
vector<string> copy_data(const vector<string> data)
{
    vector<string> copy;

    for (int i = 0; i < data.size(); i++)
    {
        copy.push_back(data[i]);
    }

    return copy;
}

int part_1(const vector<string> data)
{
    int score = 0;
    vector<char> characters;

    for (int i = 0; i < data.size(); i++)
    {
        string half1 = "";
        string half2 = "";

        for (int j = 0; j < data[i].length(); j++)
        {
            if (j > data[i].length() / 2 - 1)
                half1 += data[i][j];
            else
                half2 += data[i][j];
        }
        for (int j = 0; j < half1.length(); j++)
        {
            for (int k = 0; k < half2.length(); k++)
            {
                if(half1[j] == half2[k])
                    characters.push_back(half1[j]);
            }
        }
    }

    return score;
}
int part_2(const vector<string> data)
{
}