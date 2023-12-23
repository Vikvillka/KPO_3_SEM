//#include <iostream>
//#include <locale>
//#include <tchar.h>
//
//#include "FST.h"
//
//using namespace std;
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	setlocale(LC_ALL, "rus");
//
//	FST::FST fst1(
//		(const unsigned char*)"����������",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst1))
//		cout << "������� " << fst1.string << " ����������" << endl;
//	else cout << "������� " << fst1.string << " �� ����������" << endl;
//
//	FST::FST fst2(
//		(const unsigned char*)"��������",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst2))
//		cout << "������� " << fst2.string << " ����������" << endl;
//	else cout << "������� " << fst2.string << " �� ����������" << endl;
//
//	FST::FST fst3(
//		(const unsigned char*)"���������� ��������",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst3))
//		cout << "������� " << fst3.string << " ����������" << endl;
//	else cout << "������� " << fst3.string << " �� ����������" << endl;
//
//	FST::FST fst4(
//		(const unsigned char*)"Bychkovskaya",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst4))
//		cout << "������� " << fst4.string << " ����������" << endl;
//	else cout << "������� " << fst4.string << " �� ����������" << endl;
//
//	FST::FST fst5(
//		(const unsigned char*)"Viktoria",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst5))
//		cout << "������� " << fst5.string << " ����������" << endl;
//	else cout << "������� " << fst5.string << " �� ����������" << endl;
//
//	FST::FST fst6(
//		(const unsigned char*)"Bychkovskaya Viktoria",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst6))
//		cout << "������� " << fst6.string << " ����������" << endl;
//	else cout << "������� " << fst6.string << " �� ����������" << endl;
//
//	FST::FST fst7(
//		(const unsigned char*)"Bychkovskaya Viktoria 2005\n���������� ��������",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst7))
//		cout << "������� " << fst7.string << " ����������" << endl;
//	else cout << "������� " << fst7.string << " �� ����������" << endl;
//
//	FST::FST fst8(
//		(const unsigned char*)"Bychkovskaya.����������",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//
//	if (FST::execute(fst8))
//		cout << "������� " << fst8.string << " ����������" << endl;
//	else cout << "������� " << fst8.string << " �� ����������" << endl;
//
//
//
//	//FST::FST fst11c(
//	//	(const unsigned char*)"Teeeeeeechh",
//	//	8,
//	//	FST::NODE(2, FST::RELATION('r', 1), FST::RELATION('r', 2)),//0
//	//	FST::NODE(2, FST::RELATION('s', 1), FST::RELATION('s', 2)),//1
//	//	FST::NODE(1, FST::RELATION('b', 3)),//2
//	//	FST::NODE(2, FST::RELATION('s', 3), FST::RELATION('s', 4)),//3
//	//	FST::NODE(6, FST::RELATION('c', 2), FST::RELATION('p', 2), FST::RELATION('c', 5), FST::RELATION('p', 5), FST::RELATION('c', 6), FST::RELATION('p', 6)), //4
//	//	FST::NODE(2, FST::RELATION('s', 5), FST::RELATION('s', 6)), //5
//	//	FST::NODE(1, FST::RELATION('e', 7)),//6
//	//	FST::NODE()//7
//	//);
//	//if (FST::execute(fst11c))
//	//	std::cout << fst11c.string << " ����������\n";
//	//else
//	//	std::cout << fst11c.string << " �� ����������\n";
//
//	FST::FST fst9(
//		(const unsigned char*)"Teeeechh",
//		6,
//		FST::NODE(2, FST::RELATION('T', 1), FST::RELATION('T', 2)),//0
//		FST::NODE(2, FST::RELATION('e', 1), FST::RELATION('e', 2)),//1
//		FST::NODE(1, FST::RELATION('c', 3)),
//		FST::NODE(1, FST::RELATION('h', 4)), //4
//		FST::NODE(1, FST::RELATION('h', 5)), //5
//		FST::NODE()
//		
//	);
//
//	if (FST::execute(fst9))
//		cout << "������� " << fst9.string << " ����������" << endl;
//	else cout << "������� " << fst9.string << " �� ����������" << endl;
//
//	FST::FST fst10(
//		(const unsigned char*)"iktor",
//		2,
//		FST::NODE(33, FST::RELATION('B', 0), FST::RELATION('y', 0), FST::RELATION('c', 0), \
//			FST::RELATION('h', 0), FST::RELATION('k', 0), FST::RELATION('o', 0), FST::RELATION('v', 0), \
//			FST::RELATION('s', 0), FST::RELATION('a', 0), FST::RELATION('y', 0), FST::RELATION('V', 0), \
//			FST::RELATION('i', 0), FST::RELATION('t', 0), FST::RELATION('r', 0), FST::RELATION('�', 0), \
//			FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), \
//			FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), \
//			FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), \
//			FST::RELATION('2', 0), FST::RELATION('0', 0), FST::RELATION('5', 0), FST::RELATION('\n', 0), FST::RELATION(' ', 0), FST::RELATION('\0', 0)),
//		FST::NODE()
//	);
//
//	if (FST::execute(fst10))
//		cout << "������� " << fst10.string << " ����������" << endl;
//	else cout << "������� " << fst10.string << " �� ����������" << endl;
//
//	system("pause");
//	return 0;

#include <tchar.h>
#include <iostream>
#include <locale>
#include <cwchar>
#include "FSt.h"

int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");

    
    FST::FST fst91(
        "Tech",
        6,
        FST::NODE(2, FST::RELATION('T', 1)),
        FST::NODE(2, FST::RELATION('e', 1), FST::RELATION('e', 2)),
        FST::NODE(1, FST::RELATION('c', 3)),
        FST::NODE(1, FST::RELATION('h', 4)), 
        FST::NODE(1, FST::RELATION('h', 5)), 
        FST::NODE()

    );

    if (FST::execute(fst91))
        std::cout << "������� " << fst91.string << " ����������";
    else std::cout << "������� " << fst91.string << " �� ����������";
}