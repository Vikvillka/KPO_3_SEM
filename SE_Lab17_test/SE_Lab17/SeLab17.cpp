#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{

    argc = 1;
    argv[0] = (_TCHAR*)L"-in:D:\\3_SEM_LABS\\KPO\\SE_Lab17_test\\Debug\\in.txt";

    setlocale(LC_ALL, "Rus");

    Log::LOG log = Log::INITLOG;
    Out::OUT out = Out::INITOUT;
    try
    {
        Parm::PARM parm = Parm::getparm(argc, argv);

        log = Log::getlog(parm.log);
        out = Out::getOut(parm.out);

        Log::WriteLog(log);
        Log::WriteParm(log, parm);
        In::IN in = In::getin(parm.in);
        Log:WriteIn(log, in);
        Out::WriteOut(out, in);

        LT::LexTable lexTable;
        IT::IdTable	idTable;

        LA::LexicalAnalyzer(in, lexTable, idTable);

        lexTable.PrintLexTable(L"TableOfLexems.txt");
        idTable.PrintIdTable(L"TableOfIdentificators.txt");

        LT::Delete(lexTable);
        IT::Delete(idTable);
        Log::Close(log);
        Out::Close(out);
    }
    catch (Error::ERROR e)
    {
        Log::WriteError(log, e);
        Out::WriteError(out, e);
    }

    return 0;
}
