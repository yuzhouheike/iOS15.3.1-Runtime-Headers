/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SATaskState : NSObject <SASerializable> {
    unsigned int  _cowFaults;
    NSSet * _donatingUniquePids;
    unsigned long long  _endSampleIndex;
    SATimestamp * _endTimestamp;
    unsigned int  _faults;
    unsigned int  _latencyQos;
    unsigned int  _pageins;
    unsigned long long  _ssFlags;
    unsigned long long  _startSampleIndex;
    SATimestamp * _startTimestamp;
    unsigned int  _suspendCount;
    unsigned long long  _taskSizeInBytes;
    unsigned long long  _terminatedThreadsCycles;
    unsigned long long  _terminatedThreadsInstructions;
    unsigned long long  _terminatedThreadsSystemTimeInNs;
    unsigned long long  _terminatedThreadsUserTimeInNs;
}

@property (readonly) unsigned int cowFaults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *donatingUniquePids;
@property (readonly) unsigned long long endSampleIndex;
@property (readonly) SATimestamp *endTimestamp;
@property (readonly) unsigned int faults;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBoosted;
@property (readonly) bool isDarwinBG;
@property (readonly) bool isDarwinExtBG;
@property (readonly) bool isDirty;
@property (readonly) bool isForeground;
@property (readonly) bool isFrozen;
@property (readonly) bool isImpDonor;
@property (readonly) bool isLiveImpDonor;
@property (readonly) bool isNonVisible;
@property (readonly) bool isPidSuspended;
@property (readonly) bool isSuppressed;
@property (readonly) bool isSuspended;
@property (readonly) bool isTaskResourceFlagged;
@property (readonly) bool isTerminatedSnapshot;
@property (readonly) bool isTimerThrottled;
@property (readonly) bool isVisible;
@property (readonly) unsigned int latencyQos;
@property (readonly) unsigned int pageins;
@property (readonly) unsigned long long ssFlags;
@property (readonly) unsigned long long startSampleIndex;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) Class superclass;
@property (readonly) unsigned int suspendCount;
@property (readonly) unsigned long long taskSizeInBytes;
@property (readonly) unsigned long long terminatedThreadsCpuTimeNs;
@property (readonly) unsigned long long terminatedThreadsCycles;
@property (readonly) unsigned long long terminatedThreadsInstructions;
@property (readonly) unsigned long long terminatedThreadsSystemTimeInNs;
@property (readonly) unsigned long long terminatedThreadsUserTimeInNs;
@property (readonly) bool wqExceededConstrainedThreadLimit;
@property (readonly) bool wqExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned long long x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned char x17; unsigned long long x18; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned int)cowFaults;
- (id)debugDescription;
- (id)donatingUniquePids;
- (unsigned long long)endSampleIndex;
- (id)endTimestamp;
- (unsigned int)faults;
- (id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;
- (bool)isBoosted;
- (bool)isDarwinBG;
- (bool)isDarwinExtBG;
- (bool)isDirty;
- (bool)isForeground;
- (bool)isFrozen;
- (bool)isImpDonor;
- (bool)isLiveImpDonor;
- (bool)isNonVisible;
- (bool)isPidSuspended;
- (bool)isSuppressed;
- (bool)isSuspended;
- (bool)isTaskResourceFlagged;
- (bool)isTerminatedSnapshot;
- (bool)isTimerThrottled;
- (bool)isVisible;
- (unsigned int)latencyQos;
- (unsigned int)pageins;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)ssFlags;
- (unsigned long long)startSampleIndex;
- (id)startTimestamp;
- (unsigned int)suspendCount;
- (unsigned long long)taskSizeInBytes;
- (unsigned long long)terminatedThreadsCpuTimeNs;
- (unsigned long long)terminatedThreadsCycles;
- (unsigned long long)terminatedThreadsInstructions;
- (unsigned long long)terminatedThreadsSystemTimeInNs;
- (unsigned long long)terminatedThreadsUserTimeInNs;
- (bool)wqExceededConstrainedThreadLimit;
- (bool)wqExceededTotalThreadLimit;

@end
