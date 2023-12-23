#pragma once
#include "stdafx.h"

namespace Serialization {
	void Serialize(char* filePath, bool number);
	void Serializet(char* filePath, short number);
	void Serialize(char* filePath, int numbers[], int size);
	
}