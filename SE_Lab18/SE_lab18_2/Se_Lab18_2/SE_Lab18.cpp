#include "stdafx.h"

#include "MFST.h"
#include "GRB.h"


int _tmain(int argc, _TCHAR* argv[])
{

    //argc = 1;
    //argv[0] = (_TCHAR*)L"-in:D:\\projects\\KpoProject\\Debug\\in.txt";

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
        LA::Tables tabel;

        LA::LexicalAnalyzer(in, tabel.LexTable, tabel.idTable);
        tabel.LexTable.PrintLexTable(L"TableOfLexems.txt");
        tabel.idTable.PrintIdTable(L"TableOfIdentificators.txt");
         MFST_TRACE_START
            MFST::Mfst mfst(tabel, GRB::getGreibach());
mfst.start();
        mfst.savededucation();
        mfst.printrules();
        
        for (int iter = 0, lt_position; iter < tabel.LexTable.size; iter++)
        {
            if (tabel.LexTable.table[iter - 1].lexema == LEX_EQUAL_SIGN)
            {
                if (PolishNotation::PolishNotation(iter, tabel.LexTable, tabel.idTable))
                {
                    cout << "Польская запись построена; строка: " << tabel.LexTable.table[iter].sn << endl;
                }
                else
                    cout << "Польская запись не построена; строка: " << tabel.LexTable.table[iter].sn << endl;
            }
        }

        tabel.LexTable.PrintLexTable(L"TableOfLexemsPN.txt");

       
        


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
