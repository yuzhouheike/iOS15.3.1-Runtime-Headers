/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSActionResponse : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSCopying> {
    NSError * _error;
    BSSettings * _info;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BSSettings *info;
@property (readonly) Class superclass;

+ (id)response;
+ (id)responseForError:(id)arg1;
+ (id)responseWithInfo:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithInfo:(id)arg1 error:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
