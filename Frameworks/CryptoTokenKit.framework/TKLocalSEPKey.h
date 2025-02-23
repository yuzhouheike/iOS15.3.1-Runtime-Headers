/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKLocalSEPKey : TKSEPKey {
    NSXPCConnection * _caller;
    id  _sac;
}

@property (nonatomic, retain) NSXPCConnection *caller;
@property (nonatomic, retain) id sac;

+ (bool)hasSEP;
+ (bool)isDaytona;
+ (bool)isGibraltar;
+ (int)keyClassForProtection:(id)arg1;
+ (int)keybagHandle;
+ (id)protectionForKeyClass:(int)arg1;
+ (void)setContextErrorHandler:(id /* block */)arg1;
+ (void)setupKeybagForTesting:(bool)arg1;

- (void).cxx_destruct;
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl { }*)arg3 options:(id)arg4 authContext:(id)arg5 error:(id*)arg6;
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 error:(id*)arg3;
- (struct __SecAccessControl { }*)accessControl;
- (id)authContextWithError:(id*)arg1;
- (id)caller;
- (bool)callerHasEntitlement:(id)arg1 error:(id*)arg2;
- (bool)error:(id*)arg1 withAKSReturn:(int)arg2 ACMHandle:(id)arg3 AKSOperation:(id)arg4 message:(id)arg5;
- (id)parametersWithACMHandle:(id)arg1;
- (id)sac;
- (void)setCaller:(id)arg1;
- (void)setSac:(id)arg1;
- (bool)systemKey;

@end
