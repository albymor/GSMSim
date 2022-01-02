#include "GSMSimCallInfo.h"

String CallInfo::getStringInformation()
{
	return string_repr;
}

void CallInfo::printInformation()
{
	Serial.println(getStringInformation());
}
