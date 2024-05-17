/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBIndexState : PBCodable <NSSecureCoding, _SFPBIndexState> {
    int  _percentAttachmentsIndexed;
    int  _percentMessagesIndexed;
    int  _searchIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int percentAttachmentsIndexed;
@property (nonatomic) int percentMessagesIndexed;
@property (nonatomic) int searchIndex;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)percentAttachmentsIndexed;
- (int)percentMessagesIndexed;
- (bool)readFrom:(id)arg1;
- (int)searchIndex;
- (void)setPercentAttachmentsIndexed:(int)arg1;
- (void)setPercentMessagesIndexed:(int)arg1;
- (void)setSearchIndex:(int)arg1;
- (void)writeTo:(id)arg1;

@end
