/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementMessageEvent : NSObject <AMSEngagementEvent> {
    NSArray * _placementInfo;
    NSString * _serviceType;
}

@property (retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *engagementData;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *placementInfo;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)engagementData;
- (id)initWithServiceType:(id)arg1 placementInfo:(id)arg2;
- (id)initWithServiceType:(id)arg1 placements:(id)arg2;
- (id)placementInfo;
- (id)serviceType;
- (void)setPlacementInfo:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
