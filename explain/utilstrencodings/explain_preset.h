// Copyright (c) 2017-2019 myneTEC

include <mynetec>


-------------------------
utilstrencodings.h
-------------------------

it starts with some Define definitions needed for preprocessor and easier code access purpose.
next we see: enum SafeChars a declaration of allowed chars (for filtering this)
commenting points on a former Bitcoin Improvement Proposal (BIP-0014), they will be common among its source code from past bug fixing
issues and implementing solutions for former problems purposes.

next we dealing with some functions heads that handle us some string and encode and decode stuff to ensure better safechar security
for URL email etc..(line 39-51)
plus implemented some own overloaded atoi parsing functionality (line 53-57)

next further parsing functions with some commenting added (line 59-78)

3 templates that can be used:

template 1 HexStr (line 80-97)
template 2 HexStr (line 99-103)

FormatParagraph function (line 105-109)

template 3 timeResistantEqual (line 111-124)

ParseFixedPoint (line 126-131)

----------------------------
utilstrencodings.cpp
----------------------------

line shows us a preinitialised alphanumeric string with all numbering and chars in it that will be accepted
as well as safe chars. depending on further logic implementations (line 17-23)

a sanitize string function (line 25-34)

predefined hexdigit arraybased on 256 values (line 36-52)

HexDigit function where before mentioned array is used (line 54-57)

IsHex function seems to be a Hex check function for hexadecimal values (line 59-67)

ParseHex function to parse something into a hexadecimal value (line 69-88)
ParseHex function again (another version)   (line 90-93)


EncodeBase64 function for encoding (line 95-139)
EncodeBase64 function 2nd version having only 1 paramenter (line 141-144)

DecodeBase64 function vector version for decoding containing additional encapsulated arrray values (146-227)
DecodeBase64 function for decoding 2nd version having only 1 parameter (line 229-233)

EncodeBase32 function for encoding (line 235-292)
EncodeBase32 function 2nd version only 1 parameter (line 294-297)

DecodeBase32 function vector version (line 299-414)
DecodeBase32 function 2nd version having only 1 parameter (line 416-420)

ParsePrchecks function (line 422-431)

ParseInt32 function (line 433-447)

ParseInt64 function (line 449-462)

ParseDouble function (line 464-476)

FormatParagraph function (line 478-511)

i64tostr function (line 513-516)

itostr function (line 518-521)

atoi64 function (line 523-530)

atoi64 function 2nd version (line 532-539)

atoi function (541-544)

int64_t UPPER_BOUND declaration with initialised value and commenting (line 546-554)

ProcessMantissaDigit function with commenting (line 556-571)

ParseFixedPoint function (line 573-663)














