// Copyright (c) 2017-2019 myneTEC Group

include <mynetec>

#include "explain.h"

-------------------------
uint256.h
-------------------------

it starts with:

a class called: base_blob  //you need them especially for picture objects as blob stands for: binary large object

containing Template usage for BITS inside enumeration structure

further more we see a bunch of several functions (i decided to build a Parantheses block for this)
{
	base_blob(); IsNull(); SetNull(); operator==; operator!=; operator<; GetHex(); SetHex(); ToString(); begin();
	end(); size(); GetSerializeSize(); Serialize(); Unserialize();
}  (line 17-95)

a class called: uint160 (line 97-106)//160 bit opaque blob

a class called: uint256 (line 108-133) //256 bit opaque blob
{
	GetCheapHash(); GetHash();
}

functions uint246S(); (line 135-154)//2 times with different parameters entries from each other!


-------------------------
uint256.cpp
-------------------------

BITS template (it is put into a few times in lines 13;20;29;58;64)

function base_blob() (line 14-18)//using BITS

function GetHex() (line 21-27)//using BITS

functions SetHex() (line 30-56 again at 59-62)//using BITS

function ToString() (line 64-68)//using BITS

/Explicit instantiations for base_blob<160> (line 70-75)
/Explicit instantiations for base_blob<256> (line 77-82)

function HashMix() (line 84-105)

function HashFinal() (line 107-124)

function GetHash() (line 126-146)


end of this file!







