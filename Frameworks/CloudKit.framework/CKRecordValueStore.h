/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    NSMutableSet * _changedKeysSet;
    NSMutableDictionary * _originalValues;
    CKRecord * _record;
    bool  _trackChanges;
    NSMutableDictionary * _values;
}

@property (nonatomic, retain) NSMutableSet *changedKeysSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *originalValues;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)allKeys;
- (id)changedKeys;
- (id)changedKeysSet;
- (bool)checkProperties:(bool)arg1 withValueCheckBlock:(id /* block */)arg2;
- (bool)checkPropertiesWithModifiedPropertiesOnly:(bool)arg1 includingAllArrayItems:(bool)arg2 withValueCheckBlock:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (id)recordID;
- (void)resetChangedKeys;
- (void)setChangedKeysSet:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setOriginalValues:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValues:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)values;

@end
