/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBDisplayableMediaTransitioningDelegate.h>

@class UIView, FBPhotosTransitioningDelegate, UIColor, NSString;

@interface FBPhotoViewerDisplayableMediaTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	UIView* _viewToFadeIn;
	UIView* _viewToHide;
	FBPhotosTransitioningDelegate* _photosTransitioningDelegate;
	UIColor* _overlayColor;

}

@property (assign,nonatomic) UIColor * overlayColor;                //@synthesize overlayColor=_overlayColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionManager:(id)arg1 willStartTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithTranslation:(CGPoint)arg2 dismissalProgress:(double)arg3 mediaViewOrLayer:(id)arg4 containerView:(id)arg5 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1 ;
-(BOOL)transitionManagerSupportsInteractiveDismissOnlyOnPresentedView:(id)arg1 ;
-(id)initWithViewToFadeIn:(id)arg1 viewToHide:(id)arg2 ;
-(UIColor *)overlayColor;
-(void)setOverlayColor:(UIColor *)arg1 ;
@end
