/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMutableScenePresentationContext : UIScenePresentationContext

@property (setter=_setDefaultPresentationContext:, nonatomic, retain) UIScenePresentationContext *_defaultPresentationContext;
@property (setter=_setExclusiveLayerTargetsToInclude:, nonatomic, copy) NSSet *_exclusiveLayerTargetsToInclude;
@property (setter=_setLayerTargetsToExclude:, nonatomic, copy) NSSet *_layerTargetsToExclude;
@property (setter=_setMinificationFilterName:, nonatomic, copy) NSString *_minificationFilterName;
@property (getter=_isVisibilityPropagationEnabled, setter=_setVisibilityPropagationEnabled:, nonatomic) bool _visibilityPropagationEnabled;
@property (nonatomic) unsigned long long appearanceStyle;
@property (nonatomic, copy) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (nonatomic, copy) UIColor *backgroundColorWhileHosting;
@property (nonatomic, copy) UIColor *backgroundColorWhileNotHosting;
@property (getter=isClippingDisabled, nonatomic) bool clippingDisabled;
@property (nonatomic, copy) UITransformer *hostTransformer;
@property (nonatomic) unsigned long long presentedLayerTypes;
@property (nonatomic) unsigned long long renderingMode;

- (id)_defaultPresentationContext;
- (id)_existingLayerPresentationContextCreatingIfNecessary:(bool)arg1;
- (void)_setDefaultPresentationContext:(id)arg1;
- (void)_setExclusiveLayerTargetsToInclude:(id)arg1;
- (void)_setLayerTargetsToExclude:(id)arg1;
- (void)_setMinificationFilterName:(id)arg1;
- (void)_setVisibilityPropagationEnabled:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)modifyLayerPresentationOverrideContextForLayerTarget:(id)arg1 block:(id /* block */)arg2;
- (void)removeAllLayerPresentationOverrides;
- (void)removeLayerPresentationOverrideForLayerTarget:(id)arg1;
- (void)resetToDefaults;
- (void)setAppearanceStyle:(unsigned long long)arg1;
- (void)setAsynchronousRenderingOptions:(id)arg1;
- (void)setBackgroundColorWhileHosting:(id)arg1;
- (void)setBackgroundColorWhileNotHosting:(id)arg1;
- (void)setClippingDisabled:(bool)arg1;
- (void)setHostTransformer:(id)arg1;
- (void)setPresentedLayerTypes:(unsigned long long)arg1;
- (void)setRenderingMode:(unsigned long long)arg1;

@end
