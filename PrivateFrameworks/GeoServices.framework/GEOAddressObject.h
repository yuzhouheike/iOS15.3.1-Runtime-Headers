/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol> {
    int * _knownAccuracy;
    _GEOAddressObject * _pimpl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayLanguage;
@property (nonatomic, readonly) bool hasKnownAccuracy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int knownAccuracy;
@property (readonly) Class superclass;

+ (id)addressObjectForPlaceData:(id)arg1;
+ (id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4;
+ (bool)isLoggingDebug;
+ (bool)isMarkingMMStrings;
+ (id)libraryVersion;
+ (void)markMMStrings:(bool)arg1;
+ (void)setLoggingDebug:(bool)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)addressDictionary;
- (id)cityDisplayNameWithFallback:(bool)arg1;
- (id)cnPostalAddress;
- (id)countryName;
- (void)dealloc;
- (id)displayLanguage;
- (id)fullAddressNoCurrentCountryWithMultiline:(bool)arg1;
- (id)fullAddressWithMultiline:(bool)arg1;
- (id)fullAddressWithMultiline:(bool)arg1 relative:(id)arg2;
- (bool)hasKnownAccuracy;
- (unsigned long long)hash;
- (id)initWithCNPostalAddress:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)initWithContactAddressDictionary:(id)arg1 langauge:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)initWithCurrentCountry;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
- (bool)isEqual:(id)arg1;
- (int)knownAccuracy;
- (id)locationAddress;
- (id)name;
- (id)parkingDisplayName;
- (id)phoneticAddress;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (id)rawBytes;
- (id)shortAddress;
- (id)spokenAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)titlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)venueLabel;
- (id)venueLabel:(long long)arg1;
- (id)venueLevel;
- (id)venueShortAddress;
- (id)weatherDisplayName;
- (id)weatherLocationName;

@end
