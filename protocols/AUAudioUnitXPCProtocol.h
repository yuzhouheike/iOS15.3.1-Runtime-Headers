/* Generated by RuntimeBrowser.
 */

@protocol AUAudioUnitXPCProtocol <_AURemoteParameterSynchronization>

@required

- (void)addPropertyObserver:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: AUAudioUnitProperty *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelSpeechRequest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)close:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)createRenderPipe:(void *)arg1 formats:(void *)arg2 maxFrames:(void *)arg3 midiOutSizeHint:(void *)arg4 resources:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: int, NSData *, unsigned int, unsigned int, NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned int, void*
- (void)deleteUserPreset:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: AUAudioUnitPreset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)destroyRenderPipe:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disableProfile:(void *)arg1 cable:(void *)arg2 onChannel:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: MIDICIProfile *, unsigned char, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enableProfile:(void *)arg1 cable:(void *)arg2 onChannel:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: MIDICIProfile *, unsigned char, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getBusses:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)getParameter:(void *)arg1 sequenceNumber:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, float, void*
- (void)getParameterTree:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, AUParameterTree *, void*
- (void)getSpeechVoices:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)initialize:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 13: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned long long, unsigned long long, unsigned long long, NSData *, bool, unsigned int, void*
- (void)loadUserPresets:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)open:(void *)arg1; // needs 1 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, NSArray *, NSArray *, bool, bool, int, unsigned long long, unsigned long long, void*
- (void)parameterNode:(void *)arg1 displayNameWithLength:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)parameterStringFromValue:(void *)arg1 currentValue:(void *)arg2 address:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: float, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)parameterValueFromString:(void *)arg1 address:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, float, void*
- (void)parametersForOverviewWithCount:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)presetStateFor:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: AUAudioUnitPreset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*
- (void)profileStateForCable:(void *)arg1 channel:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned char, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, MIDICIProfileState *, void*
- (void)removePropertyObserver:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: AUAudioUnitProperty *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reset:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveUserPreset:(void *)arg1 state:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: AUAudioUnitPreset *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)selectViewConfiguration:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: AUAudioUnitViewConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBusCount:(void *)arg1 scope:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)setBusFormat:(void *)arg1 scope:(void *)arg2 format:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: unsigned int, unsigned int, AVAudioFormat *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)setValue:(void *)arg1 forKey:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: id, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)setValue:(void *)arg1 forProperty:(void *)arg2 propagateError:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: id, AUAudioUnitProperty *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)supportedViewConfigurations:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSIndexSet *, void*
- (void)synthesizeSpeechRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: AVSpeechSynthesisProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)uninitialize:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateHostCallbacks:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateWorkgroupMirror:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)valueForKey:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, id, void*
- (void)valueForProperty:(void *)arg1 propagateError:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: AUAudioUnitProperty *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, id, void*

@end
