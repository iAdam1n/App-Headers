/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>

@class NSMutableSet;

@interface FBCenteringScrollView : UIScrollView {

	BOOL _centeringEnabled;
	BOOL _allowSubpixelContentOffset;
	int _numManipulatingInternalBounds;
	NSMutableSet* _gestureRecognizersThatMustFailBeforeInteraction;
	BOOL _delegateScrollViewDidScroll;

}

@property (assign,nonatomic) BOOL centeringEnabled;                        //@synthesize centeringEnabled=_centeringEnabled - In the implementation block
@property (assign,nonatomic) BOOL allowSubpixelContentOffset;              //@synthesize allowSubpixelContentOffset=_allowSubpixelContentOffset - In the implementation block
-(void)requireGestureRecognizerToFailBeforeZooming:(id)arg1 ;
-(BOOL)isPannedToEdge:(unsigned)arg1 ;
-(void)requireGestureRecognizerToFailBeforePanning:(id)arg1 ;
-(void)setCenteringEnabled:(BOOL)arg1 ;
-(BOOL)centeringEnabled;
-(void)_centerContentView;
-(BOOL)allowSubpixelContentOffset;
-(void)fitZoomScaleToContent;
-(id)gestureRecognizersRequiredToFail;
-(void)setAllowSubpixelContentOffset:(BOOL)arg1 ;
-(void)contentViewBoundsChangedAdjustZoomBounds:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_contentView;
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end
