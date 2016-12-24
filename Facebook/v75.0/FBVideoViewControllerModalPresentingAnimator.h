/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBModalAnimatedTransitioning.h>

@class UIView, NSString;

@interface FBVideoViewControllerModalPresentingAnimator : NSObject <FBModalAnimatedTransitioning> {

	UIView* _videoView;
	UIViewController* _presentedViewController;
	UIView* _fromFrameView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 withAnimationGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithVideoView:(id)arg1 presentedViewController:(UIViewController*)arg2 ;
-(double)animationDuration;
@end
