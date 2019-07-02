// Copyright (c) 2017-2019 myneTEC

include <mynetec>

#include "explain.h"

-------------------------
undo.h
-------------------------

undo is one of the shorter source files so we just dealing with:

a class called: CTxInUndo (line 19-54)

		and

a class called: CTxUndo (line 57-69)

	as well as

a class called: CBlockUndo (line 72-83)

using appropriate serialization functionality coming from the serialize.h file

well you need a serialized set of numbers, characters resulting in an appropriate
stream of information flow to build a transaction and from there being able to undo it

hence we have to deal with appropriate functionality in regards to those series of information in the
form of special coded serialization functions
the 3 before mentioned classes will realize the undo part for them for INcoming Transactions, Outgoing Transactions
and whole Transactions build up blocks containing more than just a single one
(a bitcoin transaction block averages commonly around the number of 2000 transactions per block)

end of this file!







