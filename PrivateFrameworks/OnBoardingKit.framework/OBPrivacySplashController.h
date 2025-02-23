/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacySplashController : OBWelcomeController {
    bool  _allowsOpeningSafari;
    UIColor * _customTintColor;
    id /* block */  _defaultButtonHandler;
    unsigned long long  _displayDeviceType;
    NSString * _displayLanguage;
    OBPrivacyFlow * _flow;
    bool  _forceLargeMargins;
    bool  _isCombined;
    UILabel * _linkToPrivacyGateway;
    UIButton * _linkToPrivacyGatewayButton;
    UILabel * _privacyGatewayDescription;
    bool  _showLinkToPrivacyGateway;
    bool  _showsLinkToUnifiedAbout;
    bool  _suppressPerPageAnalyticsLogging;
    bool  _underlineLinks;
    UIButton * _unifiedAboutButton;
    bool  _useModalStyle;
}

@property bool allowsOpeningSafari;
@property (nonatomic, retain) UIColor *customTintColor;
@property (copy) id /* block */ defaultButtonHandler;
@property unsigned long long displayDeviceType;
@property (retain) NSString *displayLanguage;
@property bool forceLargeMargins;
@property (nonatomic) bool isCombined;
@property (retain) UILabel *linkToPrivacyGateway;
@property (retain) UIButton *linkToPrivacyGatewayButton;
@property (retain) UILabel *privacyGatewayDescription;
@property (nonatomic) bool showLinkToPrivacyGateway;
@property bool showsLinkToUnifiedAbout;
@property bool suppressPerPageAnalyticsLogging;
@property (nonatomic) bool underlineLinks;
@property (retain) UIButton *unifiedAboutButton;
@property bool useModalStyle;

+ (id)splashPageWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_defaultButtonTitle;
- (void)_initializeFromBundle;
- (bool)allowsOpeningSafari;
- (id)customTintColor;
- (id /* block */)defaultButtonHandler;
- (void)defaultButtonPressed:(id)arg1;
- (unsigned long long)displayDeviceType;
- (id)displayLanguage;
- (bool)forceLargeMargins;
- (id)initWithFlow:(id)arg1;
- (id)initWithPrivacyIdentifier:(id)arg1;
- (bool)isCombined;
- (id)linkToPrivacyGateway;
- (id)linkToPrivacyGatewayButton;
- (void)loadView;
- (id)privacyGatewayDescription;
- (void)setAllowsOpeningSafari:(bool)arg1;
- (void)setCustomTintColor:(id)arg1;
- (void)setDefaultButtonHandler:(id /* block */)arg1;
- (void)setDismissHandlerForDefaultButton:(id /* block */)arg1;
- (void)setDisplayDeviceType:(unsigned long long)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setForceLargeMargins:(bool)arg1;
- (void)setIsCombined:(bool)arg1;
- (void)setLinkToPrivacyGateway:(id)arg1;
- (void)setLinkToPrivacyGatewayButton:(id)arg1;
- (void)setPrivacyGatewayDescription:(id)arg1;
- (void)setShowLinkToPrivacyGateway:(bool)arg1;
- (void)setShowsLinkToUnifiedAbout:(bool)arg1;
- (void)setSuppressPerPageAnalyticsLogging:(bool)arg1;
- (void)setUnderlineLinks:(bool)arg1;
- (void)setUnifiedAboutButton:(id)arg1;
- (void)setUseModalStyle:(bool)arg1;
- (bool)showLinkToPrivacyGateway;
- (void)showPrivacyGateway:(id)arg1;
- (void)showUnifiedAbout:(id)arg1;
- (bool)showsLinkToUnifiedAbout;
- (bool)suppressPerPageAnalyticsLogging;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)underlineLinks;
- (id)unifiedAboutButton;
- (void)updateFontForPrivacyGateway;
- (void)updateFontForUnifiedAboutButton;
- (bool)useModalStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
