#ifndef __GSMSimCallInfo_H__
#define __GSMSimCallInfo_H__

#include <Arduino.h>

typedef enum
{
  CALL_ACTIVE = 0,
  CALL_HELD,
  CALL_DIALING,
  CALL_RINGING,
  CALL_INCOMING,
  CALL_WAITING,
  CALL_BUSY,
  CALL_CALLEND,
} call_status_t;

class CallInfo
{
public:
  call_status_t status;
  String phone_number;
  String string_repr;

  String getStringInformation();
  void printInformation();

  CallInfo()
  {
    status = CALL_CALLEND;
    phone_number = "";
    string_repr = "";
  }
};

#endif