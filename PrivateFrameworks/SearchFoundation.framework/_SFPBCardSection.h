/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBCardSection : PBCodable <NSSecureCoding, _SFPBCardSection> {
    NSString * _cardSectionDetail;
    NSString * _cardSectionId;
    _SFPBCommand * _command;
    NSArray * _commands;
    _SFPBCard * _nextCard;
    NSArray * _parameterKeyPaths;
    NSArray * _previewButtonItems;
    NSString * _previewButtonItemsTitle;
    _SFPBCommand * _previewCommand;
    NSString * _resultIdentifier;
    int  _type;
    _SFPBUserReportRequest * _userReportRequest;
    _SFPBCardSectionValue * _value;
}

@property (nonatomic, copy) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, retain) _SFPBCommand *command;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, copy) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) _SFPBCommand *previewCommand;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBUserReportRequest *userReportRequest;
@property (nonatomic, retain) _SFPBCardSectionValue *value;

- (void).cxx_destruct;
- (void)addCommands:(id)arg1;
- (void)addParameterKeyPaths:(id)arg1;
- (void)addPreviewButtonItems:(id)arg1;
- (id)cardSectionDetail;
- (id)cardSectionId;
- (void)clearCommands;
- (void)clearParameterKeyPaths;
- (void)clearPreviewButtonItems;
- (id)command;
- (id)commands;
- (id)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSFCardSection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)nextCard;
- (id)parameterKeyPaths;
- (id)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
- (id)previewButtonItems;
- (id)previewButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewButtonItemsCount;
- (id)previewButtonItemsTitle;
- (id)previewCommand;
- (bool)readFrom:(id)arg1;
- (id)resultIdentifier;
- (void)setCardSectionDetail:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setNextCard:(id)arg1;
- (void)setParameterKeyPaths:(id)arg1;
- (void)setPreviewButtonItems:(id)arg1;
- (void)setPreviewButtonItemsTitle:(id)arg1;
- (void)setPreviewCommand:(id)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserReportRequest:(id)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)userReportRequest;
- (id)value;
- (void)writeTo:(id)arg1;

@end
