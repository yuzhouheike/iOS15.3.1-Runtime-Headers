/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalDrawable : NSObject <CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI> {
    <MTLTexture> * _cachedTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dirtyRect;
    unsigned long long  _drawableID;
    unsigned int  _insertSeed;
    CAMetalLayer * _layer;
    NSMutableArray * _presentScheduledHandlers;
    unsigned int  _presentScheduledInsertSeed;
    bool  _presentScheduledInsertSeedValid;
    NSMutableArray * _presentedHandlers;
    double  _presentedTime;
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct _CAMetalLayerPrivate {} *x8; struct __IOSurface {} *x9; id x10; id x11; struct CGColorSpace {} *x12; unsigned char x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; } * _priv;
    IOSurfaceSharedEvent * _sharedEvent;
    unsigned long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dirtyRect;
@property (nonatomic) unsigned long long drawableID;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int insertSeed;
@property (readonly) CAMetalLayer *layer;
@property (nonatomic) unsigned int presentScheduledInsertSeed;
@property (nonatomic) bool presentScheduledInsertSeedValid;
@property (nonatomic) double presentedTime;
@property (nonatomic, retain) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (readonly) <MTLTexture> *texture;

- (void).cxx_destruct;
- (void)addPresentScheduledHandler:(id /* block */)arg1;
- (void)addPresentedHandler:(id /* block */)arg1;
- (id)cachedTexture;
- (void)dealloc;
- (void)didPresentAtTime:(double)arg1;
- (void)didScheduledPresent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dirtyRect;
- (unsigned long long)drawableID;
- (bool)hasPresentedHandlers;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct _CAMetalLayerPrivate {} *x8; struct __IOSurface {} *x9; id x10; id x11; struct CGColorSpace {} *x12; unsigned char x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; }*)arg1 layer:(id)arg2;
- (unsigned int)insertSeed;
- (id)layer;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (unsigned int)presentScheduledInsertSeed;
- (bool)presentScheduledInsertSeedValid;
- (double)presentedTime;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct _CAMetalLayerPrivate {} *x8; struct __IOSurface {} *x9; id x10; id x11; struct CGColorSpace {} *x12; unsigned char x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; }*)priv;
- (void)releasePrivateReferences:(void*)arg1;
- (void)setDirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawableID:(unsigned long long)arg1;
- (void)setInsertSeed:(unsigned int)arg1;
- (void)setPresentScheduledInsertSeed:(unsigned int)arg1;
- (void)setPresentScheduledInsertSeedValid:(bool)arg1;
- (void)setPresentedTime:(double)arg1;
- (void)setSharedEvent:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id)sharedEvent;
- (unsigned long long)status;
- (id)texture;

@end
