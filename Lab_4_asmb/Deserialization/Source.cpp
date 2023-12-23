#include "stdafx.h"
#include "Deserialization.h"

void main() {
	int bool1 = Deserialization::DeserializeBool((char*)"D:\\3_SEM_LABS\\KPO\\asm4\\asm4\\ser1.txt");
	cout << bool1 << endl;
	short short1 = Deserialization::DeserializeShort((char*)"D:\\3_SEM_LABS\\KPO\\asm4\\asm4\\ser2.txt");
	cout << short1 << endl;

	Deserialization::ConvertToAssembly((char*)"D:\\3_SEM_LABS\\KPO\\asm4\\asm\\asm4.asm", bool1, short1);
}