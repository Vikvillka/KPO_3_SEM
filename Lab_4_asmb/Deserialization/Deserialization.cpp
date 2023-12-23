#pragma once
#include "Deserialization.h"
#include "stdafx.h"

namespace Deserialization {
	int DeserializeBool(char* filePath) {
        ifstream reader(filePath);
        if (!reader.is_open()) {
            cout << "Не удалось открыть файл." << endl;
            return -1;
        }

        int resultNumber = 0;
        string buff;
        reader >> buff;
        buff.erase(0, 6);
        sscanf_s(buff.c_str(), "%x", &resultNumber);

        reader.close();
        return resultNumber;
    }

    short DeserializeShort(char* filePath) {
        ifstream reader(filePath);
        if (!reader.is_open()) {
            cout << "Не удалось открыть файл." << endl;
            return -1;
        }

        int resultNumber = 0;
        string buff;
        reader >> buff;
        buff.erase(0, 6);
        sscanf_s(buff.c_str(), "%x", &resultNumber);

        reader.close();
        return resultNumber;
    }

	void ConvertToAssembly(char* filePath, bool b, short s) {

		ofstream fileAsm(filePath);

		fileAsm ASM_HEAD;

		fileAsm << "BOOL1   DB " << "\"" << b << "\"" << endl;
		fileAsm << "SHORT1	DB " << "\"" << s << "\"" << endl;

		fileAsm ASM_FOOTER;

		fileAsm.close();
	}
}