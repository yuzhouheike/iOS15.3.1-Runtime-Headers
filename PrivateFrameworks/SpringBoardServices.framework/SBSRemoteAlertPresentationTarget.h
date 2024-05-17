/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteAlertPresentationTarget : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {
    bool  _shouldDismissOnUILock;
    BSProcessHandle * _targetProcess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDismissOnUILock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSProcessHandle *targetProcess;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetProcess:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setShouldDismissOnUILock:(bool)arg1;
- (bool)shouldDismissOnUILock;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)targetProcess;

@end
