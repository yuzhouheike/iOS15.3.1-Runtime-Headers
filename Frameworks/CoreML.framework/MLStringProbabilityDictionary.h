/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLStringProbabilityDictionary : MLProbabilityDictionary {
    struct map<std::string, unsigned long, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> { 
        struct __tree<std::__value_type<std::string, unsigned long>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _mapStrLabelToIndex;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::string' */ struct  mapStrLabelToIndex; /* unknown property attribute:  true>>=Q}}} */

+ (id)probabilityDictionaryForStringLabels:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copy;
- (unsigned long long)count;
- (id)initWithStrLabels:(id)arg1;
- (id)keyEnumerator;
- (struct map<std::string, unsigned long, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> { struct __tree<std::__value_type<std::string, unsigned long>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, unsigned long>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })mapStrLabelToIndex;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setMapStrLabelToIndex:(struct map<std::string, unsigned long, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> { struct __tree<std::__value_type<std::string, unsigned long>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, unsigned long>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned long>, std::less<std::string>, true>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
