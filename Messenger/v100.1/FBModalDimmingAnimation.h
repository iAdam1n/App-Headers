/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalAnimation.h>

@class UIView, NSString;

@interface FBModalDimmingAnimation : NSObject <FBModalAnimation> {

	double _maximumAlpha;
	UIView* _dimmingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMaximumAlpha:(double)arg1 ;
-(void)prepareForPresentation:(BOOL)arg1 inTransition:(id)arg2 ;
-(void)animatePresentation:(BOOL)arg1 alongsideTransition:(id)arg2 ;
-(id)animatedViewsForPresentation:(BOOL)arg1 inTransition:(id)arg2 ;
-(void)cleanUpAfterPresentation:(BOOL)arg1 inTransition:(id)arg2 ;
@end
