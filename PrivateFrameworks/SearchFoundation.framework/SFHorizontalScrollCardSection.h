/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFHorizontalScrollCardSection : SFCardSection <NSCopying, NSSecureCoding, SFHorizontalScrollCardSection> {
    SFColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _cardSections;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int numberOfRows : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    unsigned long long  _numberOfRows;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _type;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) NSString *cardSectionDetail;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *cardSections;
@property (readonly) NSArray *cardsFromButtons;
@property (readonly) NSArray *cardsFromEmbeddedSections;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) NSString *commandDetail;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSArray *embeddedCards;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (nonatomic, retain) NSString *previewButtonItemsTitle;
@property (nonatomic, retain) SFCommand *previewCommand;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)cardSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasNumberOfRows;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)numberOfRows;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (id)sectionsWithCards;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSections:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
