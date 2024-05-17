/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerSetupInfo : NSObject <NSCopying, NSSecureCoding> {
    CKContainerID * _containerID;
    CKContainerOptions * _containerOptions;
}

@property (nonatomic, readonly, copy) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic, readonly, copy) CKAccountOverrideInfo *accountOverrideInfo;
@property (nonatomic, retain) CKContainerID *containerID;
@property (nonatomic, retain) CKContainerOptions *containerOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountInfoOverride;
- (id)accountOverrideInfo;
- (id)containerID;
- (id)containerOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hashString;
- (id)initWithCoder:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setContainerOptions:(id)arg1;

@end
