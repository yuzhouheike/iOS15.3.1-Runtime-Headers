/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DADConnection : NSObject {
    NSMutableSet * _accountIdsWithAlreadyResetCerts;
    NSMutableSet * _accountIdsWithAlreadyResetThrottleTimers;
    NSObject<OS_xpc_object> * _conn;
    NSMutableDictionary * _inFlightAttachmentDownloads;
    NSMutableDictionary * _inFlightCalendarAvailabilityRequests;
    NSMutableDictionary * _inFlightCalendarDirectorySearches;
    NSMutableDictionary * _inFlightFolderChanges;
    NSMutableDictionary * _inFlightGrantedDelegatesListRequests;
    NSMutableDictionary * _inFlightGroupExpansions;
    NSMutableDictionary * _inFlightOfficeHoursRequests;
    NSMutableDictionary * _inFlightOofSettingsRequests;
    NSMutableDictionary * _inFlightSearchQueries;
    NSMutableDictionary * _inFlightShareRequests;
    NSMutableDictionary * _inFlightSubscribedCalendarDownloads;
    NSMutableDictionary * _inFlightUpdateGrantedDelegatePermissionRequests;
    NSObject<OS_dispatch_queue> * _muckingWithConn;
    NSObject<OS_dispatch_queue> * _muckingWithInFlightCollections;
    bool  _registered;
    id /* block */  _statusReportBlock;
}

@property (nonatomic) bool registered;

+ (unsigned long long)_nextStopMonitoringStatusToken;
+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (bool)_checkInvalidIdExistsInXPCRely:(id)arg1;
- (id)_connection;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (void)_dispatchMessage:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_downloadSubscribedCalendarFinished:(id)arg1;
- (void)_downloadSubscribedCalendarProgress:(id)arg1;
- (void)_downloadSubscribedCalendarRequiresPassword:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_grantedDelegatesListRequestFinished:(id)arg1;
- (void)_groupExpansionFinished:(id)arg1;
- (id)_init;
- (void)_initializeConnection;
- (void)_initializeConnectionWithXPCEndpoint:(id)arg1;
- (void)_initializeXPCConnection:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_officeHoursRequestFinished:(id)arg1;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (bool)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(bool)arg3;
- (void)_policyKeyChanged:(id)arg1;
- (void)_registerForAppResumedNotification;
- (void)_requestDaemonChangeAgentMonitoringStatus:(bool)arg1 withToken:(unsigned long long)arg2 waitForReply:(bool)arg3;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(bool)arg3;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(id /* block */)arg2;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_tearDownInFlightObjects;
- (void)_updateGrantedDelegatePermissionRequestFinished:(id)arg1;
- (bool)_validateXPCReply:(id)arg1;
- (id)activeSyncDeviceIdentifier;
- (void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)beginCalDAVServerSimulationWithHostname:(id)arg1;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)cancelDownloadingSubscriptionCalendarWithDownloadID:(id)arg1;
- (void)cancelGrantedDelegatesListRequestWithID:(id)arg1;
- (void)cancelServerContactsSearch:(id)arg1;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (void)dealloc;
- (id)decodedErrorFromData:(id)arg1;
- (id)downloadSubscribedCalendarWithURL:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)endCalDAVServerSimulationWithHostname:(id)arg1;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(id /* block */)arg2;
- (void)externalIdentificationInfoForAccountID:(id)arg1 resultsBlock:(id /* block */)arg2;
- (void)fetchOfficeHoursForAccountWithID:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)fillOutCurrentEASTimeZoneInfo;
- (void)handleAccountChange:(id)arg1 callback:(id /* block */)arg2;
- (void)handleURL:(id)arg1;
- (id)init;
- (void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)performGroupExpansionWithAccountID:(id)arg1 principalPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (bool)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)reallyRegisterForInterrogation;
- (bool)registerForInterrogationWithBlock:(id /* block */)arg1;
- (bool)registered;
- (void)reportFolderItemsSyncSuccess:(bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)reportSubscriptionCalendarAsJunk:(id)arg1;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;
- (void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1;
- (void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1;
- (unsigned long long)requestDaemonStopMonitoringAgents;
- (unsigned long long)requestDaemonStopMonitoringAgentsSync;
- (id)requestGrantedDelegatesListForAccountID:(id)arg1 resultsBlock:(id /* block */)arg2;
- (bool)requestPolicyUpdateForAccountID:(id)arg1;
- (void)resetTimersAndWarnings;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (void)setOfficeHours:(id)arg1 forAccountWithID:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setRegistered:(bool)arg1;
- (id)statusReports;
- (bool)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2;
- (bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(bool)arg3;
- (bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(bool)arg3;
- (bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3;
- (bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(bool)arg4;
- (bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(bool)arg4;
- (bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2;
- (bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(bool)arg3;
- (bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(bool)arg3 isUserRequested:(bool)arg4;
- (id)updateGrantedDelegateForAccountID:(id)arg1 grantedDelegate:(id)arg2 action:(long long)arg3 resultsBlock:(id /* block */)arg4;
- (bool)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (void)validateCandidateSubscriptionURLWithICloud:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(bool)arg3;

@end
