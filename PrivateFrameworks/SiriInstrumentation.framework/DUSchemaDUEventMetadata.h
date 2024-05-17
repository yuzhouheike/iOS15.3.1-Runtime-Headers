/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface DUSchemaDUEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _assetIdentifier;
    bool  _hasAssetIdentifier;
}

@property (nonatomic, retain) SISchemaUUID *assetIdentifier;
@property (nonatomic) bool hasAssetIdentifier;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasAssetIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setHasAssetIdentifier:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
