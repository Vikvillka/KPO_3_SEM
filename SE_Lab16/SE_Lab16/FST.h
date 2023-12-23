//#pragma once
//
//#define CHAIN FST::NODE(35, FST::RELATION('B', 0), FST::RELATION('y', 0), FST::RELATION('c', 0),\
//			FST::RELATION('h', 0), FST::RELATION('k', 0), FST::RELATION('o', 0), FST::RELATION('v', 0),\
//			FST::RELATION('s', 0), FST::RELATION('a', 0), FST::RELATION('y', 0), FST::RELATION('V', 0),\
//			FST::RELATION('i', 0), FST::RELATION('t', 0), FST::RELATION('r', 0), FST::RELATION('Б', 0),\
//			FST::RELATION('ы', 0), FST::RELATION('ч', 0), FST::RELATION('к', 0), FST::RELATION('о', 0),\
//			FST::RELATION('в', 0), FST::RELATION('с', 0), FST::RELATION('а', 0), FST::RELATION('я', 0),\
//			FST::RELATION('В', 0), FST::RELATION('и', 0), FST::RELATION('т', 0), FST::RELATION('р', 0),\
//			FST::RELATION('2', 0), FST::RELATION('0', 0), FST::RELATION('5', 0),FST::RELATION('\n', 0),FST::RELATION(' ', 0), FST::RELATION('e', 0), FST::RELATION('T', 0), FST::RELATION('\0', 1))
//
//namespace FST
//{
//	struct RELATION // ребро:символ -> вершина графа переходов КА
//	{
//		unsigned char symbol; // символ перехода
//		short nnode;     // номер смежной вершины
//		RELATION(
//			unsigned char c = 0x00, // символ перехода
//			short ns = NULL  // новое состояние
//		);
//	};
//
//	struct NODE   // вершина графа переходов
//	{
//		short n_relation;  // количество инцидентных ребер
//		RELATION* relations;  // инцидентные ребра
//		NODE();
//		NODE(
//			short n,  // количесво инцидентных ребер
//			RELATION rel, ...  // список ребер
//		);
//	};
//
//	struct FST  // недетерминированный конечный автомат
//	{
//		const unsigned char* string; // цепочка (строка, завершатся 0x00)
//		short position;  // текущая позиция в цепочке
//		short nstates;   // количество состояний автомата
//		NODE* nodes;     // граф переходов: [0] - начальное состояние [nstate-1] - конечное 
//		short* rstates;  // возможные состояния автомата на даной позиции
//		FST(
//			const unsigned char* s,  // цепочка (строка, завершатся 0x00)
//			short ns,  //  количество состояние автомата
//			NODE n, ...  // список состояний (граф переходов)
//		);
//	};
//
//	bool execute(  // выполнить распознавание цепочки
//		FST& fst   // недетерминированный конечный авмтомат
//	);
//};
#pragma once
#include <iostream>

namespace FST
{
    struct RELATION
    {
        char symbol;
        short nnode;
        RELATION(unsigned char c = 0x00, short ns = NULL);
    };

    struct NODE
    {
        short n_relation;
        RELATION* relations;
        NODE();
        NODE(short n, RELATION rel, ...);
    };

    struct FST {
        const char* string;
        short position;
        short nstates;
        NODE* nodes;
        short* rstates;
        FST(const char* s, short ns, NODE n, ...);
    };

    bool execute(FST& fst);
}