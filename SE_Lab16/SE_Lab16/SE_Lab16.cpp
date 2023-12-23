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
//		(const unsigned char*)"Бычковская",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst1))
//		cout << "Цепочка " << fst1.string << " распознана" << endl;
//	else cout << "Цепочка " << fst1.string << " не распознана" << endl;
//
//	FST::FST fst2(
//		(const unsigned char*)"Виктория",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst2))
//		cout << "Цепочка " << fst2.string << " распознана" << endl;
//	else cout << "Цепочка " << fst2.string << " не распознана" << endl;
//
//	FST::FST fst3(
//		(const unsigned char*)"Бычковская Виктория",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst3))
//		cout << "Цепочка " << fst3.string << " распознана" << endl;
//	else cout << "Цепочка " << fst3.string << " не распознана" << endl;
//
//	FST::FST fst4(
//		(const unsigned char*)"Bychkovskaya",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst4))
//		cout << "Цепочка " << fst4.string << " распознана" << endl;
//	else cout << "Цепочка " << fst4.string << " не распознана" << endl;
//
//	FST::FST fst5(
//		(const unsigned char*)"Viktoria",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst5))
//		cout << "Цепочка " << fst5.string << " распознана" << endl;
//	else cout << "Цепочка " << fst5.string << " не распознана" << endl;
//
//	FST::FST fst6(
//		(const unsigned char*)"Bychkovskaya Viktoria",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst6))
//		cout << "Цепочка " << fst6.string << " распознана" << endl;
//	else cout << "Цепочка " << fst6.string << " не распознана" << endl;
//
//	FST::FST fst7(
//		(const unsigned char*)"Bychkovskaya Viktoria 2005\nБычковская Виктория",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//	if (FST::execute(fst7))
//		cout << "Цепочка " << fst7.string << " распознана" << endl;
//	else cout << "Цепочка " << fst7.string << " не распознана" << endl;
//
//	FST::FST fst8(
//		(const unsigned char*)"Bychkovskaya.Бычковская",
//		2,
//		CHAIN,
//		FST::NODE()
//	);
//
//
//	if (FST::execute(fst8))
//		cout << "Цепочка " << fst8.string << " распознана" << endl;
//	else cout << "Цепочка " << fst8.string << " не распознана" << endl;
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
//	//	std::cout << fst11c.string << " распознана\n";
//	//else
//	//	std::cout << fst11c.string << " не распознана\n";
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
//		cout << "Цепочка " << fst9.string << " распознана" << endl;
//	else cout << "Цепочка " << fst9.string << " не распознана" << endl;
//
//	FST::FST fst10(
//		(const unsigned char*)"iktor",
//		2,
//		FST::NODE(33, FST::RELATION('B', 0), FST::RELATION('y', 0), FST::RELATION('c', 0), \
//			FST::RELATION('h', 0), FST::RELATION('k', 0), FST::RELATION('o', 0), FST::RELATION('v', 0), \
//			FST::RELATION('s', 0), FST::RELATION('a', 0), FST::RELATION('y', 0), FST::RELATION('V', 0), \
//			FST::RELATION('i', 0), FST::RELATION('t', 0), FST::RELATION('r', 0), FST::RELATION('Б', 0), \
//			FST::RELATION('ы', 0), FST::RELATION('ч', 0), FST::RELATION('к', 0), FST::RELATION('о', 0), \
//			FST::RELATION('в', 0), FST::RELATION('с', 0), FST::RELATION('а', 0), FST::RELATION('я', 0), \
//			FST::RELATION('В', 0), FST::RELATION('и', 0), FST::RELATION('т', 0), FST::RELATION('р', 0), \
//			FST::RELATION('2', 0), FST::RELATION('0', 0), FST::RELATION('5', 0), FST::RELATION('\n', 0), FST::RELATION(' ', 0), FST::RELATION('\0', 0)),
//		FST::NODE()
//	);
//
//	if (FST::execute(fst10))
//		cout << "Цепочка " << fst10.string << " распознана" << endl;
//	else cout << "Цепочка " << fst10.string << " не распознана" << endl;
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
        std::cout << "Цепочка " << fst91.string << " распознана";
    else std::cout << "Цепочка " << fst91.string << " не распознана";
}