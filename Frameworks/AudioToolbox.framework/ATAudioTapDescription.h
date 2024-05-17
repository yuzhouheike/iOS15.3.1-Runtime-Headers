/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface ATAudioTapDescription : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSArray * _excludedPIDs;
    AVAudioFormat * _format;
    NSString * _name;
    int  _processIdentifier;
    long long  _tapType;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSArray *excludedPIDs;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) long long tapType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedPIDs;
- (id)format;
- (id)initProcessTapInternalWithFormat:(id)arg1 PID:(int)arg2;
- (id)initProcessTapWithFormat:(id)arg1 PID:(int)arg2;
- (id)initSystemTapWithFormat:(id)arg1;
- (id)initSystemTapWithFormat:(id)arg1 excludePIDs:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (int)processIdentifier;
- (long long)tapType;

@end
