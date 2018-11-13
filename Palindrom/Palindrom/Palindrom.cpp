#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPolindromFor(string word)
{
	string backWord;
	int index = 0;

	for(int i = word.size()-1; i >=0; i--)
	{
		backWord += word[i];
	}

	if(word == backWord)
	{
		return true;
	}
	return false;
}

bool isPolindromFunc(string word) 
{
	string backWord = word;
	reverse(word.begin(), word.end());

	if (word == backWord)
	{
		return true;
	}
	return false;
}

vector<string> isPolindromFilter(vector<string> words,int length) 
{
	vector<string> result;
	for (const auto str : words) 
	{
		if (isPolindromFunc(str) && str.size() >= length) {
			result.push_back(str);
		}
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	string word;
	cout << "Введите слово\n";
	cin >> word;

	cout<<"Строка полиндром:"<<isPolindromFor(word)<<"\n";
	cout << "Строка полиндром:" << isPolindromFunc(word) << "\n";

	vector<string> result = isPolindromFilter(vector<string>{"weew", "bro", "code"},4);

	cout << "\nisPolindromFilter results:";

	for (auto str : result) 
	{
		cout << str<<", ";
	}
}




