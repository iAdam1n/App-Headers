/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class POPBasicAnimation;

@interface Slack.SLKDisclaimerAlertTransitionAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {

	 dimmingOpacityAnimation.storage;
	 opacityAnimation.storage;

}

@property (retain,nonatomic) POPBasicAnimation * dimmingOpacityAnimation; 
@property (retain,nonatomic) POPBasicAnimation * opacityAnimation; 
-(CGRect)containerSize:(id)arg1 ;
-(CGRect)compactContainerSize:(id)arg1 ;
-(CGRect)iPadContainerSize:(id)arg1 ;
-(double)containerWidth:(id)arg1 ;
-(double)widthMultiplier;
-(double)containerHeight:(id)arg1 ;
-(double)heightMultiplier;
-(POPBasicAnimation *)dimmingOpacityAnimation;
-(void)setDimmingOpacityAnimation:(POPBasicAnimation *)arg1 ;
-(POPBasicAnimation *)opacityAnimation;
-(void)setOpacityAnimation:(POPBasicAnimation *)arg1 ;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end
