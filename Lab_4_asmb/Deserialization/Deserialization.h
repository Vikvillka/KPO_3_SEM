#pragma once
#include "stdafx.h"
#include "AssembblyDefault.h"

namespace Deserialization {
	int DeserializeBool(char* filePath);
	short DeserializeShort(char* filePath);
	void ConvertToAssembly(char* filePath, bool b, short s);
}