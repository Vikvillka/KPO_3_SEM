//#pragma once
//
//#define CHAIN FST::NODE(35, FST::RELATION('B', 0), FST::RELATION('y', 0), FST::RELATION('c', 0),\
//			FST::RELATION('h', 0), FST::RELATION('k', 0), FST::RELATION('o', 0), FST::RELATION('v', 0),\
//			FST::RELATION('s', 0), FST::RELATION('a', 0), FST::RELATION('y', 0), FST::RELATION('V', 0),\
//			FST::RELATION('i', 0), FST::RELATION('t', 0), FST::RELATION('r', 0), FST::RELATION('�', 0),\
//			FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0),\
//			FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0),\
//			FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0), FST::RELATION('�', 0),\
//			FST::RELATION('2', 0), FST::RELATION('0', 0), FST::RELATION('5', 0),FST::RELATION('\n', 0),FST::RELATION(' ', 0), FST::RELATION('e', 0), FST::RELATION('T', 0), FST::RELATION('\0', 1))
//
//namespace FST
//{
//	struct RELATION // �����:������ -> ������� ����� ��������� ��
//	{
//		unsigned char symbol; // ������ ��������
//		short nnode;     // ����� ������� �������
//		RELATION(
//			unsigned char c = 0x00, // ������ ��������
//			short ns = NULL  // ����� ���������
//		);
//	};
//
//	struct NODE   // ������� ����� ���������
//	{
//		short n_relation;  // ���������� ����������� �����
//		RELATION* relations;  // ����������� �����
//		NODE();
//		NODE(
//			short n,  // ��������� ����������� �����
//			RELATION rel, ...  // ������ �����
//		);
//	};
//
//	struct FST  // ������������������� �������� �������
//	{
//		const unsigned char* string; // ������� (������, ���������� 0x00)
//		short position;  // ������� ������� � �������
//		short nstates;   // ���������� ��������� ��������
//		NODE* nodes;     // ���� ���������: [0] - ��������� ��������� [nstate-1] - �������� 
//		short* rstates;  // ��������� ��������� �������� �� ����� �������
//		FST(
//			const unsigned char* s,  // ������� (������, ���������� 0x00)
//			short ns,  //  ���������� ��������� ��������
//			NODE n, ...  // ������ ��������� (���� ���������)
//		);
//	};
//
//	bool execute(  // ��������� ������������� �������
//		FST& fst   // ������������������� �������� ��������
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