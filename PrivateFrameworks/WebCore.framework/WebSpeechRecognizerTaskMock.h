/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebSpeechRecognizerTaskMock : WebSpeechRecognizerTask {
    bool  _completed;
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)>="m_block"@? {}  _delegateCallback;
    bool  _doMultipleRecognitions;
    bool  _hasSentSpeechEnd;
    bool  _hasSentSpeechStart;
    struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> { 
        unsigned long long m_identifier; 
    }  _identifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abort;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithIdentifier:(struct ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> { unsigned long long x1; })arg1 locale:(id)arg2 doMultipleRecognitions:(bool)arg3 reportInterimResults:(bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(id /* block */)arg6;
- (void)stop;

@end
