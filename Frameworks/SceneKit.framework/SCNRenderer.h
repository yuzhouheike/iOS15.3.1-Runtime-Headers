/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNRenderer : NSObject <SCNMTLRenderContextCommandBufferStatusMonitor, SCNMTLRenderContextResourceManagerMonitor, SCNSceneRenderer, SCNTechniqueSupport> {
    unsigned long long  __antialiasingMode;
    double  __aspectRatio;
    void __drawableSafeAreaInsets;
    double  __nextFrameTime;
    unsigned long long  __preparePixelFormat;
    NSObject<OS_dispatch_queue> * __renderingQueue;
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  __viewport;
    unsigned int  _adaptativeEndFrame;
    unsigned int  _adaptativeState0;
    unsigned int  _adaptativeTechniqueTimeStamp;
    SCNAuthoringEnvironment * _authoringEnvironment;
    unsigned int  _autoUpdate;
    UIColor * _backgroundColor;
    struct C3DColor4 { 
        union { 
            float rgba[4]; 
            struct { 
                float r; 
                float g; 
                float b; 
                float a; 
            } ; 
            /* Warning: Unrecognized filer type: ')' using 'void*' */ void*simd; 
        } ; 
    }  _c3dBackgroundColor;
    <_SCNSceneCommandBufferStatusMonitor> * _commandBufferStatusMonitor;
    float  _contentScaleFactor;
    double  _currentSceneTime;
    double  _currentSystemTime;
    unsigned long long  _debugOptions;
    id  _delegate;
    struct { 
        unsigned int supportsUpdate : 1; 
        unsigned int supportsDidApplyAnimations : 1; 
        unsigned int supportsDidSimulatePhysics : 1; 
        unsigned int supportsDidApplyConstraints : 1; 
        unsigned int supportsWillRender : 1; 
        unsigned int supportsDidRender : 1; 
        unsigned int supportsInputTime : 1; 
        unsigned int supportsReadSubdivCache : 1; 
        unsigned int supportsWriteSubdivCache : 1; 
    }  _delegationConformance;
    double  _deltaTime;
    unsigned int  _disableLinearRendering;
    bool  _disableOverlays;
    struct __C3DEngineContext { } * _engineContext;
    double  _forceSystemTime;
    struct { 
        struct __C3DFramebuffer {} *frameBuffer; 
        struct __C3DFramebuffer {} *multisamplingFrameBuffer; 
        struct CGSize { 
            double width; 
            double height; 
        } drawableSize; 
    }  _framebufferInfo;
    unsigned int  _frozen;
    EAGLContext * _glContext;
    bool  _isAnimating;
    unsigned int  _isPrivateRenderer;
    bool  _isRunningInExtension;
    unsigned int  _isViewPrivateRenderer;
    unsigned int  _jitteringEnabled;
    double  _lastSystemTime;
    SCNRecursiveLock * _lock;
    bool  _loops;
    <MTLTexture> * _mtlTexture;
    __SKSCNRenderer * _overlayRenderer;
    id  _overlayScene;
    bool  _playing;
    SCNNode * _pointOfCulling;
    SCNNode * _pointOfView;
    bool  _pointOfViewWasSet;
    SCNRenderer * _preloadRenderer;
    <SCNSceneRenderer> * _privateRendererOwner;
    struct { 
        unsigned int supportsUpdate : 1; 
        unsigned int supportsDidApplyAnimations : 1; 
        unsigned int supportsDidSimulatePhysics : 1; 
        unsigned int supportsDidApplyConstraints : 1; 
        unsigned int supportsWillRender : 1; 
        unsigned int supportsDidRender : 1; 
        unsigned int supportsInputTime : 1; 
        unsigned int supportsReadSubdivCache : 1; 
        unsigned int supportsWriteSubdivCache : 1; 
    }  _privateRendererOwnerDelegationConformance;
    SCNMTLRenderContext * _renderContext;
    unsigned long long  _renderingAPI;
    unsigned int  _renderingPrepare;
    unsigned int  _renderingSnapshot;
    unsigned int  _rendersContinuously;
    <_SCNSceneRendererResourceManagerMonitor> * _resourceManagerMonitor;
    SCNScene * _scene;
    struct { 
        unsigned int supportsUpdate : 1; 
        unsigned int supportsDidApplyAnimations : 1; 
        unsigned int supportsDidSimulatePhysics : 1; 
        unsigned int supportsDidApplyConstraints : 1; 
        unsigned int supportsWillRender : 1; 
        unsigned int supportsDidRender : 1; 
        unsigned int supportsInputTime : 1; 
        unsigned int supportsReadSubdivCache : 1; 
        unsigned int supportsWriteSubdivCache : 1; 
    }  _selfDelegationConformance;
    unsigned int  _shouldDeleteFramebuffer;
    unsigned int  _shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner;
    unsigned int  _shouldForwardSceneRendererDelegationMessagesToSelf;
    bool  _showAuthoringEnvironment;
    bool  _showStatistics;
    SCNRenderer * _snapshotRenderer;
    double  _statisticsTimeStamp;
    SCNTechnique * _technique;
    unsigned int  _temporalAntialiasingEnabled;
    SCNRendererTransitionContext * _transitionContext;
    NSArray * _viewPoints;
}

@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (nonatomic, retain) SCNNode *audioListener;
@property (nonatomic) bool autoenablesDefaultLighting;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly) <MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentViewport;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long debugOptions;
@property (nonatomic) <SCNSceneRendererDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long depthPixelFormat;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (getter=isJitteringEnabled, nonatomic) bool jitteringEnabled;
@property (nonatomic) bool loops;
@property (nonatomic, readonly) double nextFrameTime;
@property (nonatomic, retain) SKScene *overlaySKScene;
@property (getter=isPlaying) bool playing;
@property (nonatomic, retain) SCNNode *pointOfView;
@property (nonatomic, readonly) unsigned long long renderingAPI;
@property (nonatomic, retain) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (nonatomic) bool showsStatistics;
@property (nonatomic, readonly) unsigned long long stencilPixelFormat;
@property (readonly) Class superclass;
@property (nonatomic, copy) SCNTechnique *technique;
@property (getter=isTemporalAntialiasingEnabled, nonatomic) bool temporalAntialiasingEnabled;
@property (nonatomic) bool usesReverseZ;

+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
+ (id)rendererWithDevice:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)MTLTexture;
- (void)_UIOrientationDidChangeNotification:(id)arg1;
- (const void*)__CFObject;
- (void)__setTransitionContext:(id)arg1;
- (void)_addGPUFrameCompletedHandler:(id /* block */)arg1;
- (void)_addGPUFramePresentedHandler:(id /* block */)arg1;
- (void)_addGPUFrameScheduledHandler:(id /* block */)arg1;
- (unsigned long long)_antialiasingMode;
- (double)_aspectRatio;
- (id)_authoringEnvironment;
- (struct CGSize { double x1; double x2; })_backingSize;
- (void)_beginFrame;
- (void)_c3dBackgroundColorDidChange;
- (void)_clearBackBuffer;
- (bool)_collectCompilationErrors;
- (id)_commandBufferStatusMonitor;
- (id)_compilationErrors;
- (double)_computeNextFrameTime;
- (id)_computedLightingEnvironmentMapsPath;
- (double)_contentsScaleFactor;
- (id)_copyPassDescription;
- (id)_copyPerformanceStatistics;
- (id)_copyRenderGraphDescription;
- (struct CGImage { }*)_createBackgroundColorImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_createOffscreenFramebufferIfNeeded;
- (void)_createPrepareFramebufferIfNeeded;
- (struct CGImage { }*)_createSnapshotAtTime:(double)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 antialiasingMode:(unsigned long long)arg3;
- (struct CGImage { }*)_createSnapshotAtTime:(double)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 antialiasingMode:(unsigned long long)arg3 error:(id*)arg4;
- (id)_defaultPOVForScene:(id)arg1;
- (void)_deleteGLFramebuffer;
- (void)_didRenderScene:(id)arg1;
- (bool)_disableLinearRendering;
- (void)_displayLinkStatsTack;
- (void)_displayLinkStatsTick;
- (void)_draw;
- (void)_drawAtTime:(double)arg1;
- (void)_drawOverlaySceneAtTime:(double)arg1;
- (void)_drawScene:(struct __C3DScene { }*)arg1;
- (bool)_drawSceneWithLegacyRenderer:(struct __C3DScene { }*)arg1;
- (bool)_drawSceneWithNewRenderer:(struct __C3DScene { }*)arg1;
- (void)_drawWithJitteringPresentationMode;
- (void)_drawableSafeAreaInsets;
- (bool)_enableARMode;
- (bool)_enablesDeferredShading;
- (void)_endFrame;
- (struct __C3DEngineContext { }*)_engineContext;
- (long long)_getFrameIndex;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 viewport:(struct CGSize { double x1; double x2; })arg2 options:(id)arg3;
- (id)_initWithOptions:(id)arg1 isPrivateRenderer:(bool)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(bool)arg4 context:(void*)arg5 renderingAPI:(unsigned long long)arg6;
- (bool)_installContext;
- (void)_installGLContextAndSetViewport;
- (void)_installViewport;
- (void)_interfaceOrientationDidChange;
- (void)_invalidateFramebuffer;
- (bool)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg3;
- (void)_jitterAtStep:(unsigned long long)arg1 updateMainFramebuffer:(bool)arg2 redisplay:(bool)arg3 jitterer:(id)arg4;
- (bool)_needsRedrawAsap;
- (bool)_needsRepetitiveRedraw;
- (double)_nextFrameTime;
- (id)_nodesInsideFrustumWithPointOfView:(id)arg1 viewport:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg2;
- (void)_overlaysDidUpdate:(id)arg1;
- (void)_pause;
- (void)_play;
- (bool)_preloadResource:(id)arg1 abortHandler:(id /* block */)arg2;
- (void)_prepareForTransition:(id)arg1 outgoingScene:(id)arg2 outgoingPointOfView:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_prepareGLRenderTarget;
- (bool)_prepareObject:(id)arg1 shouldAbortBlock:(id /* block */)arg2;
- (unsigned long long)_preparePixelFormat;
- (bool)_preparePreloadRenderer:(id)arg1;
- (void)_prepareRenderTarget;
- (id)_prepareSKRenderer;
- (void)_presentFramebuffer;
- (struct SCNVector3 { float x1; float x2; float x3; })_projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 viewport:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg2;
- (void)_projectPoints:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(unsigned long long)arg2 viewport:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg3;
- (id)_readSubdivCacheForHash:(id)arg1;
- (bool)_recordWithoutExecute;
- (void)_releasePreloadRenderer;
- (void)_reloadDebugOptions;
- (void)_renderAtTime:(double)arg1;
- (void)_renderAtTime:(double)arg1 viewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 commandBuffer:(id)arg6;
- (id)_renderContextMetal;
- (void)_renderGraphFrameRecordingAtPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_renderSceneWithEngineContext:(struct __C3DEngineContext { }*)arg1 sceneTime:(double)arg2;
- (struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; unsigned int x8; struct __C3DTexture {} *x9; struct __C3DStack {} *x10; void *x11; bool x12; bool x13; bool x14; bool x15; bool x16; struct __CFDictionary {} *x17; unsigned int x18; struct __CFDictionary {} *x19; struct __CFDictionary {} *x20; struct __CFDictionary {} *x21; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_22_1_1; } x22; void *x23; long long x24; struct __C3DFXProgramObject {} *x25; struct __C3DEngineStats { unsigned int x_26_1_1; unsigned int x_26_1_2; unsigned int x_26_1_3; unsigned int x_26_1_4; unsigned int x_26_1_5; unsigned int x_26_1_6; unsigned int x_26_1_7; unsigned int x_26_1_8; unsigned int x_26_1_9; unsigned int x_26_1_10; unsigned int x_26_1_11; unsigned int x_26_1_12; unsigned int x_26_1_13; unsigned int x_26_1_14; unsigned int x_26_1_15; unsigned int x_26_1_16; unsigned int x_26_1_17; unsigned int x_26_1_18; unsigned int x_26_1_19; unsigned int x_26_1_20; unsigned int x_26_1_21; unsigned int x_26_1_22; unsigned int x_26_1_23; unsigned int x_26_1_24; double x_26_1_25; double x_26_1_26; double x_26_1_27; double x_26_1_28; double x_26_1_29; double x_26_1_30; double x_26_1_31; double x_26_1_32; double x_26_1_33; double x_26_1_34; double x_26_1_35; double x_26_1_36; double x_26_1_37; double x_26_1_38; double x_26_1_39; unsigned int x_26_1_40; unsigned int x_26_1_41; unsigned int x_26_1_42; unsigned int x_26_1_43; unsigned int x_26_1_44; unsigned int x_26_1_45; unsigned int x_26_1_46; unsigned int x_26_1_47; } x26; }*)_rendererContextGL;
- (id)_renderingQueue;
- (void)_resolveAndDiscardGL;
- (id)_resourceManagerMonitor;
- (void)_runningInExtension;
- (unsigned long long)_sampleCount;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_screenTransform;
- (void)_setBackingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setContentsScaleFactor:(double)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setSceneTime:(double)arg1;
- (void)_setupOffscreenRendererWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_setupSKRendererIfNeeded;
- (bool)_shouldDelegateARCompositing;
- (bool)_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner;
- (bool)_showsAuthoringEnvironment;
- (void)_stop;
- (double)_superSamplingFactor;
- (double)_systemTime;
- (struct SCNVector3 { float x1; float x2; float x3; })_unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 viewport:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg2;
- (void)_update:(struct __C3DScene { }*)arg1;
- (void)_updateEngineCallbacks;
- (void)_updatePointOfView;
- (void)_updateProbes:(id)arg1 withProgress:(id)arg2;
- (void)_updateSystemTimeAndDeltaTimeWithCurrentTime:(double)arg1;
- (void)_updateWithSystemTime:(double)arg1;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })_viewport;
- (bool)_wantsSceneRendererDelegationMessages;
- (void)_willRenderScene:(id)arg1;
- (void)_writeSubdivCacheForHash:(id)arg1 dataProvider:(id /* block */)arg2;
- (void)adjustViewportForRendering;
- (id)audioEngine;
- (id)audioEnvironmentNode;
- (id)audioListener;
- (bool)autoAdjustCamera;
- (bool)autoenablesDefaultLighting;
- (id)backgroundColor;
- (unsigned long long)colorPixelFormat;
- (id)commandQueue;
- (void*)context;
- (struct CGImage { }*)createSnapshot:(double)arg1 error:(id*)arg2;
- (id)currentCommandBuffer;
- (id)currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
- (double)currentTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentViewport;
- (void)dealloc;
- (unsigned long long)debugOptions;
- (id)delegate;
- (unsigned long long)depthPixelFormat;
- (id)description;
- (id)device;
- (bool)disableOverlays;
- (bool)frozen;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 options:(id)arg3;
- (id)init;
- (bool)isJitteringEnabled;
- (bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (bool)isPlaying;
- (bool)isTemporalAntialiasingEnabled;
- (bool)jitteringEnabled;
- (void)lock;
- (bool)loops;
- (id)metalDevice;
- (id)metalLayer;
- (double)nextFrameTime;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (id)overlaySKScene;
- (id)pointOfCulling;
- (id)pointOfView;
- (bool)prepareObject:(id)arg1 shouldAbortBlock:(id /* block */)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)privateRendererOwner;
- (id)programWithNode:(id)arg1 withMaterial:(id)arg2;
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)render;
- (void)renderAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1 commandBuffer:(id)arg2 viewPoints:(id)arg3;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5;
- (void)renderContext:(id)arg1 commandBufferDidCompleteWithError:(id)arg2;
- (void)renderContext:(id)arg1 didFallbackToDefaultTextureForSource:(id)arg2 message:(id)arg3;
- (bool)renderMovieToURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 antialiasingMode:(unsigned long long)arg3 attributes:(id)arg4 error:(id*)arg5;
- (void)renderWithCommandBuffer:(id)arg1 viewPoints:(id)arg2;
- (void)renderWithViewpoints:(id)arg1 events:(id)arg2;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3;
- (unsigned long long)renderingAPI;
- (void)resolvedBackgroundColorDidChange;
- (id)scene;
- (double)sceneTime;
- (void)setAudioListener:(id)arg1;
- (void)setAutoAdjustCamera:(bool)arg1;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableOverlays:(bool)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setJitteringEnabled:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setOverlaySKScene:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfCulling:(id)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setRendersContinuously:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setScene:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(bool)arg1;
- (void)setTechnique:(id)arg1;
- (void)setTemporalAntialiasingEnabled:(bool)arg1;
- (void)setUsesReverseZ:(bool)arg1;
- (void)set_antialiasingMode:(unsigned long long)arg1;
- (void)set_aspectRatio:(double)arg1;
- (void)set_collectCompilationErrors:(bool)arg1;
- (void)set_commandBufferStatusMonitor:(id)arg1;
- (void)set_computedLightingEnvironmentMapsPath:(id)arg1;
- (void)set_deltaTime:(double)arg1;
- (void)set_disableLinearRendering:(bool)arg1;
- (void)set_drawableSafeAreaInsets;
- (void)set_enableARMode:(bool)arg1;
- (void)set_enablesDeferredShading:(bool)arg1;
- (void)set_nextFrameTime:(double)arg1;
- (void)set_preparePixelFormat:(unsigned long long)arg1;
- (void)set_recordWithoutExecute:(bool)arg1;
- (void)set_resourceManagerMonitor:(id)arg1;
- (void)set_screenTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)set_shouldDelegateARCompositing:(bool)arg1;
- (void)set_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner:(bool)arg1;
- (void)set_showsAuthoringEnvironment:(bool)arg1;
- (void)set_superSamplingFactor:(double)arg1;
- (void)set_systemTime:(double)arg1;
- (void)set_viewport:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)set_wantsSceneRendererDelegationMessages:(bool)arg1;
- (void)setupAuthoringEnvironment;
- (bool)showsStatistics;
- (id)snapshotAtTime:(double)arg1;
- (id)snapshotAtTime:(double)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 antialiasingMode:(unsigned long long)arg3;
- (id)snapshotAtTime:(double)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 antialiasingMode:(unsigned long long)arg3 error:(id*)arg4;
- (id)snapshotRendererWithSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)stencilPixelFormat;
- (id)technique;
- (bool)temporalAntialiasingEnabled;
- (void)unlock;
- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)updateAndDrawStatisticsIfNeeded;
- (void)updateAtTime:(double)arg1;
- (void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1;
- (void)updateProbes:(id)arg1 atTime:(double)arg2;
- (bool)usesReverseZ;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewport;

@end
