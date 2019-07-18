// Copyright (c) 2017-2019 myneTEC Group all rights reserved.

include <mynetec>

#include "explain.h"

-------------------------
arith_uint256.h
-------------------------

it starts with:

an empty class called: class uint256 (line 16)

followed by a class called: uint_error (line 20)  //dealing us with some runtime error functionality

next is a template for BITS (line 24)  //big integers

after it we see class base_uint (line 25-250)

containing:
{
	protected enum for BITS
	public base_uint(); operator(); getDouble(); some more operater() simple logic handling...
	CompareTo(); EqualTo(); GetHex(); SetHex(); ToString(); size(); bits(); getLow64();
}

next class arith_uint256  (line 252-285)

containing:
{
	public arith_uint256(); SetCompact(); GetCompact(); ArithToUint256(); UintToArith256
}

ArithToUint256(); UintToArith256 (line 287-288)



-------------------------
arith_uint256.cpp
-------------------------

template for BITS (line 15,21,38,55,67,83,109,121,135,147,153,159,165,171)  //big integers

base_uint() (line 16-19)

operator() (line 22,39,56,68,84)//5 times in occurence in different logical math versions see line numbers for start of each version

EqualTo() (line 122-133)

getdouble() (line 136-145)

GetHex() (line 148-151)

SetHex() (line 154,160) //i did not mention the end lines here just starting lines

ToString() (line 166-169)

bits() (line 172-184)

/// Explicit instantiations for base_uint<256> (line 186-200)

SetCompact() (line 202-222)

GetCompact() (line 224-245)

ArithToUint256() (line 247-253)

UintToArith256() (line 254-260)


end of this file!







