/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaCarPlayInvocationContext : SISchemaInstrumentationMessage {
    NSString * _bundleID;
    int  _directAction;
    int  _enhancedVoiceTriggerMode;
    struct { 
        unsigned int directAction : 1; 
        unsigned int enhancedVoiceTriggerMode : 1; 
    }  _has;
    bool  _hasBundleID;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) int directAction;
@property (nonatomic) int enhancedVoiceTriggerMode;
@property (nonatomic) bool hasBundleID;
@property (nonatomic) bool hasDirectAction;
@property (nonatomic) bool hasEnhancedVoiceTriggerMode;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)bundleID;
- (id)dictionaryRepresentation;
- (int)directAction;
- (int)enhancedVoiceTriggerMode;
- (bool)hasBundleID;
- (bool)hasDirectAction;
- (bool)hasEnhancedVoiceTriggerMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDirectAction:(int)arg1;
- (void)setEnhancedVoiceTriggerMode:(int)arg1;
- (void)setHasBundleID:(bool)arg1;
- (void)setHasDirectAction:(bool)arg1;
- (void)setHasEnhancedVoiceTriggerMode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
