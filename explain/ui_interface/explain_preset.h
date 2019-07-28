// Copyright (c) 2017-2019 myneTEC Group all rights reserved.

include <mynetec>

#include "explain.h"

-------------------------
ui_interface.h
-------------------------

it starts containining the following classes and functions:

class CBasicKeyStore;
class CWallet;
class uint256;
class CBlockIndex; (line 15-18)

enum for ChangeType (line 21-26)

class CClientUIInterface containing: (line 29-102)

enum for MessageBoxFlags (ok,abort...) (line 33-74)

ending with 8 signals for:  (line 76-101)

ThreadSafeMessageBox; InitMessage; NotifyNumConnectionsChanged; NotifyAlertChanged; LoadWallet; ShowProgress; NotifyBlockTip; BannedListChanged

and finally: extern CClientUIInterface uiInterface; for external call (line 104)


end of this file!







