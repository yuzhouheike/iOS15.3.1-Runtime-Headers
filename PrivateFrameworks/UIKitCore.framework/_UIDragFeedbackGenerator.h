/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {
    _UIFeedback<_UIFeedbackContinuousPlayable> * _playingContinuousFeedback;
    long long  _state;
}

@property (getter=_dragConfiguration, nonatomic, readonly) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;
@property (getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:, nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (getter=_state, setter=_setState:, nonatomic) long long state;

+ (Class)_configurationClass;

- (void).cxx_destruct;
- (id)_dragConfiguration;
- (id)_playingContinuousFeedback;
- (void)_setPlayingContinuousFeedback:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_startPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (long long)_state;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
