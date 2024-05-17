/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetPeopleSuggestion : NSObject <NSSecureCoding, SHSheetUIPeopleSuggestion> {
    NSArray * _contacts;
    NSString * _conversationIdentifier;
    NSString * _derivedIntentIdentifier;
    NSString * _displayName;
    INImage * _donatedImage;
    NSString * _identifier;
    bool  _isRestricted;
    NSArray * _recipientsHandles;
    NSString * _transportBundleIdentifier;
}

@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *derivedIntentIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) INImage *donatedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isRestricted;
@property (nonatomic, copy) NSArray *recipientsHandles;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *transportBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contacts;
- (id)conversationIdentifier;
- (id)derivedIntentIdentifier;
- (id)description;
- (id)displayName;
- (id)donatedImage;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isRestricted;
- (id)recipientsHandles;
- (void)setContacts:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDerivedIntentIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDonatedImage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsRestricted:(bool)arg1;
- (void)setRecipientsHandles:(id)arg1;
- (void)setTransportBundleIdentifier:(id)arg1;
- (id)transportBundleIdentifier;

@end
