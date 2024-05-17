/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDDataCollectionSession : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _batchNumber;
    NSString * _identifier;
    NSDate * _lastCollectionDate;
    NSDate * _latestStartDate;
    NSData * _salt;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
