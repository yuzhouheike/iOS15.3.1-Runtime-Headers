/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFECKeyPair : _SFKeyPair {
    id  _ecKeyPairInternal;
}

@property (nonatomic, readonly, copy) _SFECKeySpecifier *keySpecifier;

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;

- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2;
- (id)performWithCCKey:(id /* block */)arg1;
- (id)publicKey;

@end
