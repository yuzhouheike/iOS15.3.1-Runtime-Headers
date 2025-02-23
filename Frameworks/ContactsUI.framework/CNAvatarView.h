/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarView : UIView <CNAvatarCardControllerDelegate, CNCardTransitioning, CNContactChangesObserver, CNUILikenessCachingRendererDelegate> {
    bool  _allowStaleRendering;
    bool  _allowStaleRenderingWithMatchingContextToken;
    bool  _allowsAnimation;
    bool  _asynchronousRendering;
    bool  _autoUpdateContact;
    CNAvatarCardController * _cardController;
    CNContactStore * _contactStore;
    UINavigationController * _contactViewNavigationController;
    NSArray * _contacts;
    NSString * _contextToken;
    <CNAvatarViewDelegate> * _delegate;
    bool  _disableCornerRadiusForAvatar;
    long long  _displayedImageState;
    UIView * _forcePressView;
    <CNAvatarViewUpdateToken> * _groupViewConfigurationUpdateToken;
    <CNUILikenessRendering> * _imageRenderer;
    UIImageView * _imageView;
    NSIndexSet * _maskedAvatarIndices;
    NSString * _message;
    long long  _monogrammerStyle;
    NSString * _name;
    UIImage * _overrideImage;
    PRPersonaStore * _personaStore;
    bool  _prohibitsPersonaFetch;
    bool  _registeredContactAction;
    bool  _registeredInNotifier;
    <CNCancelable> * _rendererToken;
    <CNSchedulerProvider> * _schedulerProvider;
    bool  _shouldUpdateMaskedAvatars;
    bool  _showsActionsOnForcePress;
    bool  _showsActionsOnTap;
    bool  _showsContactOnTap;
    unsigned long long  _stateCaptureHandle;
    unsigned long long  _style;
    bool  _threeDTouchEnabled;
}

@property (nonatomic, copy) NSArray *actionCategories;
@property (nonatomic) bool allowStaleRendering;
@property (nonatomic) bool allowStaleRenderingWithMatchingContextToken;
@property (nonatomic) bool allowsAnimation;
@property (nonatomic) bool asynchronousRendering;
@property (nonatomic) bool autoUpdateContact;
@property (nonatomic) bool bypassActionValidation;
@property (nonatomic, retain) CNAvatarCardController *cardController;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, retain) UINavigationController *contactViewNavigationController;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, readonly) UIImage *contentImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentImageFrame;
@property (nonatomic, retain) NSString *contextToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableCornerRadiusForAvatar;
@property (nonatomic) long long displayedImageState;
@property (nonatomic) UIView *forcePressView;
@property (nonatomic, retain) <CNAvatarViewUpdateToken> *groupViewConfigurationUpdateToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNUILikenessRendering> *imageRenderer;
@property (nonatomic, copy) UIImageView *imageView;
@property (nonatomic, readonly) bool isDisplayingContent;
@property (nonatomic, retain) NSIndexSet *maskedAvatarIndices;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) long long monogrammerStyle;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UIImage *overrideImage;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic) bool prohibitsPersonaFetch;
@property bool registeredContactAction;
@property bool registeredInNotifier;
@property (nonatomic, retain) <CNCancelable> *rendererToken;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic) bool shouldUpdateMaskedAvatars;
@property (nonatomic) bool showsActionsOnForcePress;
@property (nonatomic) bool showsActionsOnTap;
@property (nonatomic) bool showsContactOnTap;
@property (nonatomic) unsigned long long stateCaptureHandle;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (getter=isThreeDTouchEnabled, nonatomic) bool threeDTouchEnabled;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitioningContentFrame;
@property (nonatomic, readonly) UIView *transitioningContentView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitioningFrame;
@property (nonatomic, readonly) UIImage *transitioningImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitioningImageFrame;
@property bool transitioningImageVisible;
@property (nonatomic, readonly) UIView *transitioningView;

+ (bool)defaultThreeDTouchSupport;
+ (id)descriptionForDisplayedImageState:(long long)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(bool)arg1;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(bool)arg1 shouldUseCachingRenderer:(bool)arg2 description:(id)arg3;
+ (id)makeDescriptorForRequiredKeysWithThreeDTouchEnabled:(bool)arg1 shouldUseCachingRenderer:(bool)arg2;
+ (unsigned long long)maxContactAvatars;

- (void).cxx_destruct;
- (double)_diameter;
- (void)_renderContactsImage;
- (void)_setContacts:(id)arg1;
- (void)_updateCardActions;
- (void)_updateRegistration;
- (id)actionCategories;
- (bool)allowStaleRendering;
- (bool)allowStaleRenderingWithMatchingContextToken;
- (bool)allowsAnimation;
- (bool)asynchronousRendering;
- (bool)autoUpdateContact;
- (void)avatarCacheDidUpdateForIdentifiers:(id)arg1;
- (id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;
- (void)avatarCardControllerDidDismiss:(id)arg1;
- (void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1;
- (void)avatarCardControllerWillDismiss:(id)arg1;
- (bool)bypassActionValidation;
- (id)cardController;
- (void)clearImage;
- (id)contact;
- (void)contactDidChange;
- (void)contactDidChange:(id)arg1;
- (id)contactStore;
- (id)contactViewNavigationController;
- (id)contacts;
- (id)contentImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentImageFrame;
- (id)contextToken;
- (id)currentLikenessScope;
- (void)dealloc;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (void)didMoveToWindow;
- (bool)disableCornerRadiusForAvatar;
- (void)dismissContactViewController:(id)arg1;
- (long long)displayedImageState;
- (bool)enabled;
- (id)forcePressView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAvatarAtIndex:(unsigned long long)arg1 inView:(id)arg2;
- (id)groupViewConfigurationUpdateToken;
- (id)imageForTransitioningToFullScreen;
- (id)imageRenderer;
- (id)imageView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(bool)arg2 contactStore:(id)arg3;
- (id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(bool)arg2 contactStore:(id)arg3 style:(unsigned long long)arg4 schedulerProvider:(id)arg5;
- (id)initWithSettings:(id)arg1;
- (bool)isDisplayingContent;
- (bool)isThreeDTouchEnabled;
- (bool)isUpdatingGroupViewConfiguration;
- (void)layoutSubviews;
- (id)maskedAvatarIndices;
- (id)message;
- (long long)monogrammerStyle;
- (id)name;
- (void)notifyDelegateOfGroupConfigurationUpdateWithError:(id)arg1;
- (id)overrideImage;
- (id)personaStore;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (bool)prohibitsPersonaFetch;
- (bool)registeredContactAction;
- (bool)registeredInNotifier;
- (id)rendererToken;
- (void)resetGroupUpdateTokenIfNeeded;
- (id)schedulerProvider;
- (void)setActionCategories:(id)arg1;
- (void)setAllowStaleRendering:(bool)arg1;
- (void)setAllowStaleRenderingWithMatchingContextToken:(bool)arg1;
- (void)setAllowsAnimation:(bool)arg1;
- (void)setAsynchronousRendering:(bool)arg1;
- (void)setAutoUpdateContact:(bool)arg1;
- (void)setBypassActionValidation:(bool)arg1;
- (void)setCardController:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactViewNavigationController:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setContacts:(id)arg1 forToken:(id)arg2;
- (void)setContextToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableCornerRadiusForAvatar:(bool)arg1;
- (void)setDisplayedImageState:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setForcePressView:(id)arg1;
- (void)setGroupViewConfigurationUpdateToken:(id)arg1;
- (void)setImage:(id)arg1 state:(long long)arg2;
- (void)setImageRenderer:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMaskedAvatarIndices:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMonogrammerStyle:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOverrideImage:(id)arg1;
- (void)setProhibitsPersonaFetch:(bool)arg1;
- (void)setRegisteredContactAction:(bool)arg1;
- (void)setRegisteredInNotifier:(bool)arg1;
- (void)setRendererToken:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setShouldUpdateMaskedAvatars:(bool)arg1;
- (void)setShowsActionsOnForcePress:(bool)arg1;
- (void)setShowsActionsOnTap:(bool)arg1;
- (void)setShowsContactOnTap:(bool)arg1;
- (void)setStateCaptureHandle:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (void)setTransitioningImageVisible:(bool)arg1;
- (void)setupAvatarCardControllerIfNeeded;
- (bool)shouldUpdateMaskedAvatars;
- (bool)shouldUpdateWithContacts:(id)arg1;
- (void)showContact:(id)arg1;
- (bool)showsActionsOnForcePress;
- (bool)showsActionsOnTap;
- (bool)showsContactOnTap;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)stateCaptureHandle;
- (unsigned long long)style;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningFrame;
- (id)transitioningImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningImageFrame;
- (bool)transitioningImageVisible;
- (id)transitioningView;
- (id)updateViewWithGroupIdentity:(id)arg1;
- (id)updateViewWithGroupIdentity:(id)arg1 maskingContacts:(id)arg2;

@end
