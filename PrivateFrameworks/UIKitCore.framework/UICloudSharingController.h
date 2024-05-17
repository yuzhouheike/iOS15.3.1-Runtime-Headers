/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICloudSharingController : UIViewController <UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining, _UISharingPublicController> {
    unsigned long long  _availablePermissions;
    _UIResilientRemoteViewContainerViewController * _childViewController;
    CKContainer * _container;
    CKContainerSetupInfo * _containerSetupInfo;
    <UICloudSharingControllerDelegate> * _delegate;
    NSString * _folderSubitemName;
    UIImage * _headerPrimaryImage;
    UIImage * _headerSecondaryImage;
    <_UICloudSharingControllerDelegate_Internal> * _internalDelegate;
    bool  _isDelayingPresentation;
    UIViewController * _originalPresentingViewController;
    NSDictionary * _participantDetails;
    id /* block */  _preparationHandler;
    bool  _primaryAuxiliarySwitchState;
    NSString * _primaryAuxiliarySwitchTitle;
    _UIShareInvitationRemoteViewController * _remoteViewController;
    NSString * _rootFolderTitle;
    bool  _secondaryAuxiliarySwitchState;
    NSString * _secondaryAuxiliarySwitchTitle;
    CKShare * _share;
    bool  _shareNeedsDeletion;
    UIViewController * _strongReferenceToOurself;
    NSObject<OS_dispatch_semaphore> * _viewServiceValidSema;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic) unsigned long long availablePermissions;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CKContainerSetupInfo *containerSetupInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UICloudSharingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_folderSubitemName, setter=_setFolderSubitemName:, nonatomic, retain) NSString *folderSubitemName;
@property (readonly) unsigned long long hash;
@property (getter=_headerPrimaryImage, setter=_setHeaderPrimaryImage:, nonatomic, retain) UIImage *headerPrimaryImage;
@property (getter=_headerSecondaryImage, setter=_setHeaderSecondaryImage:, nonatomic, retain) UIImage *headerSecondaryImage;
@property (nonatomic) <_UICloudSharingControllerDelegate_Internal> *internalDelegate;
@property (getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:, nonatomic) UIViewController *originalPresentingViewController;
@property (getter=_participantDetails, setter=_setParticipantDetails:, nonatomic, retain) NSDictionary *participantDetails;
@property (nonatomic, copy) id /* block */ preparationHandler;
@property (getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:, nonatomic) bool primaryAuxiliarySwitchState;
@property (getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:, nonatomic, retain) NSString *primaryAuxiliarySwitchTitle;
@property (getter=_remoteViewController, nonatomic, readonly) _UIShareInvitationRemoteViewController *remoteViewController;
@property (getter=_rootFolderTitle, setter=_setRootFolderTitle:, nonatomic, retain) NSString *rootFolderTitle;
@property (getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:, nonatomic) bool secondaryAuxiliarySwitchState;
@property (getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:, nonatomic, retain) NSString *secondaryAuxiliarySwitchTitle;
@property (nonatomic, retain) CKShare *share;
@property (getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:, nonatomic, retain) UIViewController *strongReferenceToOurself;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (void)_callPreparationHandler:(id /* block */)arg1;
- (id)_childViewController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:(id)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(bool)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(bool)arg1;
- (bool)_commonInit;
- (id)_containedRemoteViewController;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_deleteShareAfterDismissalWithoutSave:(id /* block */)arg1;
- (void)_didDismiss;
- (void)_dismissForActivityRepresentation:(id /* block */)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (id)_folderSubitemName;
- (id)_headerPrimaryImage;
- (id)_headerSecondaryImage;
- (id)_originalPresentingViewController;
- (id)_participantDetails;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* block */)arg1;
- (bool)_primaryAuxiliarySwitchState;
- (id)_primaryAuxiliarySwitchTitle;
- (id)_remoteViewController;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)arg1;
- (void)_requestSavedShareWithCompletion:(id /* block */)arg1;
- (bool)_requiresCustomPresentationController;
- (id)_rootFolderTitle;
- (bool)_secondaryAuxiliarySwitchState;
- (id)_secondaryAuxiliarySwitchTitle;
- (void)_sendDidStopSharingDelegate;
- (void)_setChildViewController:(id)arg1;
- (void)_setFolderSubitemName:(id)arg1;
- (void)_setHeaderPrimaryImage:(id)arg1;
- (void)_setHeaderSecondaryImage:(id)arg1;
- (void)_setOriginalPresentingViewController:(id)arg1;
- (void)_setParticipantDetails:(id)arg1;
- (void)_setPrimaryAuxiliarySwitchState:(bool)arg1;
- (void)_setPrimaryAuxiliarySwitchTitle:(id)arg1;
- (void)_setRootFolderTitle:(id)arg1;
- (void)_setSecondaryAuxiliarySwitchState:(bool)arg1;
- (void)_setSecondaryAuxiliarySwitchTitle:(id)arg1;
- (void)_setStrongReferenceToOurself:(id)arg1;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (id)_sharingViewPresentationController;
- (id)_strongReferenceToOurself;
- (void)dealloc;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)activityItemSource;
- (unsigned long long)availablePermissions;
- (id)container;
- (id)containerSetupInfo;
- (id)delegate;
- (id)initWithPreparationHandler:(id /* block */)arg1;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (id)initWithShare:(id)arg1 preparationHandler:(id /* block */)arg2;
- (id)internalDelegate;
- (long long)modalPresentationStyle;
- (id /* block */)preparationHandler;
- (void)setAvailablePermissions:(unsigned long long)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerSetupInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setPreparationHandler:(id /* block */)arg1;
- (void)setShare:(id)arg1;
- (id)share;

@end
