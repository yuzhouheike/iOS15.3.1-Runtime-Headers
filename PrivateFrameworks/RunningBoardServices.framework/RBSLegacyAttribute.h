/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSLegacyAttribute : RBSAttribute {
    unsigned long long  _flags;
    unsigned long long  _reason;
    unsigned long long  _requestedReason;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, readonly) unsigned long long requestedReason;

+ (id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reason;
- (unsigned long long)requestedReason;
- (void)setReason:(unsigned long long)arg1;

@end
