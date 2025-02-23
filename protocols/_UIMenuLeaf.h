/* Generated by RuntimeBrowser.
 */

@protocol _UIMenuLeaf <NSObject>

@required

- (bool)_isDefaultCommand;
- (NSArray *)_leafAlternates;
- (NSString *)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_performWithTarget:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (<_UIMenuLeaf> *)_validatedLeafWithAlternate:(id <_UIMenuLeafAlternate>)arg1 target:(id)arg2 validation:(_UIMenuLeafValidation *)arg3;
- (unsigned long long)attributes;
- (NSString *)discoverabilityTitle;
- (UIImage *)image;
- (bool)keepsMenuPresented;
- (bool)requiresAuthenticatedInput;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(NSString *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (long long)state;
- (NSString *)title;

@end
