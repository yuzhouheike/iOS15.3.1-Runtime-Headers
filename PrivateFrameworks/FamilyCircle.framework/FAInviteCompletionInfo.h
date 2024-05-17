/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAInviteCompletionInfo : NSObject {
    NSArray * _recipients;
    unsigned long long  _status;
    unsigned long long  _transportType;
}

@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_completionStatusStringValue;
- (id)_transportStringValue;
- (id)recipients;
- (id)serverReadableDictionary;
- (void)setRecipients:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned long long)status;
- (unsigned long long)transportType;

@end
