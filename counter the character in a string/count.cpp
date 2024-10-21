#include<iostream>
#include<string>
using namespace std;

unsigned int strCount(const std::string& word, char letter) {
	int x=0;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == letter)
			x++;

	}
	return x;     //return std::count(word.cbegin(), word.cend(), letter);

}
int main()
{
	cout << strCount("hello", 'l');
	return 0;
}