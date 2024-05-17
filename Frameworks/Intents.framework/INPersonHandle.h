/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding> {
    long long  _emergencyType;
    NSString * _label;
    bool  _suggested;
    long long  _type;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long emergencyType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)emergencyType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 suggested:(bool)arg5;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 suggested:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSuggested;
- (id)label;
- (long long)type;
- (id)value;

@end
