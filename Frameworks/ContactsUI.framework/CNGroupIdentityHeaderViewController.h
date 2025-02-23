/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNGroupIdentityHeaderViewController : UIViewController <CNGroupIdentityHeaderContainerViewwDelegate, CNGroupIdentityInlineActionsViewControllerDelegate> {
    UIButton * _actionButton;
    NSString * _actionButtonTitle;
    NSLayoutConstraint * _actionButtonZeroHeightConstraint;
    CNGroupIdentityInlineActionsViewConfiguration * _actionsViewConfiguration;
    CNGroupIdentityInlineActionsViewController * _actionsViewController;
    double  _actionsViewTopMargin;
    UIImage * _avatarBadgeImage;
    CNBadgingAvatarBadgeStyleSettings * _avatarBadgeStyleSettings;
    CNContactFormatter * _contactFormatter;
    <CNGroupIdentityHeaderViewControllerDelegate> * _delegate;
    CNGroupIdentity * _group;
    CNGroupAvatarViewController * _groupAvatarViewController;
    bool  _isMarkedForSyndication;
    CNAvatarAccessoryView * _mediaContextBadge;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousSize;
    bool  _shouldShowContactBusy;
    UILabel * _titleLabel;
    UIFont * _titleLabelFont;
    UIFont * _titleLabelWrappedFont;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) NSString *actionButtonTitle;
@property (nonatomic, retain) NSLayoutConstraint *actionButtonZeroHeightConstraint;
@property (nonatomic, readonly) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration;
@property (nonatomic, retain) CNGroupIdentityInlineActionsViewController *actionsViewController;
@property (nonatomic) double actionsViewTopMargin;
@property (nonatomic, retain) UIImage *avatarBadgeImage;
@property (nonatomic, retain) CNBadgingAvatarBadgeStyleSettings *avatarBadgeStyleSettings;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNGroupIdentityHeaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNGroupIdentity *group;
@property (nonatomic, retain) CNGroupAvatarViewController *groupAvatarViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMarkedForSyndication;
@property (nonatomic, retain) CNAvatarAccessoryView *mediaContextBadge;
@property (nonatomic) struct CGSize { double x1; double x2; } previousSize;
@property (nonatomic) bool shouldShowContactBusy;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIFont *titleLabelFont;
@property (nonatomic, retain) UIFont *titleLabelWrappedFont;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)actionButton;
- (id)actionButtonTitle;
- (id)actionButtonZeroHeightConstraint;
- (id)actionsViewConfiguration;
- (id)actionsViewController;
- (double)actionsViewTopMargin;
- (id)avatarBadgeImage;
- (id)avatarBadgeStyleSettings;
- (id)contactFormatter;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)delegate;
- (void)didTapActionButton;
- (id)displayNameForGroupIdentity;
- (struct CGSize { double x1; double x2; })estimatedSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)group;
- (id)groupAvatarViewController;
- (void)groupIdentityDidUpdate:(id)arg1;
- (void)groupIdentityInlineActionsViewController:(id)arg1 didPerformActionOfType:(id)arg2 fromDisambiguation:(bool)arg3;
- (void)groupIdentityInlineActionsViewController:(id)arg1 willPresentDisambiguationUIForActionType:(id)arg2;
- (void)hideTitleLabel:(bool)arg1;
- (id)initWithGroupIdentity:(id)arg1;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2 avatarViewControllerSettings:(id)arg3;
- (bool)isMarkedForSyndication;
- (void)loadView;
- (id)mediaContextBadge;
- (bool)preferredContentSizeCategoryIsXL;
- (struct CGSize { double x1; double x2; })previousSize;
- (void)setActionButton:(id)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)setActionButtonZeroHeightConstraint:(id)arg1;
- (void)setActionsViewController:(id)arg1;
- (void)setActionsViewTopMargin:(double)arg1;
- (void)setAvatarBadgeImage:(id)arg1;
- (void)setAvatarBadgeStyleSettings:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setGroupAvatarViewController:(id)arg1;
- (void)setIsMarkedForSyndication:(bool)arg1;
- (void)setMediaContextBadge:(id)arg1;
- (void)setPreviousSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldShowContactBusy:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelFont:(id)arg1;
- (void)setTitleLabelWrappedFont:(id)arg1;
- (void)setupActionButton;
- (void)setupActionsView;
- (void)setupAvatarView;
- (void)setupEmptyActionsView;
- (void)setupPopulatedActionsView;
- (void)setupTitleLabel;
- (bool)shouldShowActionButton;
- (bool)shouldShowActionsView;
- (bool)shouldShowContactBusy;
- (struct CGSize { double x1; double x2; })sizeForLayoutInContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (double)titleLabelBaselineOffset;
- (id)titleLabelFont;
- (id)titleLabelWrappedFont;
- (void)updateActionButton;
- (void)updateActionButtonFont;
- (void)updateTitleLabel;
- (void)updateTitleLabelFont;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForActionAtIndex:(unsigned long long)arg1;

@end
