/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext> {
    bool  _actionExecutionWasAttemted;
    NSString * _channelIdentifier;
}

@property (nonatomic, readonly) <CNUIUserActionCurator> *actionCurator;
@property (nonatomic) bool actionExecutionWasAttemted;
@property (nonatomic, readonly) <CNUIUserActionRecorder> *actionRecorder;
@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) BSServiceConnectionEndpoint *connectionEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNUIUserActionDialRequestOpener> *dialRequestOpener;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOriginatingFromFavorites;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNUIUserActionURLOpener> *urlOpener;
@property (nonatomic, readonly) <CNUIUserActionUserActivityOpener> *userActivityOpener;

- (void).cxx_destruct;
- (id)actionCurator;
- (bool)actionExecutionWasAttemted;
- (id)actionRecorder;
- (id)channelIdentifier;
- (id)dialRequestOpener;
- (id)nilValue;
- (void)setActionExecutionWasAttemted:(bool)arg1;
- (void)setChannelIdentifier:(id)arg1;
- (id)urlOpener;
- (id)userActivityOpener;

@end
