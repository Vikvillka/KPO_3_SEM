#define _CRT_SECURE_NO_WARNINGS
#include "Out.h"
#include "In.h"
#include "Error.h"
#include <fstream>
#include <stdio.h>  
#include <ctime>
#include <stdlib.h>
#include <string>
#include <iostream>

namespace Out
{
	OUT getout(wchar_t outfile[])
	{
		OUT a;
		a.stream = new std::ofstream;
		a.stream->open(outfile);
		if (a.stream->fail()) {
			throw ERROR_THROW(113);
		}
		wcscpy_s(a.outfile, outfile);
		return a;
	}


	void WriteOut(OUT out, In::IN in)
	{
		*out.stream << in.text << std::endl;
	}

	void WriteError(OUT log, Error::ERROR error)
	{
		*log.stream << "������ " << error.id << ": " << error.message << ", ������ " << error.inext.line << ",������� " << error.inext.col << std::endl;
	}

	void Close(OUT log)
	{
		log.stream->close();
		delete log.stream;
		log.stream = NULL;
	}
}