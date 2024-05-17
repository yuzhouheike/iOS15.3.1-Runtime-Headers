/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSTerminateRequest : RBSRequest <NSCopying, RBSXPCSecureCoding> {
    RBSTerminateContext * _context;
    RBSProcessPredicate * _predicate;
    <RBSServiceLocalProtocol> * _service;
    bool  _targetsAllManagedProcesses;
}

@property (nonatomic, readonly) RBSTerminateContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RBSProcessPredicate *predicate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool targetsAllManagedProcesses;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (bool)execute:(out id*)arg1;
- (bool)execute:(out id*)arg1 error:(out id*)arg2;
- (unsigned long long)hash;
- (id)initForAllManagedWithReason:(id)arg1;
- (id)initWithPredicate:(id)arg1 context:(id)arg2;
- (id)initWithProcessIdentifier:(id)arg1 context:(id)arg2;
- (id)initWithProcessIdentity:(id)arg1 context:(id)arg2;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (bool)targetsAllManagedProcesses;

@end
