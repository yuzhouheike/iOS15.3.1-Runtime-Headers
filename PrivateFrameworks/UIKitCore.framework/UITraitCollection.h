/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding, _UIFallbackEnvironment> {
    struct { 
        long long userInterfaceIdiom; 
        double displayScale; 
        long long displayGamut; 
        long long touchLevel; 
        unsigned long long interactionModel; 
        unsigned long long primaryInteractionModel; 
        long long artworkSubtype; 
        long long horizontalSizeClass; 
        long long verticalSizeClass; 
        long long userInterfaceStyle; 
        long long layoutDirection; 
        long long forceTouchCapability; 
        long long preferredContentSizeCategory; 
        double displayCornerRadius; 
        long long legibilityWeight; 
        long long semanticContext; 
        long long presentationSemanticContext; 
        long long splitViewControllerContext; 
        long long accessibilityContrast; 
        long long userInterfaceLevel; 
        long long vibrancy; 
        long long activeAppearance; 
        long long focusSystemState; 
        long long selectionFollowsFocus; 
    }  _builtinTraits;
    NSDictionary * _clientDefinedTraits;
    NSObject * _environmentWrapper;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) bool _isLargeContentViewerEnabled;
@property (nonatomic, readonly) long long accessibilityContrast;
@property (nonatomic, readonly) long long activeAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) long long forceTouchCapability;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) long long legibilityWeight;
@property (nonatomic, readonly, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long userInterfaceLevel;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long verticalSizeClass;

+ (id)_currentTraitCollection;
+ (id)_descriptionForChangeFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
+ (void)_setCurrentTraitCollection:(id)arg1;
+ (id)_traitCollectionForSidebarAppearance;
+ (id)_traitCollectionWithBackgroundLevel:(long long)arg1;
+ (id)_traitCollectionWithContrast:(long long)arg1;
+ (id)_traitCollectionWithEnvironmentWrapper:(id)arg1;
+ (id)_traitCollectionWithFocusSystemState:(long long)arg1;
+ (id)_traitCollectionWithPresentationSemanticContext:(long long)arg1;
+ (id)_traitCollectionWithSplitViewControllerContext:(long long)arg1;
+ (id)_traitCollectionWithUserInterfaceActiveAppearance:(long long)arg1;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)_traitCollectionWithVibrancy:(long long)arg1;
+ (id)currentTraitCollection;
+ (void)setCurrentTraitCollection:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)traitCollectionWithAccessibilityContrast:(long long)arg1;
+ (id)traitCollectionWithActiveAppearance:(long long)arg1;
+ (id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1;
+ (id)traitCollectionWithDisplayCornerRadius:(double)arg1;
+ (id)traitCollectionWithDisplayGamut:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithLayoutDirection:(long long)arg1;
+ (id)traitCollectionWithLegibilityWeight:(long long)arg1;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceLevel:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;

- (long long)_backgroundLevel;
- (long long)_compare:(id)arg1;
- (long long)_contrast;
- (id)_description;
- (id)_environmentWrapper;
- (id)_fallbackTraitCollection;
- (long long)_focusSystemState;
- (bool)_hasSplitViewControllerContextPrimaryColumn;
- (bool)_hasSplitViewControllerContextSidebarColumn;
- (bool)_isLargeContentViewerEnabled;
- (id)_namedImageDescription;
- (long long)_presentationSemanticContext;
- (long long)_splitViewControllerContext;
- (id)_traitNamesForUnspecifiedBuiltInTraits;
- (id)_traitsDescription;
- (long long)_userInterfaceActiveAppearance;
- (id)_valueForTraitNamed:(id)arg1;
- (long long)_vibrancy;
- (long long)accessibilityContrast;
- (long long)activeAppearance;
- (unsigned long long)artworkSubtype;
- (bool)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)displayCornerRadius;
- (long long)displayGamut;
- (double)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (long long)forceTouchCapability;
- (bool)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg1;
- (unsigned long long)hash;
- (long long)horizontalSizeClass;
- (id)imageConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionModel;
- (bool)isEqual:(id)arg1;
- (long long)layoutDirection;
- (long long)legibilityWeight;
- (void)performAsCurrentTraitCollection:(id /* block */)arg1;
- (id)preferredContentSizeCategory;
- (unsigned long long)primaryInteractionModel;
- (long long)touchLevel;
- (long long)userInterfaceIdiom;
- (long long)userInterfaceLevel;
- (long long)userInterfaceStyle;
- (long long)verticalSizeClass;

@end
