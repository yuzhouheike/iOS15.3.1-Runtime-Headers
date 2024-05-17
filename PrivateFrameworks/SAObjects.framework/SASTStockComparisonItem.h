/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *stockValueFacet;
@property (nonatomic, retain) SAUIDecoratedText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;
@property (nonatomic, retain) SAUIDecoratedText *value;

+ (id)stockComparisonItem;
+ (id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStockValueFacet:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stockValueFacet;
- (id)subtitle;
- (id)title;
- (id)value;

@end
