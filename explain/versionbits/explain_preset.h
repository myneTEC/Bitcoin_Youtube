// Copyright (c) 2017-2019 myneTEC

include <mynetec>


-------------------------
versionbits.h
-------------------------

short code file, just containing 60 lines of code:

VERSIONBITS_LAST_OLD_BLOCK_VERSION (lines 11-12)
VERSIONBITS_TOP_BITS (lines 13-14)
VERSIONBITS_TOP_MASK (lines 15-16)
VERSIONBITS_NUM_BITS (lines 17-18)

enum ThresholdState (line 20-26)
containing: THRESHOLD_DEFINED,
			THRESHOLD_STARTED,
			THRESHOLD_LOCKED_IN,
			THRESHOLD_ACTIVE,
			THRESHOLD_FAILED

typedef std::map<const CBlockIndex*, ThresholdState> ThresholdConditionCache (line 28-31)

class AbstractThresholdConditionChecker (line 36-47)
containing functions:
				protected Condition; BeginTime; EndTime; Period; Threshold
				public GetStateFor

struct VersionBitsCache (line 59-54)
containing functions:
				ThresholdConditionCache
				Clear

VersionBitsState (line 56)
VersionBitsMask (line 57)

----------------------------
versionbits.cpp
----------------------------

implementing logic for:

ThresholdState AbstractThresholdConditionChecker::GetStateFor function (line 7-89)

namespace containing:

class VersionBitsConditionChecker : public AbstractThresholdConditionChecker (line 96-114)
having                 const Consensus::DeploymentPos id
plus functions for class:
						protected BeginTime; EndTime; Period; Threshold; Condition
						public    VersionBitsConditionChecker; Mask

VersionBitsState (line 118-121)
VersionBitsMask  (line 123-126)
void VersionBitsCache::Clear()   (line 128-133)
















