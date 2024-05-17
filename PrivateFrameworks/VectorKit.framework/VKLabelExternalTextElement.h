/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelExternalTextElement : NSObject <NSSecureCoding> {
    struct LabelExternalTextElement { 
        unsigned char minZoom; 
        unsigned char textType; 
        struct StringWithLocale { 
            struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { 
                struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { 
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
                    struct StdAllocator<char, mdm::Allocator> { 
                        struct Allocator {} *_allocator; 
                    } __value_; 
                } __r_; 
            } text; 
            struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { 
                struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { 
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
                    struct StdAllocator<char, mdm::Allocator> { 
                        struct Allocator {} *_allocator; 
                    } __value_; 
                } __r_; 
            } locale; 
        } text; 
        struct StringWithLocale { 
            struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { 
                struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { 
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
                    struct StdAllocator<char, mdm::Allocator> { 
                        struct Allocator {} *_allocator; 
                    } __value_; 
                } __r_; 
            } text; 
            struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { 
                struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { 
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
                    struct StdAllocator<char, mdm::Allocator> { 
                        struct Allocator {} *_allocator; 
                    } __value_; 
                } __r_; 
            } locale; 
        } localizedText; 
    }  _element;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (const void*)element;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextElement:(const void*)arg1;

@end
