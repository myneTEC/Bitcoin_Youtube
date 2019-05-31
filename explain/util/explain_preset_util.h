// Copyright (c) 2017-2019 myneTEC

include <mynetec>


-------------------------
util.h
-------------------------
its showing this:

**
* Server/client environment: argument handling, config file parsing,
* logging, thread wrappers
*/

so we will dealing with basic environmental things here

Logtime settings

class for translation interface

some variable declarations for log functionality, print, debug etc...

translation function

some basic setting things regarding the file system and stuff like that (pid...)

environment setup

Log functions

further functions for printing, cache, read config file and stuff like that. (Basic functionalities)

a few different versions for argument handling functions

number of cores installed into your system

and last but not least a wrapper template for thread tracing


lets now switch into the next file:

---------------------------------
util.cpp
---------------------------------

after its including part you can see some specs for windows and some other linux distros for up/downward and general running compatibilty purposes
we will further see some boost library implementations. what is quite handy as its already prewritten code and
the original bitcoin coder that from my understanding was behind the Satoshi Nakamoto Pseudonym
and wrote its code: Dave Kleiman (1967 – April 26, 2013) just implemented basic functions for his own use from there.
its an open source library to extend the classical c++ one. based on guys that
wanted to implement more basic functionality for c++ in the past. boost can be found here: https://www.boost.org/

the file also shows us an extra boost namespace as well

after it you will see groundbase Initialisations for the system:

const char * const BITCOIN_CONF_FILENAME = "bitcoin.conf";
const char * const BITCOIN_PID_FILENAME = "bitcoind.pid";  //PID stands for Process ID so its a thread specific thing for the cpu

followed by Log functionality (line 105 to 117) included the translation

next will be first time we see a mutex in use (you need them for example for blocking 2 threads from interfering each other,
		but they can also be used to hide code functionality to a simple user, coder, programmer, developer.
		like bitcoin is doing it a lot with all its other Locking funtionalities, we will be faced with in future videos coming...)

they are based on the MFC (Microsoft Foundation Classes) like this one: CCriticalSection

next will be class CInit() with usage of mutex and cleanup function
CInit Instance
debug print init flag
fileout
mutex declarations

static int FileWriteStr(const std::string &str, FILE *fp)
static void DebugPrintInit()
void OpenDebugLog()
bool LogAcceptCategory(const char* category)
static std::string LogTimestampStr(const std::string &str, bool *fStartedNewLine)
int LogPrintStr(const std::string &str)
static bool InterpretBool(const std::string& strValue)
static void InterpretNegativeSetting(std::string& strKey, std::string& strValue)
void ParseParameters(int argc, const char* const argv[])

5 argument handler functions

2 helper functions

static std::string FormatException(const std::exception* pex, const char* pszThread)

void PrintExceptionContinue(const std::exception* pex, const char* pszThread)

boost::filesystem::path GetDefaultDataDir()

static boost::filesystem::path pathCached;
static boost::filesystem::path pathCachedNetSpecific;
static CCriticalSection csPathCached;

const boost::filesystem::path &GetDataDir(bool fNetSpecific)

void ClearDatadirCache()

boost::filesystem::path GetConfigFile()

void ReadConfigFile(map<string, string>& mapSettingsRet,
                    map<string, vector<string> >& mapMultiSettingsRet)

boost::filesystem::path GetPidFile()

bool RenameOver(boost::filesystem::path src, boost::filesystem::path dest)

bool TryCreateDirectory(const boost::filesystem::path& p)

void FileCommit(FILE *fileout)

bool TruncateFile(FILE *file, unsigned int length)

int RaiseFileDescriptorLimit(int nMinFD)

void AllocateFileRange(FILE *file, unsigned int offset, unsigned int length)

void ShrinkDebugFile()

Win32

boost::filesystem::path GetTempPath()

void runCommand(const std::string& strCommand)

void RenameThread(const char* name)

void SetupEnvironment()

bool SetupNetworking()

void SetThreadPriority(int nPriority)

int GetNumCores()












