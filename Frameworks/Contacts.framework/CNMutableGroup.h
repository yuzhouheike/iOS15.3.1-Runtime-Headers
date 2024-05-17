/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutableGroup : CNGroup

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, copy) NSData *externalRepresentation;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, copy) NSString *externalUUID;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) CNGroup *snapshot;

- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
- (id)copy;
- (id)creationDate;
- (id)externalIdentifier;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalUUID;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)modificationDate;
- (id)name;
- (void)setCreationDate:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setExternalUUID:(id)arg1;
- (void)setIOSLegacyIdentifier:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSnapshot:(id)arg1;

@end
