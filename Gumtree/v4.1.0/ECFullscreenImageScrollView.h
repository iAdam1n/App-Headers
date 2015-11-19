/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImageView, NSString;

@interface ECFullscreenImageScrollView : UIScrollView <UIScrollViewDelegate> {

	float _zoomScaleBeforeMaxZoom;
	unsigned long long _index;
	/*^block*/id _tapHandler;
	UIImageView* _imageView;

}

@property (assign) unsigned long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) id tapHandler;                           //@synthesize tapHandler=_tapHandler - In the implementation block
@property (retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (assign) float zoomScaleBeforeMaxZoom;                    //@synthesize zoomScaleBeforeMaxZoom=_zoomScaleBeforeMaxZoom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageDisplayed;
-(CGPoint)pointToCenterAfterRotation;
-(double)scaleToRestoreAfterRotation;
-(void)setMaxMinZoomScalesForCurrentBounds;
-(void)restoreCenterPoint:(CGPoint)arg1 scale:(double)arg2 animated:(BOOL)arg3 ;
-(void)prepareForNewImage;
-(void)setupForImage:(id)arg1 ;
-(void)setupGestureRecognizers;
-(float)zoomScaleBeforeMaxZoom;
-(void)setZoomScaleBeforeMaxZoom:(float)arg1 ;
-(CGPoint)maximumContentOffset;
-(CGPoint)minimumContentOffset;
-(void)restoreCenterPoint:(CGPoint)arg1 scale:(double)arg2 ;
-(void)handleDoubleTap:(id)arg1 ;
-(void)setTapHandler:(id)arg1 ;
-(id)tapHandler;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(UIImageView *)imageView;
-(unsigned long long)index;
-(void)handleSingleTap:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
@end
