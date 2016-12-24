/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>
#import <SportyTrader/FBAdUpdatableView.h>

@protocol FBAdBlurredImageViewDelegate;
@class UIImage, CIImage, UIImageView, EAGLContext, CIContext, GLKView, NSString;

@interface FBAdBlurredImageView : UIView <FBAdUpdatableView> {

	BOOL _needsImageBlurring;
	UIImage* _image;
	CIImage* _blurredImage;
	id<FBAdBlurredImageViewDelegate> _delegate;
	UIImageView* _imageView;
	EAGLContext* _eaglContext;
	CIContext* _ciContext;
	GLKView* _glView;

}

@property (nonatomic,retain) UIImage * image;                                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CIImage * blurredImage;                                        //@synthesize blurredImage=_blurredImage - In the implementation block
@property (nonatomic,readonly) CIContext * context; 
@property (assign,nonatomic,__weak) id<FBAdBlurredImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) EAGLContext * eaglContext;                                     //@synthesize eaglContext=_eaglContext - In the implementation block
@property (nonatomic,retain) CIContext * ciContext;                                         //@synthesize ciContext=_ciContext - In the implementation block
@property (assign,nonatomic,__weak) GLKView * glView;                                       //@synthesize glView=_glView - In the implementation block
@property (assign,nonatomic) BOOL needsImageBlurring;                                       //@synthesize needsImageBlurring=_needsImageBlurring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImage:(id)arg1 withBlurredImage:(id)arg2 ;
-(GLKView *)glView;
-(BOOL)needsImageBlurring;
-(void)setGlView:(GLKView *)arg1 ;
-(void)setNeedsImageBlurring:(BOOL)arg1 ;
-(void)setupViewsWithImage:(id)arg1 withBlurredImage:(id)arg2 ;
-(void)updateNeedsImageBlurring;
-(FBAspectRatioInfo)infoForRequestedSize:(CGSize)arg1 ;
-(void)safeDestroyEAGLContext;
-(void)setCiContext:(CIContext *)arg1 ;
-(void)updateView:(BOOL)arg1 ;
-(void)setBlurredImage:(CIImage *)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<FBAdBlurredImageViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id<FBAdBlurredImageViewDelegate>)delegate;
-(UIImage *)image;
-(CIContext *)context;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(CIImage *)blurredImage;
-(EAGLContext *)eaglContext;
-(void)setEaglContext:(EAGLContext *)arg1 ;
-(CIContext *)ciContext;
@end
