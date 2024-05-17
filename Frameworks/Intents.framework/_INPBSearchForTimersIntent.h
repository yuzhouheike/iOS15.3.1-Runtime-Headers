/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForTimersIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForTimersIntent> {
    double  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int state : 1; 
        unsigned int type : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _label;
    int  _state;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDataString *label;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDuration;
- (bool)hasIntentMetadata;
- (bool)hasLabel;
- (bool)hasState;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setState:(int)arg1;
- (void)setType:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
