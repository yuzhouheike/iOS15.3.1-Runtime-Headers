/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaClientEvent : SISchemaTopLevelUnionType {
    SISchemaAnnounceCarPlayBannerTapped * _announceCarPlayBannerTapped;
    SISchemaAnnounceCarPlayGlyphSettingToggled * _announceCarPlayGlyphSettingToggled;
    SISchemaAudioFirstBufferRecorded * _audioFirstBufferRecorded;
    SISchemaAudioStopRecording * _audioStopRecording;
    SISchemaAudioStopRecordingStarted * _audioStopRecordingStarted;
    SISchemaCarPlayHeadUnitContext * _carPlayHeadUnitContext;
    SISchemaCasinoRelationship * _casinoRelationship;
    SISchemaConversationTrace * _clientConversationTrace;
    SISchemaClientFlow * _clientFlow;
    SISchemaDeviceDynamicContext * _deviceDynamicContext;
    SISchemaDeviceFixedContext * _deviceFixedContext;
    SISchemaDeviceLockStateChanged * _deviceLockStateChanged;
    SISchemaDialogOutput * _dialogOutput;
    SISchemaDictationAlternativeSelected * _dictationAlternativeSelected;
    SISchemaDictationAlternativesViewed * _dictationAlternativesViewed;
    SISchemaDictationContentEdited * _dictationContentEdited;
    SISchemaDictationContext * _dictationContext;
    SISchemaDictationEndPointCancel * _dictationEndPointCancel;
    SISchemaDictationEndPointStop * _dictationEndPointStop;
    SISchemaDictationTranscriptionMetadata * _dictationTranscriptionMetadata;
    SISchemaEngagedAccessoryContext * _engagedAccessoryContext;
    SISchemaClientEventMetadata * _eventMetadata;
    bool  _hasAnnounceCarPlayBannerTapped;
    bool  _hasAnnounceCarPlayGlyphSettingToggled;
    bool  _hasAudioFirstBufferRecorded;
    bool  _hasAudioStopRecording;
    bool  _hasAudioStopRecordingStarted;
    bool  _hasCarPlayHeadUnitContext;
    bool  _hasCasinoRelationship;
    bool  _hasClientConversationTrace;
    bool  _hasClientFlow;
    bool  _hasDeviceDynamicContext;
    bool  _hasDeviceFixedContext;
    bool  _hasDeviceLockStateChanged;
    bool  _hasDialogOutput;
    bool  _hasDictationAlternativeSelected;
    bool  _hasDictationAlternativesViewed;
    bool  _hasDictationContentEdited;
    bool  _hasDictationContext;
    bool  _hasDictationEndPointCancel;
    bool  _hasDictationEndPointStop;
    bool  _hasDictationTranscriptionMetadata;
    bool  _hasEngagedAccessoryContext;
    bool  _hasEventMetadata;
    bool  _hasIntercomMessageRecorded;
    bool  _hasInvocation;
    bool  _hasKeyboardDismissed;
    bool  _hasLocation;
    bool  _hasPnrFatalError;
    bool  _hasPnrSpeechRecognitionSourceContext;
    bool  _hasPnrTextToSpeechRequestReceived;
    bool  _hasPunchOut;
    bool  _hasSiriCue;
    bool  _hasSpeechTranscription;
    bool  _hasTextToSpeechBegin;
    bool  _hasTextToSpeechEnd;
    bool  _hasTransportMetadata;
    bool  _hasTurnMTERequest;
    bool  _hasUeiLaunchContext;
    bool  _hasUeiRequestCategorization;
    bool  _hasUeiUIRenderingContext;
    bool  _hasUeiUUFRReady;
    bool  _hasUeiUserSpeakingContext;
    bool  _hasUiStateTransition;
    bool  _hasUserViewRegionInteraction;
    bool  _hasUufrCompletion;
    bool  _hasUufrFatalError;
    bool  _hasUufrPresented;
    bool  _hasUufrSaid;
    bool  _hasUufrShown;
    bool  _hasUufrShownTier1;
    SISchemaIntercomMessageRecorded * _intercomMessageRecorded;
    SISchemaInvocation * _invocation;
    SISchemaKeyboardDismissed * _keyboardDismissed;
    SISchemaLocation * _location;
    SISchemaPNRFatalError * _pnrFatalError;
    SISchemaPNRSpeechRecognitionSourceContext * _pnrSpeechRecognitionSourceContext;
    SISchemaPNRTextToSpeechRequestReceived * _pnrTextToSpeechRequestReceived;
    SISchemaPunchOut * _punchOut;
    SISchemaSiriCue * _siriCue;
    SISchemaSpeechTranscription * _speechTranscription;
    SISchemaTextToSpeechBegin * _textToSpeechBegin;
    SISchemaTextToSpeechEnd * _textToSpeechEnd;
    SISchemaClientTransportEventMetadata * _transportMetadata;
    SISchemaTurnMTERequest * _turnMTERequest;
    SISchemaUEILaunchContext * _ueiLaunchContext;
    SISchemaUEIRequestCategorization * _ueiRequestCategorization;
    SISchemaUEIUIRenderingContext * _ueiUIRenderingContext;
    SISchemaUEIUUFRReady * _ueiUUFRReady;
    SISchemaUEIUserSpeakingContext * _ueiUserSpeakingContext;
    SISchemaUIStateTransition * _uiStateTransition;
    SISchemaUserViewRegionInteraction * _userViewRegionInteraction;
    SISchemaUUFRCompletion * _uufrCompletion;
    SISchemaUUFRFatalError * _uufrFatalError;
    SISchemaUUFRPresented * _uufrPresented;
    SISchemaUUFRSaid * _uufrSaid;
    SISchemaUUFRShown * _uufrShown;
    SISchemaUUFRShownTier1 * _uufrShownTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SISchemaAnnounceCarPlayBannerTapped *announceCarPlayBannerTapped;
@property (nonatomic, retain) SISchemaAnnounceCarPlayGlyphSettingToggled *announceCarPlayGlyphSettingToggled;
@property (nonatomic, retain) SISchemaAudioFirstBufferRecorded *audioFirstBufferRecorded;
@property (nonatomic, retain) SISchemaAudioStopRecording *audioStopRecording;
@property (nonatomic, retain) SISchemaAudioStopRecordingStarted *audioStopRecordingStarted;
@property (nonatomic, retain) SISchemaCarPlayHeadUnitContext *carPlayHeadUnitContext;
@property (nonatomic, retain) SISchemaCasinoRelationship *casinoRelationship;
@property (nonatomic, retain) SISchemaConversationTrace *clientConversationTrace;
@property (nonatomic, retain) SISchemaClientFlow *clientFlow;
@property (nonatomic, retain) SISchemaDeviceDynamicContext *deviceDynamicContext;
@property (nonatomic, retain) SISchemaDeviceFixedContext *deviceFixedContext;
@property (nonatomic, retain) SISchemaDeviceLockStateChanged *deviceLockStateChanged;
@property (nonatomic, retain) SISchemaDialogOutput *dialogOutput;
@property (nonatomic, retain) SISchemaDictationAlternativeSelected *dictationAlternativeSelected;
@property (nonatomic, retain) SISchemaDictationAlternativesViewed *dictationAlternativesViewed;
@property (nonatomic, retain) SISchemaDictationContentEdited *dictationContentEdited;
@property (nonatomic, retain) SISchemaDictationContext *dictationContext;
@property (nonatomic, retain) SISchemaDictationEndPointCancel *dictationEndPointCancel;
@property (nonatomic, retain) SISchemaDictationEndPointStop *dictationEndPointStop;
@property (nonatomic, retain) SISchemaDictationTranscriptionMetadata *dictationTranscriptionMetadata;
@property (nonatomic, retain) SISchemaEngagedAccessoryContext *engagedAccessoryContext;
@property (nonatomic, retain) SISchemaClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasAnnounceCarPlayBannerTapped;
@property (nonatomic) bool hasAnnounceCarPlayGlyphSettingToggled;
@property (nonatomic) bool hasAudioFirstBufferRecorded;
@property (nonatomic) bool hasAudioStopRecording;
@property (nonatomic) bool hasAudioStopRecordingStarted;
@property (nonatomic) bool hasCarPlayHeadUnitContext;
@property (nonatomic) bool hasCasinoRelationship;
@property (nonatomic) bool hasClientConversationTrace;
@property (nonatomic) bool hasClientFlow;
@property (nonatomic) bool hasDeviceDynamicContext;
@property (nonatomic) bool hasDeviceFixedContext;
@property (nonatomic) bool hasDeviceLockStateChanged;
@property (nonatomic) bool hasDialogOutput;
@property (nonatomic) bool hasDictationAlternativeSelected;
@property (nonatomic) bool hasDictationAlternativesViewed;
@property (nonatomic) bool hasDictationContentEdited;
@property (nonatomic) bool hasDictationContext;
@property (nonatomic) bool hasDictationEndPointCancel;
@property (nonatomic) bool hasDictationEndPointStop;
@property (nonatomic) bool hasDictationTranscriptionMetadata;
@property (nonatomic) bool hasEngagedAccessoryContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasIntercomMessageRecorded;
@property (nonatomic) bool hasInvocation;
@property (nonatomic) bool hasKeyboardDismissed;
@property (nonatomic) bool hasLocation;
@property (nonatomic) bool hasPnrFatalError;
@property (nonatomic) bool hasPnrSpeechRecognitionSourceContext;
@property (nonatomic) bool hasPnrTextToSpeechRequestReceived;
@property (nonatomic) bool hasPunchOut;
@property (nonatomic) bool hasSiriCue;
@property (nonatomic) bool hasSpeechTranscription;
@property (nonatomic) bool hasTextToSpeechBegin;
@property (nonatomic) bool hasTextToSpeechEnd;
@property (nonatomic) bool hasTransportMetadata;
@property (nonatomic) bool hasTurnMTERequest;
@property (nonatomic) bool hasUeiLaunchContext;
@property (nonatomic) bool hasUeiRequestCategorization;
@property (nonatomic) bool hasUeiUIRenderingContext;
@property (nonatomic) bool hasUeiUUFRReady;
@property (nonatomic) bool hasUeiUserSpeakingContext;
@property (nonatomic) bool hasUiStateTransition;
@property (nonatomic) bool hasUserViewRegionInteraction;
@property (nonatomic) bool hasUufrCompletion;
@property (nonatomic) bool hasUufrFatalError;
@property (nonatomic) bool hasUufrPresented;
@property (nonatomic) bool hasUufrSaid;
@property (nonatomic) bool hasUufrShown;
@property (nonatomic) bool hasUufrShownTier1;
@property (nonatomic, retain) SISchemaIntercomMessageRecorded *intercomMessageRecorded;
@property (nonatomic, retain) SISchemaInvocation *invocation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaKeyboardDismissed *keyboardDismissed;
@property (nonatomic, retain) SISchemaLocation *location;
@property (nonatomic, retain) SISchemaPNRFatalError *pnrFatalError;
@property (nonatomic, retain) SISchemaPNRSpeechRecognitionSourceContext *pnrSpeechRecognitionSourceContext;
@property (nonatomic, retain) SISchemaPNRTextToSpeechRequestReceived *pnrTextToSpeechRequestReceived;
@property (nonatomic, retain) SISchemaPunchOut *punchOut;
@property (nonatomic, retain) SISchemaSiriCue *siriCue;
@property (nonatomic, retain) SISchemaSpeechTranscription *speechTranscription;
@property (nonatomic, retain) SISchemaTextToSpeechBegin *textToSpeechBegin;
@property (nonatomic, retain) SISchemaTextToSpeechEnd *textToSpeechEnd;
@property (nonatomic, retain) SISchemaClientTransportEventMetadata *transportMetadata;
@property (nonatomic, retain) SISchemaTurnMTERequest *turnMTERequest;
@property (nonatomic, retain) SISchemaUEILaunchContext *ueiLaunchContext;
@property (nonatomic, retain) SISchemaUEIRequestCategorization *ueiRequestCategorization;
@property (nonatomic, retain) SISchemaUEIUIRenderingContext *ueiUIRenderingContext;
@property (nonatomic, retain) SISchemaUEIUUFRReady *ueiUUFRReady;
@property (nonatomic, retain) SISchemaUEIUserSpeakingContext *ueiUserSpeakingContext;
@property (nonatomic, retain) SISchemaUIStateTransition *uiStateTransition;
@property (nonatomic, retain) SISchemaUserViewRegionInteraction *userViewRegionInteraction;
@property (nonatomic, retain) SISchemaUUFRCompletion *uufrCompletion;
@property (nonatomic, retain) SISchemaUUFRFatalError *uufrFatalError;
@property (nonatomic, retain) SISchemaUUFRPresented *uufrPresented;
@property (nonatomic, retain) SISchemaUUFRSaid *uufrSaid;
@property (nonatomic, retain) SISchemaUUFRShown *uufrShown;
@property (nonatomic, retain) SISchemaUUFRShownTier1 *uufrShownTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (Class)getEventTypeClassForTag:(int)arg1;
+ (id)getTagForEventTypeClass:(Class)arg1;

- (void).cxx_destruct;
- (id)announceCarPlayBannerTapped;
- (id)announceCarPlayGlyphSettingToggled;
- (id)audioFirstBufferRecorded;
- (id)audioStopRecording;
- (id)audioStopRecordingStarted;
- (id)carPlayHeadUnitContext;
- (id)casinoRelationship;
- (id)clientConversationTrace;
- (id)clientFlow;
- (id)deviceDynamicContext;
- (id)deviceFixedContext;
- (id)deviceLockStateChanged;
- (id)dialogOutput;
- (id)dictationAlternativeSelected;
- (id)dictationAlternativesViewed;
- (id)dictationContentEdited;
- (id)dictationContext;
- (id)dictationEndPointCancel;
- (id)dictationEndPointStop;
- (id)dictationTranscriptionMetadata;
- (id)dictionaryRepresentation;
- (id)engagedAccessoryContext;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getEventType;
- (bool)hasAnnounceCarPlayBannerTapped;
- (bool)hasAnnounceCarPlayGlyphSettingToggled;
- (bool)hasAudioFirstBufferRecorded;
- (bool)hasAudioStopRecording;
- (bool)hasAudioStopRecordingStarted;
- (bool)hasCarPlayHeadUnitContext;
- (bool)hasCasinoRelationship;
- (bool)hasClientConversationTrace;
- (bool)hasClientFlow;
- (bool)hasDeviceDynamicContext;
- (bool)hasDeviceFixedContext;
- (bool)hasDeviceLockStateChanged;
- (bool)hasDialogOutput;
- (bool)hasDictationAlternativeSelected;
- (bool)hasDictationAlternativesViewed;
- (bool)hasDictationContentEdited;
- (bool)hasDictationContext;
- (bool)hasDictationEndPointCancel;
- (bool)hasDictationEndPointStop;
- (bool)hasDictationTranscriptionMetadata;
- (bool)hasEngagedAccessoryContext;
- (bool)hasEventMetadata;
- (bool)hasIntercomMessageRecorded;
- (bool)hasInvocation;
- (bool)hasKeyboardDismissed;
- (bool)hasLocation;
- (bool)hasPnrFatalError;
- (bool)hasPnrSpeechRecognitionSourceContext;
- (bool)hasPnrTextToSpeechRequestReceived;
- (bool)hasPunchOut;
- (bool)hasSiriCue;
- (bool)hasSpeechTranscription;
- (bool)hasTextToSpeechBegin;
- (bool)hasTextToSpeechEnd;
- (bool)hasTransportMetadata;
- (bool)hasTurnMTERequest;
- (bool)hasUeiLaunchContext;
- (bool)hasUeiRequestCategorization;
- (bool)hasUeiUIRenderingContext;
- (bool)hasUeiUUFRReady;
- (bool)hasUeiUserSpeakingContext;
- (bool)hasUiStateTransition;
- (bool)hasUserViewRegionInteraction;
- (bool)hasUufrCompletion;
- (bool)hasUufrFatalError;
- (bool)hasUufrPresented;
- (bool)hasUufrSaid;
- (bool)hasUufrShown;
- (bool)hasUufrShownTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intercomMessageRecorded;
- (id)invocation;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)keyboardDismissed;
- (id)location;
- (id)pnrFatalError;
- (id)pnrSpeechRecognitionSourceContext;
- (id)pnrTextToSpeechRequestReceived;
- (id)punchOut;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAnnounceCarPlayBannerTapped:(id)arg1;
- (void)setAnnounceCarPlayGlyphSettingToggled:(id)arg1;
- (void)setAudioFirstBufferRecorded:(id)arg1;
- (void)setAudioStopRecording:(id)arg1;
- (void)setAudioStopRecordingStarted:(id)arg1;
- (void)setCarPlayHeadUnitContext:(id)arg1;
- (void)setCasinoRelationship:(id)arg1;
- (void)setClientConversationTrace:(id)arg1;
- (void)setClientFlow:(id)arg1;
- (void)setDeviceDynamicContext:(id)arg1;
- (void)setDeviceFixedContext:(id)arg1;
- (void)setDeviceLockStateChanged:(id)arg1;
- (void)setDialogOutput:(id)arg1;
- (void)setDictationAlternativeSelected:(id)arg1;
- (void)setDictationAlternativesViewed:(id)arg1;
- (void)setDictationContentEdited:(id)arg1;
- (void)setDictationContext:(id)arg1;
- (void)setDictationEndPointCancel:(id)arg1;
- (void)setDictationEndPointStop:(id)arg1;
- (void)setDictationTranscriptionMetadata:(id)arg1;
- (void)setEngagedAccessoryContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setHasAnnounceCarPlayBannerTapped:(bool)arg1;
- (void)setHasAnnounceCarPlayGlyphSettingToggled:(bool)arg1;
- (void)setHasAudioFirstBufferRecorded:(bool)arg1;
- (void)setHasAudioStopRecording:(bool)arg1;
- (void)setHasAudioStopRecordingStarted:(bool)arg1;
- (void)setHasCarPlayHeadUnitContext:(bool)arg1;
- (void)setHasCasinoRelationship:(bool)arg1;
- (void)setHasClientConversationTrace:(bool)arg1;
- (void)setHasClientFlow:(bool)arg1;
- (void)setHasDeviceDynamicContext:(bool)arg1;
- (void)setHasDeviceFixedContext:(bool)arg1;
- (void)setHasDeviceLockStateChanged:(bool)arg1;
- (void)setHasDialogOutput:(bool)arg1;
- (void)setHasDictationAlternativeSelected:(bool)arg1;
- (void)setHasDictationAlternativesViewed:(bool)arg1;
- (void)setHasDictationContentEdited:(bool)arg1;
- (void)setHasDictationContext:(bool)arg1;
- (void)setHasDictationEndPointCancel:(bool)arg1;
- (void)setHasDictationEndPointStop:(bool)arg1;
- (void)setHasDictationTranscriptionMetadata:(bool)arg1;
- (void)setHasEngagedAccessoryContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasIntercomMessageRecorded:(bool)arg1;
- (void)setHasInvocation:(bool)arg1;
- (void)setHasKeyboardDismissed:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasPnrFatalError:(bool)arg1;
- (void)setHasPnrSpeechRecognitionSourceContext:(bool)arg1;
- (void)setHasPnrTextToSpeechRequestReceived:(bool)arg1;
- (void)setHasPunchOut:(bool)arg1;
- (void)setHasSiriCue:(bool)arg1;
- (void)setHasSpeechTranscription:(bool)arg1;
- (void)setHasTextToSpeechBegin:(bool)arg1;
- (void)setHasTextToSpeechEnd:(bool)arg1;
- (void)setHasTransportMetadata:(bool)arg1;
- (void)setHasTurnMTERequest:(bool)arg1;
- (void)setHasUeiLaunchContext:(bool)arg1;
- (void)setHasUeiRequestCategorization:(bool)arg1;
- (void)setHasUeiUIRenderingContext:(bool)arg1;
- (void)setHasUeiUUFRReady:(bool)arg1;
- (void)setHasUeiUserSpeakingContext:(bool)arg1;
- (void)setHasUiStateTransition:(bool)arg1;
- (void)setHasUserViewRegionInteraction:(bool)arg1;
- (void)setHasUufrCompletion:(bool)arg1;
- (void)setHasUufrFatalError:(bool)arg1;
- (void)setHasUufrPresented:(bool)arg1;
- (void)setHasUufrSaid:(bool)arg1;
- (void)setHasUufrShown:(bool)arg1;
- (void)setHasUufrShownTier1:(bool)arg1;
- (void)setIntercomMessageRecorded:(id)arg1;
- (void)setInvocation:(id)arg1;
- (void)setKeyboardDismissed:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPnrFatalError:(id)arg1;
- (void)setPnrSpeechRecognitionSourceContext:(id)arg1;
- (void)setPnrTextToSpeechRequestReceived:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setSiriCue:(id)arg1;
- (void)setSpeechTranscription:(id)arg1;
- (void)setTextToSpeechBegin:(id)arg1;
- (void)setTextToSpeechEnd:(id)arg1;
- (void)setTransportMetadata:(id)arg1;
- (void)setTurnMTERequest:(id)arg1;
- (void)setUeiLaunchContext:(id)arg1;
- (void)setUeiRequestCategorization:(id)arg1;
- (void)setUeiUIRenderingContext:(id)arg1;
- (void)setUeiUUFRReady:(id)arg1;
- (void)setUeiUserSpeakingContext:(id)arg1;
- (void)setUiStateTransition:(id)arg1;
- (void)setUserViewRegionInteraction:(id)arg1;
- (void)setUufrCompletion:(id)arg1;
- (void)setUufrFatalError:(id)arg1;
- (void)setUufrPresented:(id)arg1;
- (void)setUufrSaid:(id)arg1;
- (void)setUufrShown:(id)arg1;
- (void)setUufrShownTier1:(id)arg1;
- (id)siriCue;
- (id)speechTranscription;
- (id)textToSpeechBegin;
- (id)textToSpeechEnd;
- (id)transportMetadata;
- (id)turnMTERequest;
- (id)ueiLaunchContext;
- (id)ueiRequestCategorization;
- (id)ueiUIRenderingContext;
- (id)ueiUUFRReady;
- (id)ueiUserSpeakingContext;
- (id)uiStateTransition;
- (id)userViewRegionInteraction;
- (id)uufrCompletion;
- (id)uufrFatalError;
- (id)uufrPresented;
- (id)uufrSaid;
- (id)uufrShown;
- (id)uufrShownTier1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
