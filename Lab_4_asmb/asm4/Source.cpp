#include "stdafx.h"
#include "Serializator.h"

void main() {
	Serialization::Serialize((char*)"D:\\3_SEM_LABS\\KPO\\asm4\\asm4\\ser1.txt", 0);
	Serialization::Serializet((char*)"D:\\3_SEM_LABS\\KPO\\asm4\\asm4\\ser2.txt", 3);
	Serialization::Serialize((char*)"D:\\kpo_Narkevich\\asm4_2\\asm4\\asm4\\serNums.txt", new int[6]{ 1, 2, 3, 4, 5, 6 }, 6);	
}