/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSemiTransparentOverlayPresentingToken.h>

@class FBSemiTransparentOverlayPresentingView, FBSemiTransparentOverlayView;

@interface FBSemiTransparentOverlayConcretePresentingToken : NSObject <FBSemiTransparentOverlayPresentingToken> {

	FBSemiTransparentOverlayPresentingView* _presentingView;
	FBSemiTransparentOverlayView* _overlayView;

}

@property (assign,nonatomic,__weak) FBSemiTransparentOverlayPresentingView * presentingView;              //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,nonatomic,__weak) FBSemiTransparentOverlayView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
-(void)hideOverlayAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPresentingView:(id)arg1 overlayView:(id)arg2 ;
-(FBSemiTransparentOverlayPresentingView *)presentingView;
-(void)setPresentingView:(FBSemiTransparentOverlayPresentingView *)arg1 ;
-(void)setOverlayView:(FBSemiTransparentOverlayView *)arg1 ;
-(FBSemiTransparentOverlayView *)overlayView;
@end
