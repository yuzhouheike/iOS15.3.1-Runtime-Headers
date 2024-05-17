/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICellAccessoryCustomView : UICellAccessory {
    UIView * _customView;
    bool  _maintainsFixedSize;
    long long  _placement;
    id /* block */  _position;
}

@property (nonatomic, readonly) UIView *customView;
@property (nonatomic) bool maintainsFixedSize;
@property (nonatomic, readonly) long long placement;
@property (nonatomic, copy) id /* block */ position;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_defaultPlacementForHeader:(bool)arg1;
- (id)_identifier;
- (bool)_isSystemType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customView;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1 placement:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)maintainsFixedSize;
- (long long)placement;
- (id /* block */)position;
- (void)setMaintainsFixedSize:(bool)arg1;
- (void)setPosition:(id /* block */)arg1;

@end
