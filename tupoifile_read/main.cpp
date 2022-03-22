#include <iostream>;
#include <vector>;
#include <fstream>;
#include <string>;

#include <conio.h>;
#include <Windows.h>;

using namespace std;

int main() {
	vector<string> vec;
	string str;

	fstream read;
	read.open("tupoifile.txt");
	for (; !read.eof();) {
		read >> str;
		str[0] = toupper(str[0]);
		vec.push_back(str);
		cout << str;
	}

	read.close();

	//int x = 0;
	//int y = 0;
	//int step = 10;
	//char c;

	//SetCursorPos(x, y);
	//do {
	//	c = _getch();
	//	switch (c) {
	//	case 115:SetCursorPos(x -=step, y);//left
	//	case 77:SetCursorPos(x += step, y);//right
	//	case 72:SetCursorPos(x, y -=step);//up
	//	case 80:SetCursorPos(x, y += step);//down
	//	}
	//} while (c != 27);//esc

	ofstream write;
	write.open("tupoifile.txt");

	for (int i = 0; i < (int)vec.size(); i++) {
		//if (i != 0)
			//write << " 4 ";
		write << vec[i];
	}

	write.close();

	return 0;
}