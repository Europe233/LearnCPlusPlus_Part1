// C++ Primer ���İ� 66ҳ����
/*
#include<iostream>
#include<string>
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
int main() {
	Sales_data data1, data2;
	double price;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold*price;
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold*price;
	if (data1.bookNo == data2.bookNo) {
		cout << data1.bookNo << "  " << data1.units_sold + data2.units_sold << "  " << data1.revenue + data2.revenue << endl;
		system("pause");
		return 0;
	}
	else {
		cerr << "Error!" << endl;
		system("pause");
		return -1;
	}
}
*/

// C++ Primer ���İ� 68ҳ��ϰ
/*
#include<iostream>
#include "Sales_data.h"
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
int main() {
	Sales_data data1, data2;
	double price;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold*price;
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold*price;
	if (data1.bookNo == data2.bookNo) {
		cout << data1.bookNo << "  " << data1.units_sold + data2.units_sold << "  " << data1.revenue + data2.revenue << endl;
		system("pause");
		return 0;
	}
	else {
		cerr << "Error!" << endl;
		system("pause");
		return -1;
	}
}
*/

// 77ҳ����
/*
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string str;
	cin >> str;
	cout << str << endl;
	system("pause");
	return 0;
}
*/

//78ҳ����
/*
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string str;
	while (cin >> str)cout << str << endl;
	system("pause");
	return 0;
}
*/

//78ҳ����
/*
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string str;
	while (getline(cin,str)) {
		cout << str << endl;
	}
	system("pause");
	return 0;
}
*/

//79ҳ����,�����һ������ֻ����ǿ���
/*
#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string str;
	while (getline(cin, str))
		if (!str.empty())cout << str << endl;
	system("pause");
	return 0;
}
*/

//81ҳ��ϰ3.5:ƴ���ַ���
/*
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	//bigStr1:ƴ��ʱ�ַ���֮�䲻�ӿո�bigStr2��֮��ӿո�
	string str,bigStr1,bigStr2;
	getline(cin, str);
	bigStr1 = str; bigStr2 = str;
	while (getline(cin, str)) {
		bigStr1 += str;
		bigStr2 += " " + str;
	}
	cout << bigStr1 << endl;
	cout << bigStr2 << endl;
	system("pause");
	return 0;
}
*/

//83ҳ����
/*
#include<iostream>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() 
{
	//���string������ÿ���ַ�
	string s("Hello World	!!!");
	for (char c : s) {
		cout << c << endl;
	}
	system("pause");
	return 0;

	//ͳ��string����������Ÿ���,����Сдת��Ϊ��д
	string s("	Hello, 4World!!!");
	decltype(s.size()) punct_cnt=0;
	for (char& c : s) {
		if (ispunct(c))punct_cnt++;
		c=toupper(c);
	}
	cout << punct_cnt << endl;
	cout << s << endl;
	system("pause");
	return 0;
}
*/

//86ҳ��ϰ3.6
/*
#include<iostream>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	//method 1:�±�
	string str("	Hello World!!!2018!!!");
	cout << str << endl;
	for (decltype(str.size()) index = 0; index < str.size(); index++)
		str[index] = 'X';
	cout << str << endl;
	system("pause");
	return 0;

	//method 2:����ÿ���ַ�
	string str("	Hello World!!!2018!!!");
	cout << str << endl;
	for (char& c : str)
		c = 'X';
	cout << str << endl;
	system("pause");
	return 0;
	

	//86ҳ���һ���ϻ���֤
	const string str("Hello world!!");
	decltype(str.size())cnt = 0;
	for (auto &c : str) {
		if (c == 'H')cnt++;
	}
	cout << cnt << endl;
	system("pause");
	return 0;
}
*/

//93ҳ�����Լ�д��
/*
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<int> ivec,gradevec(11);
	int grade,index;
	while (cin >> grade)ivec.push_back(grade);
	for (auto c : ivec) {
		index = (c - c % 10) / 10;
		gradevec[index]++;
	}
	for (auto c : gradevec)
		cout << c<<" ";
	cout << endl;
	system("pause");
	return 0;
}
*/

//93ҳ�������ϵĳ����֣����ҵĳ������ࡢ�򵥣����Ҹ���ȫ
/*
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<unsigned int> score(11,0) ;
	unsigned grade;
	while (cin >> grade)
		if (grade <= 100)      //����±��Ƿ����Խ��
			score[grade / 10]++;                 //���
	for (auto c : score)cout << c << "  ";
	cout << endl;
	system("pause");
	return 0;
}
*/

//94ҳ��ϰ3.17
/*
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<string> strVec;
	string word;
	while (cin >> word)strVec.push_back(word);
	for (auto & w : strVec)
		for (auto &c : w)
			c = toupper(c);
	for (auto w : strVec)cout << w << endl;
	system("pause");
	return 0;
}
*/

//99ҳ��ϰ3.22:����ı���������һ�θ�Ϊ��д
/*
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
	string str1("The first paragraph. "), str2("There are two paragraphs."), str3, str4("The seconde paragraph.");
	vector<string> text{str1,str2,str3,str4};
	for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {//����cbegin��cend����ΪҪ������
		for (auto &c : *it)if (!isspace(c))c = toupper(c);
	}
	for (auto it = text.cbegin(); it != text.cend(); it++) {//ֻ����������cbegin��cend
		if (!it->empty())cout << *it;
		else cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
*/

//94ҳ����ϰ3.20:��������������������
/*
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<int> ivec;
	int number;
	while (cin >> number)ivec.push_back(number);
	auto it = ivec.cbegin();
	for (; it != ivec.cend() && (it + 1) != ivec.cend(); it += 2) {
		cout << *it + *(it + 1) << endl;
	}
	if (it != ivec.cend())cout << "There is a number left:" << *it << endl;
	system("pause");
	return 0;
}
*/
//94ҳ����ϰ3.20:����ͷ��ʼ����������������
/*
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<int> ivec;
	int number;
	while (cin >> number)ivec.push_back(number);
	if (ivec.empty()) {
		cout << "Empty!" << endl;
		return -1;
	}
	auto it1 = ivec.cbegin();auto it2 = ivec.cend() - 1;
	while (it1< it2) {
		cout << *it1 + *it2 << endl;
		it1++; it2--;
	}
	if (it1 == it2)cout << "A number left: " << *it1 << endl;
	system("pause");
	return 0;
}
*/

//108ҳ��ϰ3.35��ʹһ��string����Ԫ��ȫ����Ϊ�մ�
/*
#include<iostream>
#include<string>
#include<iterator>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;
int main()
{
	////range for���ʵ��
	//string arr[] = {"string1","string2","Hello","World"};
	//for (auto &str : arr)str = "";
	//for (auto str : arr)if (str.empty())cout << "Empty" << endl;
	//system("pause");
	//return 0;

	//ָ��ʵ��
	string arr[] = { "string1","string2","Hello","World" };
	for (auto p = begin(arr); p != end(arr); p++)
		*p = "";
	for (auto str : arr)if (str.empty())cout << "Empty" << endl;
	system("pause");
	return 0;
}
*/

//110ҳ����ϰ3.37�������в���
/*
#include<iostream>
#include<string>
#include<iterator>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	const char ca[] = {'h','e','l','l','o','\0','\0','c'}; //"hello";
	const char *cp = ca;
	//while (*cp) {
	//	cout << *cp << endl;
	//	cp++;
	//}
	int cnt = 0;
	for (auto c : ca) {
		if (c == '\0')++cnt;
		cout << c ;
	}
	cout << cnt << endl;
	system("pause");
	return 0;
}
*/

//112ҳ��3.41
/*
#include<iterator>
#include<vector>
#include<iostream>
using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int> v(begin(arr),end(arr));
	for (auto i : v)
		cout << i << endl;
	return 0;
}
*/
//112ҳ��3.42
/*
#include<iterator>
#include<vector>
#include<iostream>
using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;
int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	int arr[9];
	for (unsigned i = 0; i < v.size(); i++)
		*(arr + i) = v[i];
	for (auto i : arr)cout << i << endl;
	return 0;
}
*/

// ����ѧϰ�ĳ���������������ӳ���
/*
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
int main()
{
	//// ��ά�����ʼ����113ҳ����
	//int arr[3][4] = { {1},{2,3} };
	//for (auto &row : arr) {
	//	for (auto cow : row)
	//		cout << cow << "   ";
	//	cout << endl;
	//}
	//system("pause");
	//return 0;

	//// ��ά�����ʼ����114ҳ����
	//constexpr size_t rowCnt = 3, colCnt = 4;
	//int iarr[rowCnt][colCnt];
	//for (size_t i = 0; i != rowCnt; ++i)
	//	for (size_t j = 0; j != colCnt; ++j)
	//		iarr[i][j] = colCnt * i + j + 1;
	//for (auto &row : iarr) {
	//	for (auto col : row)cout << col << "  ";
	//	cout << endl;
	//}
	//system("pause");
	//return 0;

	//// һά��������ú�ָ��
	//int iarr[5] = { 1,2,3,4,5 };
	//int(&r)[5] = iarr;
	//int(*p)[5] = &iarr;
	//for (auto & c : iarr)c = c * 2;  //��һ��ǳ���Ҫ��ע��cһ��Ҫ�����ã������޷��ı�ԭ�����ֵ!!
	//for (auto element : (*p))cout << element << endl;
	//system("pause");
	//return 0;

	////��ά�����ָ�룺
	//int iarr[3][4] = {};
	//int(*p)[3][4] = &iarr;
	//(*p)[1][2] = 1;       //���ڽ����÷�*���ȼ������ر�ߣ�һ��Ҫ����������������������
	//for (auto &row : iarr) {
	//	for (auto col : row)cout << col << "  ";
	//	cout << endl;
	//}
	//system("pause");
	//return 0;

	// ��begin��end����������ά����:115ҳ����
	int iarr[3][4] = {};
	int cnt = 1;
	for (auto pRow = begin(iarr); pRow != end(iarr); ++pRow) {
		for (auto pCol = begin(*pRow); pCol != end(*pRow); ++pCol) {
			*pCol = cnt;
			++cnt;
		}
	}
	for (auto &row : iarr) {
		for (auto col : row)cout << col << "  ";
		cout << endl;
	}
	system("pause");
	return 0;
}
*/


#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
int main()
{
	////ʹ�ú��õ�����������������ֱ��������һ������
	//vector<int> v = {0,1,2,3,4,5,6,7,8,9,-1,10,20};
	//auto pbeg = v.begin();
	//while (pbeg != v.end() && *pbeg >= 0)cout << *pbeg++ << endl;
	//system("pause");
	//return 0;

	////135ҳ��ϰ4.21��ʹ�������������vector�е��������������
	//vector<int> v = {-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9,10};
	//for (auto &c : v)
	//	cout << ((c%2)?(c*=2):c) << endl;   //��һ����ģ�c*=2�Ǹ�ֵ��䣬����������Ķ�������ֵ
	//	//�����������������д�ģ���������ˣ���vector���Ԫ�ز��ᷭ��
	//	//cout << ((c%2)?c*2:c) << endl;
	//for (const auto &c : v)cout << c << "  ";
	//system("pause");
	//return 0;

	//���ÿһ���������͵Ĵ�С
	cout << "int  " << sizeof(int) << endl;
	cout << "short  " << sizeof(short) << endl;
	cout << "int*  " << sizeof(int*) << endl;
	cout << "float  " << sizeof(float) << endl;
	cout << "double  " << sizeof(double) << endl;
	cout << "double*  " << sizeof(double) << endl;
	cout << "char  " << sizeof(char) << endl;
	cout << "char*  " << sizeof(char*) << endl;
	int ia[3] = { 1,2,3 };
	cout << sizeof(ia) << "   " << sizeof(ia) / sizeof(ia[0]) << endl;
	system("pause");
	return 0;
}