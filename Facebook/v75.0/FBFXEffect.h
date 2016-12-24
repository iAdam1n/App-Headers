/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIView, UIImage, FBFXCoordinator;

@interface FBFXEffect : NSObject {

	BOOL _running;
	UIView* _view;
	UIImage* _image;
	CVBufferRef _imageBuffer;
	FBFXCoordinator* _coordinator;
	/*^block*/id _completion;
	Snapshot* _snapshot;
	BOOL _invalidatedSnapshot;
	BOOL _useOnScreenContentFastSnapshotting;
	BOOL _rotate90Degrees;
	BOOL _flipHorizontally;

}

@property (nonatomic,readonly) UIView * effectView; 
@property (assign,nonatomic) BOOL useOnScreenContentFastSnapshotting;              //@synthesize useOnScreenContentFastSnapshotting=_useOnScreenContentFastSnapshotting - In the implementation block
@property (assign,nonatomic) BOOL useSetNeedsDisplay; 
@property (assign,nonatomic) BOOL rotate90Degrees;                                 //@synthesize rotate90Degrees=_rotate90Degrees - In the implementation block
@property (assign,nonatomic) BOOL flipHorizontally;                                //@synthesize flipHorizontally=_flipHorizontally - In the implementation block
-(void)animate:(double)arg1 ;
-(void)renderWithCoordinator:(id)arg1 ;
-(void)setUseSetNeedsDisplay:(BOOL)arg1 ;
-(BOOL)useSetNeedsDisplay;
-(void)_FBFXCommonInit;
-(void)run:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animate:(float)arg1 finished:(BOOL*)arg2 ;
-(BOOL)requiresNoTexturePadding;
-(BOOL)supportsEdgeAntialiasing;
-(void)renderWithRect:(CGRect)arg1 transform:(tmat4x4<float>)arg2 texture:(unsigned)arg3 texCoordExtent:(TexCoordExtent)arg4 alpha:(float)arg5 ;
-(id)initWithView:(id)arg1 image:(id)arg2 ;
-(id)initWithView:(id)arg1 imageBuffer:(CVBufferRef)arg2 ;
-(void)invalidateSnapshot;
-(BOOL)useOnScreenContentFastSnapshotting;
-(void)setUseOnScreenContentFastSnapshotting:(BOOL)arg1 ;
-(BOOL)rotate90Degrees;
-(void)setRotate90Degrees:(BOOL)arg1 ;
-(id)init;
-(void)cancel;
-(void)setNeedsDisplay;
-(void)teardown;
-(UIView *)effectView;
-(void)run;
-(BOOL)flipHorizontally;
-(void)setFlipHorizontally:(BOOL)arg1 ;
-(void)stop:(BOOL)arg1 ;
@end
