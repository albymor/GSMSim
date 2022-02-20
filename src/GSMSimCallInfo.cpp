#include "GSMSimCallInfo.h"

String CallInfo::getStringInformation()
{
	return string_repr;
}

void CallInfo::printInformation()
{
	Serial.println(getStringInformation());
}

void CallInfo::reset()
{
	status = CALL_CALLEND;
    phone_number = "";
    string_repr = "";
}
