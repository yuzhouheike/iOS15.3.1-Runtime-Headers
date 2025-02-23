/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentSharingController : UIViewController <UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining, _UISharingPublicController> {
    <_UIDocumentSharingControllerDelegate_Private> * __privateDelegate;
    NSString * _appName;
    NSString * _auxiliaryActionTitle;
    _UIResilientRemoteViewContainerViewController * _childViewController;
    bool  _collaborationUIEnabled;
    id  _delegate;
    NSString * _headerActionTitle;
    NSString * _headerSubtitle;
    NSString * _initialHeaderSubtitle;
    bool  _legacyAppearance;
    NSString * _mailSubject;
    NSString * _mailTemplate;
    NSString * _messageTemplate;
    UIViewController * _originalPresentingViewController;
    bool  _showOnlyAddPeople;
    bool  _showRootFolder;
    UIViewController * _strongReferenceToOurself;
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (getter=_privateDelegate, setter=_setPrivateDelegate:, nonatomic) <_UIDocumentSharingControllerDelegate_Private> *_privateDelegate;
@property (getter=_appName, setter=_setAppName:, nonatomic, copy) NSString *appName;
@property (getter=_auxiliaryActionTitle, setter=_setAuxiliaryActionTitle:, nonatomic, copy) NSString *auxiliaryActionTitle;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (getter=_collaborationUIEnabled, setter=_setCollaborationUIEnabled:, nonatomic) bool collaborationUIEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_headerActionTitle, setter=_setHeaderActionTitle:, nonatomic, copy) NSString *headerActionTitle;
@property (getter=_headerSubtitle, setter=_setHeaderSubtitle:, nonatomic, copy) NSString *headerSubtitle;
@property (getter=_initialHeaderSubtitle, setter=_setInitialHeaderSubtitle:, nonatomic, copy) NSString *initialHeaderSubtitle;
@property (getter=_legacyAppearance, setter=_setLegacyAppearance:, nonatomic) bool legacyAppearance;
@property (getter=_mailSubject, setter=_setMailSubject:, nonatomic, copy) NSString *mailSubject;
@property (getter=_mailTemplate, setter=_setMailTemplate:, nonatomic, copy) NSString *mailTemplate;
@property (getter=_messageTemplate, setter=_setMessageTemplate:, nonatomic, copy) NSString *messageTemplate;
@property (getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:, nonatomic) UIViewController *originalPresentingViewController;
@property (getter=_remoteViewController, nonatomic, readonly) _UIShareInvitationRemoteViewController *remoteViewController;
@property (getter=_showOnlyAddPeople, setter=_setShowOnlyAddPeople:, nonatomic) bool showOnlyAddPeople;
@property (getter=_showRootFolder, setter=_setShowRootFolder:, nonatomic) bool showRootFolder;
@property (getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:, nonatomic, retain) UIViewController *strongReferenceToOurself;
@property (readonly) Class superclass;
@property (getter=_thumbnail, setter=_setThumbnail:, nonatomic, copy) UIImage *thumbnail;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_appName;
- (id)_auxiliaryActionTitle;
- (id)_childViewController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:(id)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(bool)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(bool)arg1;
- (bool)_collaborationUIEnabled;
- (id)_containedRemoteViewController;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_didDismiss;
- (void)_dismissForActivityRepresentation:(id /* block */)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (id)_headerActionTitle;
- (id)_headerSubtitle;
- (id)_initialHeaderSubtitle;
- (bool)_legacyAppearance;
- (id)_mailSubject;
- (id)_mailTemplate;
- (id)_messageTemplate;
- (id)_originalPresentingViewController;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* block */)arg1;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (id)_privateDelegate;
- (id)_remoteViewController;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)arg1;
- (void)_requestSavedShareWithCompletion:(id /* block */)arg1;
- (bool)_requiresCustomPresentationController;
- (void)_setAppName:(id)arg1;
- (void)_setAuxiliaryActionTitle:(id)arg1;
- (void)_setChildViewController:(id)arg1;
- (void)_setCollaborationUIEnabled:(bool)arg1;
- (void)_setHeaderActionTitle:(id)arg1;
- (void)_setHeaderSubtitle:(id)arg1;
- (void)_setInitialHeaderSubtitle:(id)arg1;
- (void)_setLegacyAppearance:(bool)arg1;
- (void)_setMailSubject:(id)arg1;
- (void)_setMailSubject:(id)arg1 template:(id)arg2;
- (void)_setMailTemplate:(id)arg1;
- (void)_setMessageTemplate:(id)arg1;
- (void)_setOriginalPresentingViewController:(id)arg1;
- (void)_setPrivateDelegate:(id)arg1;
- (void)_setShowOnlyAddPeople:(bool)arg1;
- (void)_setShowRootFolder:(bool)arg1;
- (void)_setStrongReferenceToOurself:(id)arg1;
- (void)_setThumbnail:(id)arg1;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (id)_sharingViewPresentationController;
- (bool)_showOnlyAddPeople;
- (bool)_showRootFolder;
- (id)_strongReferenceToOurself;
- (id)_thumbnail;
- (void)_updatePresentationStyleForLegacyAppearance;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)delegate;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;

@end
