/* Generated by RuntimeBrowser.
 */

@protocol _SFPBDetailedRowCardSection <NSObject>

@required

- (_SFPBActionItem *)action;
- (void)addButtonItems:(_SFPBButtonItem *)arg1;
- (void)addDescriptions:(_SFPBRichText *)arg1;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (_SFPBColor *)backgroundColor;
- (_SFPBButton *)button;
- (NSArray *)buttonItems;
- (bool)buttonItemsAreTrailing;
- (_SFPBButtonItem *)buttonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonItemsCount;
- (bool)canBeHidden;
- (void)clearButtonItems;
- (void)clearDescriptions;
- (void)clearPunchoutOptions;
- (NSArray *)descriptions;
- (_SFPBRichText *)descriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)descriptionsCount;
- (_SFPBRichText *)footnote;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isSecondaryTitleDetached;
- (NSData *)jsonData;
- (bool)preventThumbnailImageScaling;
- (NSArray *)punchoutOptions;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (_SFPBFormattedText *)secondaryTitle;
- (_SFPBImage *)secondaryTitleImage;
- (int)separatorStyle;
- (void)setAction:(_SFPBActionItem *)arg1;
- (void)setBackgroundColor:(_SFPBColor *)arg1;
- (void)setButton:(_SFPBButton *)arg1;
- (void)setButtonItems:(NSArray *)arg1;
- (void)setButtonItemsAreTrailing:(bool)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptions:(NSArray *)arg1;
- (void)setFootnote:(_SFPBRichText *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSecondaryTitle:(_SFPBFormattedText *)arg1;
- (void)setSecondaryTitleImage:(_SFPBImage *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShouldUseCompactDisplay:(bool)arg1;
- (void)setThumbnail:(_SFPBImage *)arg1;
- (void)setTitle:(_SFPBRichText *)arg1;
- (void)setTrailingBottomText:(_SFPBFormattedText *)arg1;
- (void)setTrailingMiddleText:(_SFPBFormattedText *)arg1;
- (void)setTrailingThumbnail:(_SFPBImage *)arg1;
- (void)setTrailingTopText:(_SFPBFormattedText *)arg1;
- (void)setType:(NSString *)arg1;
- (bool)shouldUseCompactDisplay;
- (_SFPBImage *)thumbnail;
- (_SFPBRichText *)title;
- (_SFPBFormattedText *)trailingBottomText;
- (_SFPBFormattedText *)trailingMiddleText;
- (_SFPBImage *)trailingThumbnail;
- (_SFPBFormattedText *)trailingTopText;
- (NSString *)type;

@end
