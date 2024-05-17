/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SACallTreeFrame : SACallTreeNode <SAJSONSerialization> {
    NSMutableArray * _children;
    SAFrame * _frame;
    bool  _isLeafFrame;
}

@property (readonly) NSArray *childFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SAFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childFrames;
- (id)frame;
- (id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(bool)arg4;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
