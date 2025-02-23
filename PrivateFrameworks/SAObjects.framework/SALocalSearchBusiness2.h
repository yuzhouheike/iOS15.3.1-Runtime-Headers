/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (nonatomic, retain) SALocation *address;
@property (nonatomic, copy) NSURL *businessUrl;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSString *currencySymbol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *extSessionGuid;
@property (nonatomic, copy) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *identifierMap;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *offerLists;
@property (nonatomic, retain) SALocalSearchOperationHours *operationHours;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSArray *photoList;
@property (nonatomic, copy) NSData *placeData2;
@property (nonatomic, copy) NSString *priceRange;
@property (nonatomic, copy) NSArray *reviewList;
@property (readonly) Class superclass;

+ (id)business2;
+ (id)business2WithDictionary:(id)arg1 context:(id)arg2;

- (id)address;
- (id)businessUrl;
- (id)categories;
- (id)commands;
- (id)currencySymbol;
- (id)descriptionText;
- (id)encodedClassName;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (id)identifierMap;
- (id)name;
- (id)offerLists;
- (id)operationHours;
- (id)phoneNumber;
- (id)photoList;
- (id)placeData2;
- (id)priceRange;
- (id)reviewList;
- (void)setAddress:(id)arg1;
- (void)setBusinessUrl:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setCurrencySymbol:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setExtSessionGuid:(id)arg1;
- (void)setExtSessionGuidCreatedTimestamp:(id)arg1;
- (void)setIdentifierMap:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOfferLists:(id)arg1;
- (void)setOperationHours:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhotoList:(id)arg1;
- (void)setPlaceData2:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setReviewList:(id)arg1;

@end
