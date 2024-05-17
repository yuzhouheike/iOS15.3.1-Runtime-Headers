/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding> {
    NSString * _akAction;
    NSString * _altDSID;
    NSString * _idmsData;
    NSString * _itemIdentifier;
    NSString * _txnid;
}

@property (nonatomic, copy) NSString *akAction;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *idmsData;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, copy) NSString *txnid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)akAction;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)idmsData;
- (id)initWithCoder:(id)arg1;
- (id)itemIdentifier;
- (void)setAkAction:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setIdmsData:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setTxnid:(id)arg1;
- (id)txnid;

@end
