/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAMemoryPressureEvent : NSObject <SASerializable> {
    unsigned long long  _availableBytes;
    unsigned char  _memoryStatusLevel;
    SATimestamp * _timestamp;
}

@property (readonly) unsigned long long availableBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned char memoryStatusLevel;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timestamp;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned char x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)availableBytes;
- (unsigned char)memoryStatusLevel;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)timestamp;

@end
