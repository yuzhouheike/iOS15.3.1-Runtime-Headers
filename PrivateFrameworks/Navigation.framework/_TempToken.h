/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _TempToken : NSObject <GEOServerFormatToken> {
    NSString * _accessibilityLabel;
    <GEOTransitArtworkDataSource> * _artworkValue;
    <GEOServerFormatTokenCountdownValue> * _countdownValue;
    <GEOServerFormatTokenManeuverValue> * _maneuverValue;
    <GEOServerFormatTokenNumberData> * _numberData;
    float  _percentageValue;
    <GEOServerFormatTokenPriceValue> * _priceValue;
    bool  _shouldScaleUnits;
    NSString * _stringValue;
    NSArray * _timeStampValues;
    NSString * _token;
    long long  _type;
    <GEOServerFormatTokenUrlValue> * _urlValue;
    unsigned int  _value1;
    unsigned int  _value2;
    NSArray * _value3s;
}

@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, retain) <GEOTransitArtworkDataSource> *artworkValue;
@property (nonatomic, retain) <GEOServerFormatTokenCountdownValue> *countdownValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GEOServerFormatTokenManeuverValue> *maneuverValue;
@property (nonatomic, retain) <GEOServerFormatTokenNumberData> *numberData;
@property (nonatomic) float percentageValue;
@property (nonatomic, retain) <GEOServerFormatTokenPriceValue> *priceValue;
@property (nonatomic, readonly) bool shouldScaleUnits;
@property (nonatomic, retain) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *timeStampValues;
@property (nonatomic, retain) NSString *token;
@property (nonatomic) long long type;
@property (nonatomic, retain) <GEOServerFormatTokenUrlValue> *urlValue;
@property (nonatomic) unsigned int value1;
@property (nonatomic) unsigned int value2;
@property (nonatomic, retain) NSArray *value3s;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)artworkValue;
- (id)countdownValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1;
- (id)maneuverValue;
- (id)numberData;
- (float)percentageValue;
- (id)priceValue;
- (void)setArtworkValue:(id)arg1;
- (void)setCountdownValue:(id)arg1;
- (void)setManeuverValue:(id)arg1;
- (void)setNumberData:(id)arg1;
- (void)setPercentageValue:(float)arg1;
- (void)setPriceValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTimeStampValues:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrlValue:(id)arg1;
- (void)setValue1:(unsigned int)arg1;
- (void)setValue2:(unsigned int)arg1;
- (void)setValue3s:(id)arg1;
- (bool)shouldScaleUnits;
- (id)stringValue;
- (id)timeStampValues;
- (id)token;
- (long long)type;
- (id)urlValue;
- (unsigned int)value1;
- (unsigned int)value2;
- (id)value3s;

@end
