/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization> {
    unsigned int  _microstackshotState;
    int  _pid;
    SATimestamp * _startTimestamp;
    unsigned long long  _state;
    unsigned long long  _threadId;
    unsigned char  _threadPriority;
    SATurnstileInfo * _turnstileInfo;
    SAWaitInfo * _waitInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithWaitInfo:(id)arg1 turnstileInfo:(id)arg2 state:(unsigned long long)arg3 microstackshotState:(unsigned int)arg4 pid:(int)arg5 threadId:(unsigned long long)arg6 threadPriority:(unsigned char)arg7 startSampleIndex:(unsigned long long)arg8 startTimestamp:(id)arg9 sampleCount:(unsigned long long)arg10;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
