/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconModifiers : NSObject {
    unsigned long long  _countryCode;
    struct IconModifiers { 
        bool _isClusterIcon; 
        bool _isGlyphHidden; 
        bool _isGlyphOnly; 
        bool _isInfoOnly; 
        bool _isMirrored; 
        bool _isLandmark; 
        bool _isSelected; 
        bool _useBalloonShape; 
        float _opacity; 
        float _scale; 
        struct optional<float> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                float type; 
            } _value; 
        } _pathScale; 
        unsigned char _component; 
        struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { 
                    struct Matrix<unsigned char, 4, 1> { 
                        unsigned char _e[4]; 
                    } _backing; 
                } type; 
            } _value; 
        } _customColor; 
        struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { 
                    struct Matrix<unsigned char, 4, 1> { 
                        unsigned char _e[4]; 
                    } _backing; 
                } type; 
            } _value; 
        } _shapeColor; 
        struct optional<float> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                float type; 
            } _value; 
        } _fontSize; 
        struct optional<float> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                float type; 
            } _value; 
        } _tailDirection; 
        struct optional<std::string> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[24]; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned long long __cap_; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    struct { 
                                        unsigned char __size_; 
                                    } ; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } type; 
            } _value; 
        } _textLocale; 
        struct map<unsigned short, std::string, std::less<unsigned short>, geo::StdAllocator<std::pair<const unsigned short, std::string>, grl::Allocator>> { 
            struct __tree<std::__value_type<unsigned short, std::string>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>, geo::StdAllocator<std::__value_type<unsigned short, std::string>, grl::Allocator>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                    struct StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator> { 
                        struct Allocator {} *_allocator; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _text; 
    }  _iconModifiers;
    bool  _interactive;
    bool  _navMode;
    bool  _nightMode;
    bool  _searchResult;
    unsigned long long  _secondaryVariant;
    bool  _transitMode;
    unsigned long long  _variant;
    long long  _zoom;
}

@property (nonatomic) unsigned long long countryCode;
@property (nonatomic) bool interactive;
@property (nonatomic) bool navMode;
@property (nonatomic) bool nightMode;
@property (getter=isSearchResult, nonatomic) bool searchResult;
@property (nonatomic) unsigned long long secondaryVariant;
@property (nonatomic) bool transitMode;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) long long zoom;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countryCode;
- (void*)cppModifiers;
- (id)init;
- (id)initWithModifiers:(const void*)arg1;
- (bool)interactive;
- (bool)isSearchResult;
- (bool)navMode;
- (bool)nightMode;
- (unsigned long long)secondaryVariant;
- (void)setCountryCode:(unsigned long long)arg1;
- (void)setGlyphOnly:(bool)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setNavMode:(bool)arg1;
- (void)setNightMode:(bool)arg1;
- (void)setSearchResult:(bool)arg1;
- (void)setSecondaryVariant:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setTransitLineColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setTransitMode:(bool)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (void)setZoom:(long long)arg1;
- (bool)transitMode;
- (unsigned long long)variant;
- (long long)zoom;

@end
