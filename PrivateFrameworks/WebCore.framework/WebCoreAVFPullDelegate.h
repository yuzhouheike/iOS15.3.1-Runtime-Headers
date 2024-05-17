/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { 
            void *m_ptr; 
        } m_impl; 
    }  _player;
    struct BinarySemaphore { 
        bool m_isSet; 
        struct Lock { 
            struct Atomic<unsigned char> { 
                struct atomic<unsigned char> { 
                    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                        _Atomic unsigned char __a_value; 
                    } __a_; 
                } value; 
            } m_byte; 
        } m_lock; 
        struct Condition { 
            struct Atomic<bool> { 
                struct atomic<bool> { 
                    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                        _Atomic bool __a_value; 
                    } __a_; 
                } value; 
            } m_hasWaiters; 
        } m_condition; 
    }  m_semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*semaphore;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPlayer:(void*)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void*)semaphore;

@end
