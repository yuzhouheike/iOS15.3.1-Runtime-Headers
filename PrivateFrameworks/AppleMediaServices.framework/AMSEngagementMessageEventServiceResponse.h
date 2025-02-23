/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementMessageEventServiceResponse : NSObject {
    AMSDialogRequest * _dialogRequest;
    AMSEngagementRequest * _engagementRequest;
    NSDictionary * _placementRequests;
    NSDictionary * _placements;
    NSString * _serviceType;
}

@property (nonatomic, retain) AMSDialogRequest *dialogRequest;
@property (nonatomic, retain) AMSEngagementRequest *engagementRequest;
@property (nonatomic, retain) NSDictionary *placementRequests;
@property (nonatomic, retain) NSDictionary *placements;
@property (nonatomic, retain) NSString *serviceType;

- (void).cxx_destruct;
- (long long)_engagementPresentationStyleFromDictionary:(id)arg1;
- (id)_makeEngagementRequestWithDictionary:(id)arg1;
- (id)_placementRequestsWithDictionary:(id)arg1;
- (id)_placementWithDictionary:(id)arg1;
- (id)dialogRequest;
- (id)engagementRequest;
- (id)initWithJSObject:(id)arg1;
- (id)placementRequests;
- (id)placements;
- (id)serviceType;
- (void)setDialogRequest:(id)arg1;
- (void)setEngagementRequest:(id)arg1;
- (void)setPlacementRequests:(id)arg1;
- (void)setPlacements:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
