/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon {
    NSString * _systemImageName;
    long long  _type;
}

@property (nonatomic, readonly) NSString *systemImageName;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_initForSubclass;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSystemImageName:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)systemImageName;
- (long long)type;

@end
