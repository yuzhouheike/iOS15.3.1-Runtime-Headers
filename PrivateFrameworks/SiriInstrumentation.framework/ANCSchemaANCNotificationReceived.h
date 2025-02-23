/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ANCSchemaANCNotificationReceived : SISchemaInstrumentationMessage {
    int  _announcementCategory;
    int  _appCategory;
    ANCSchemaANCAudioDevice * _connectedAudioDevice;
    struct { 
        unsigned int announcementCategory : 1; 
        unsigned int targetPlatform : 1; 
        unsigned int isTimeSensitiveAnnouncement : 1; 
        unsigned int appCategory : 1; 
    }  _has;
    bool  _hasConnectedAudioDevice;
    bool  _hasLinkId;
    bool  _isTimeSensitiveAnnouncement;
    SISchemaUUID * _linkId;
    int  _targetPlatform;
}

@property (nonatomic) int announcementCategory;
@property (nonatomic) int appCategory;
@property (nonatomic, retain) ANCSchemaANCAudioDevice *connectedAudioDevice;
@property (nonatomic) bool hasAnnouncementCategory;
@property (nonatomic) bool hasAppCategory;
@property (nonatomic) bool hasConnectedAudioDevice;
@property (nonatomic) bool hasIsTimeSensitiveAnnouncement;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasTargetPlatform;
@property (nonatomic) bool isTimeSensitiveAnnouncement;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) int targetPlatform;

- (void).cxx_destruct;
- (int)announcementCategory;
- (int)appCategory;
- (id)connectedAudioDevice;
- (id)dictionaryRepresentation;
- (bool)hasAnnouncementCategory;
- (bool)hasAppCategory;
- (bool)hasConnectedAudioDevice;
- (bool)hasIsTimeSensitiveAnnouncement;
- (bool)hasLinkId;
- (bool)hasTargetPlatform;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTimeSensitiveAnnouncement;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setAnnouncementCategory:(int)arg1;
- (void)setAppCategory:(int)arg1;
- (void)setConnectedAudioDevice:(id)arg1;
- (void)setHasAnnouncementCategory:(bool)arg1;
- (void)setHasAppCategory:(bool)arg1;
- (void)setHasConnectedAudioDevice:(bool)arg1;
- (void)setHasIsTimeSensitiveAnnouncement:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasTargetPlatform:(bool)arg1;
- (void)setIsTimeSensitiveAnnouncement:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setTargetPlatform:(int)arg1;
- (int)targetPlatform;
- (void)writeTo:(id)arg1;

@end
