#include "Serializator.h"
#include "stdafx.h"

namespace Serialization {
	void Serialize(char* filePath, bool number) {

		ofstream writer(filePath);

		if (!writer.is_open()) {
			cout << "Не удалось открыть файл." << endl;
			return;
		}

		writer << "0x01" << "0x" << setfill('0') << setw(8) << hex << (int)number;

		writer.close();
	}
	void Serializet(char* filePath, short number) {

		ofstream writer(filePath);

		if (!writer.is_open()) {
			cout << "Не удалось открыть файл." << endl;
			return;
		}

		writer << "0x01" << "0x" << setfill('0') << setw(8) << hex << (short)number;

		writer.close();
	}

	void Serialize(char* filePath, int numbers[], int size) {

		ofstream writer(filePath);

		if (!writer.is_open()) {
			cout << "Не удалось открыть файл." << endl;
			return;
		}

		writer << "0x01" << "0x" << setfill('0') << setw(2) << hex << size;

		for (unsigned char i = 0; i < size; i++) {
			writer << "0x" << setfill('0') << setw(8) << hex << numbers[i];
		}

		writer.close();
	}

	
}