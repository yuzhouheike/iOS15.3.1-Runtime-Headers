/* Generated by RuntimeBrowser.
 */

@protocol MRLegacyControllerDelegate <NSObject>

@required

- (void)legacyController:(MRLegacyController *)arg1 masterVolumeDidChange:(float)arg2;
- (void)legacyController:(MRLegacyController *)arg1 volumeControlAvailabilityDidChange:(bool)arg2 forOutputDevice:(NSString *)arg3;
- (void)legacyController:(MRLegacyController *)arg1 volumeDidChange:(float)arg2 forOutputDevice:(NSString *)arg3;

@optional

- (void)legacyControllerConnectionDidConnect:(MRLegacyController *)arg1;
- (void)legacyControllerConnectionDidDisconnect:(MRLegacyController *)arg1 withError:(NSError *)arg2;

@end
