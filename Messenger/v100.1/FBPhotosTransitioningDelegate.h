/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDisplayableMediaTransitioningDelegate.h>

@class UIView, UIColor, NSString;

@interface FBPhotosTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	UIView* _overlay;
	double _minOverlayAlpha;
	UIColor* _overlayBackgroundColor;

}

@property (nonatomic,retain) UIColor * overlayBackgroundColor;              //@synthesize overlayBackgroundColor=_overlayBackgroundColor - In the implementation block
@property (nonatomic,readonly) double minOverlayAlpha;                      //@synthesize minOverlayAlpha=_minOverlayAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionManager:(id)arg1 willStartTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithTranslation:(CGPoint)arg2 dismissalProgress:(double)arg3 mediaViewOrLayer:(id)arg4 containerView:(id)arg5 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(id)initWithMinOverlayAlpha:(double)arg1 ;
-(void)setOverlayBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)overlayBackgroundColor;
-(double)minOverlayAlpha;
@end
