/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class POPBasicAnimation;

@interface Slack.SLKDisclaimerAlertTransitionDismissalCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {

	 scaleAnimation.storage;
	 fromOpacityAnimation.storage;
	 dimmingOpacityAnimation.storage;

}

@property (retain,nonatomic) POPBasicAnimation * scaleAnimation; 
@property (retain,nonatomic) POPBasicAnimation * fromOpacityAnimation; 
@property (retain,nonatomic) POPBasicAnimation * dimmingOpacityAnimation; 
-(POPBasicAnimation *)dimmingOpacityAnimation;
-(void)setDimmingOpacityAnimation:(POPBasicAnimation *)arg1 ;
-(id)getDimView:(id)arg1 ;
-(POPBasicAnimation *)scaleAnimation;
-(void)setScaleAnimation:(POPBasicAnimation *)arg1 ;
-(POPBasicAnimation *)fromOpacityAnimation;
-(void)setFromOpacityAnimation:(POPBasicAnimation *)arg1 ;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end
