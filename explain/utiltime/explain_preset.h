// Copyright (c) 2017-2019 myneTEC

include <mynetec>


-------------------------
utiltime.h
-------------------------

not much code lines there as it seems.
besides of the standard functionality from basic library

we just see 6 different functions for setting up own timings and time framings

with another additional function for setting up DateTime Format into a string

well header files are the main things for having your code kind of precoded more in concept in a simpler way for later use
so implementing the more in complexity Logic part of the code will be done by the cpp part.

what will be following next with

----------------------------
utiltime.cpp
----------------------------

we see some boost implementation (will be common along all of bitcoins source code)

basic coding everything done under the std namespace

followed by the mockTime variable statement and

implementing the 6 mentioned time functions fully

another boost relation thing with #define statement added

and last but not least the DateTime Format implementation to get us the DateTime converted into a string for return value

and were done (well some code files are much shorter in size than others)
