/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CAMSchemaCAMClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _camId;
    int  _feature;
    struct { 
        unsigned int feature : 1; 
    }  _has;
    bool  _hasCamId;
    bool  _hasResultCandidateId;
    NSString * _resultCandidateId;
}

@property (nonatomic, retain) SISchemaUUID *camId;
@property (nonatomic) int feature;
@property (nonatomic) bool hasCamId;
@property (nonatomic) bool hasFeature;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (id)camId;
- (id)dictionaryRepresentation;
- (int)feature;
- (bool)hasCamId;
- (bool)hasFeature;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setCamId:(id)arg1;
- (void)setFeature:(int)arg1;
- (void)setHasCamId:(bool)arg1;
- (void)setHasFeature:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
