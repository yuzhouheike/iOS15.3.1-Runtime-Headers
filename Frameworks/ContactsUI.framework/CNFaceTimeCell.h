/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate, CNContactActionsControllerDelegate, CNUIUserActionListConsumer> {
    CNActionMenuHelper * _actionMenuHelper;
    CNActionView * _actionView1;
    CNActionView * _actionView2;
    CNContactActionsController * _actionsController;
    <CNCustomPresentation> * _actionsControllerPresentation;
    CNUIUserActionListDataSource * _actionsDataSource;
    CNContact * _contact;
    UIContextMenuInteraction * _contextMenuInteraction;
    NSDictionary * _defaultActionPerType;
    <CNPropertyCellDelegate> * _delegate;
    UILabel * _faceTimeLabel;
    bool  _isFaceTimeAudioAvailable;
    <CNSchedulerProvider> * _schedulerProvider;
    NSArray * _supportedActionTypes;
    double  _throttleDelay;
    NSArray * _tokens;
}

@property (nonatomic, retain) CNActionMenuHelper *actionMenuHelper;
@property (nonatomic, readonly) CNActionView *actionView1;
@property (nonatomic, readonly) CNActionView *actionView2;
@property (nonatomic, retain) CNContactActionsController *actionsController;
@property (nonatomic, retain) <CNCustomPresentation> *actionsControllerPresentation;
@property (nonatomic, retain) CNUIUserActionListDataSource *actionsDataSource;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *defaultActionPerType;
@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *faceTimeLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFaceTimeAudioAvailable;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedActionTypes;
@property (nonatomic, readonly) double throttleDelay;
@property (nonatomic, copy) NSArray *tokens;

- (void).cxx_destruct;
- (id)actionMenuHelper;
- (id)actionView1;
- (id)actionView2;
- (id)actionViewForType:(id)arg1;
- (bool)actionViewShouldPresentDisambiguationUI:(id)arg1;
- (id)actionsController;
- (id)actionsControllerPresentation;
- (id)actionsDataSource;
- (id)allModelsObservable;
- (id)constantConstraints;
- (id)contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)contextMenuInteraction;
- (id)defaultActionPerType;
- (id)delegate;
- (void)didPressActionView:(id)arg1 longPress:(bool)arg2;
- (void)didSelectActionType:(id)arg1 withSourceView:(id)arg2 longPress:(bool)arg3;
- (void)discoverAvailableActionTypes;
- (id)faceTimeLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isFaceTimeAudioAvailable;
- (id)labelView;
- (void)loadCachedActions;
- (double)minCellHeight;
- (void)performAction:(id)arg1;
- (void)performDefaultAction;
- (void)processModels:(id)arg1;
- (void)reset;
- (id)rightMostView;
- (id)schedulerProvider;
- (void)setActionMenuHelper:(id)arg1;
- (void)setActionsController:(id)arg1;
- (void)setActionsControllerPresentation:(id)arg1;
- (void)setActionsDataSource:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setDefaultActionPerType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFaceTimeAudioAvailable:(bool)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setSupportedActionTypes:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)supportedActionTypes;
- (double)throttleDelay;
- (void)tintColorDidChange;
- (id)tokens;
- (void)updateHorizontalTouchAreas;
- (id)variableConstraints;

@end
