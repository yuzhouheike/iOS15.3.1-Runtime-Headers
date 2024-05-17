/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding> {
    AMSBagKeySet * _bagKeySet;
    NSArray * _cookies;
    NSDictionary * _data;
    NSDate * _expirationDate;
    AMSProcessInfo * _processInfo;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, readonly) AMSBagKeySet *bagKeySet;
@property (nonatomic, readonly) NSArray *cookies;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, copy) id /* block */ dataSourceChangedHandler;
@property (nonatomic, copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionExtended;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6 processInfo:(id)arg7;
- (id)bagKeyInfoForKey:(id)arg1;
- (id)bagKeySet;
- (id)cookies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (bool)isLoaded;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;

@end
