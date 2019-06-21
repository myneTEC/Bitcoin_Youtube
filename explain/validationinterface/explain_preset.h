// Copyright (c) 2017-2019 myneTEC

include <mynetec>

#include "explain.h"

-------------------------
validationinterface.h
-------------------------

the boost logic implementation is showing us we are dealing with signaling issues for the main interactions here (line 9-10)

a few lines of declared classes with one struct is following this (line 12-19)

next we see different kind of registering functions for wallet dispatchings (line 23-30)

next comes a class named CValidationInterface with its specific protectec functions i wont go in detail here  (line 32-46)

next we see a struct called CMainSignals using boost library also having some functions mostly self explanatory as well (line 48-67)

file ends with CMainSignals address declaration for GetMainSignals();  (line 69)

followed by we are already used to flile specific preprocessor Labeling statement: BITCOIN_VALIDATIONINTERFACE_H  (line 71)


-------------------------
validationinterface.cpp
-------------------------

besides of include statement for the other file it contains functions implementation logic for:

static CMainSignals g_signals; (line 8)

CMainSignals& GetMainSignals (line 10-13)

RegisterValidationInterface (line 15-25)

UnregisterValidationInterface (line 27-37)

UnregisterAllValidationInterfaces (line 39-49)

SyncWithWallets (line 51-53)


end of this file!







