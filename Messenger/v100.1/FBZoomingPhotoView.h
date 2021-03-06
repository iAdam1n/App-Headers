/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Messenger/FBZoomingPhotoViewDelegate.h>

@protocol FBZoomingPhotoViewDelegate;
@class UIView, NSString;

@interface FBZoomingPhotoView : UIScrollView <FBZoomingPhotoViewDelegate> {

	BOOL _needsSetZoomScale;
	id<FBZoomingPhotoViewDelegate> _forwarder;
	CGPoint _oldCenter;
	double _oldScale;
	CGSize _originalPhotoSize;
	BOOL _zoomEnabled;
	BOOL _managePhotoViewLayout;
	UIView* _photoView;
	double _defaultZoomScale;
	long long _zoomContentMode;

}

@property (assign,nonatomic) double defaultZoomScale;                                     //@synthesize defaultZoomScale=_defaultZoomScale - In the implementation block
@property (nonatomic,retain) UIView * photoView;                                          //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) long long zoomContentMode;                                   //@synthesize zoomContentMode=_zoomContentMode - In the implementation block
@property (getter=isZoomed,nonatomic,readonly) BOOL zoomed; 
@property (assign,nonatomic) BOOL zoomEnabled;                                            //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (assign,nonatomic) BOOL managePhotoViewLayout;                                  //@synthesize managePhotoViewLayout=_managePhotoViewLayout - In the implementation block
@property (assign,nonatomic,__weak) id<FBZoomingPhotoViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setZoomContentMode:(long long)arg1 ;
-(void)rememberZooming;
-(void)setDefaultZoomScales;
-(void)restoreZooming;
-(void)resetPhotoViewSize:(CGSize)arg1 withContentMode:(long long)arg2 ;
-(long long)zoomContentMode;
-(void)resetZoomDefaultAnimated:(BOOL)arg1 ;
-(BOOL)managePhotoViewLayout;
-(void)setManagePhotoViewLayout:(BOOL)arg1 ;
-(void)movePhotoToCenterAnimated:(BOOL)arg1 ;
-(CGPoint)maximumContentOffset;
-(CGPoint)minimumContentOffset;
-(void)setDefaultZoomScale:(double)arg1 ;
-(void)setDefaultZoomScalesWithPhotoViewSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBZoomingPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id<FBZoomingPhotoViewDelegate>)delegate;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomed;
-(BOOL)zoomEnabled;
-(double)defaultZoomScale;
-(void)setPhotoView:(UIView *)arg1 ;
-(UIView *)photoView;
@end

