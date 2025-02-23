/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementMessageRequest : NSObject {
    NSArray * _actions;
    NSDictionary * _appearanceInfo;
    AMSEngagementMessageAction * _defaultAction;
    NSURL * _iconURL;
    AMSMetricsEvent * _metricsEvent;
    long long  _presentationAction;
    long long  _style;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) NSDictionary *appearanceInfo;
@property (nonatomic, retain) AMSEngagementMessageAction *defaultAction;
@property (nonatomic, retain) NSURL *iconURL;
@property (nonatomic, retain) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long presentationAction;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_actionForMessageAction:(id)arg1;
- (id)actions;
- (id)appearanceInfo;
- (id)defaultAction;
- (id)iconURL;
- (id)initWithJSObject:(id)arg1;
- (id)makeDialogRequest;
- (id)metricsEvent;
- (long long)presentationAction;
- (void)setActions:(id)arg1;
- (void)setAppearanceInfo:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setMetricsEvent:(id)arg1;
- (void)setPresentationAction:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)subtitle;
- (id)title;

@end
