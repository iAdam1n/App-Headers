/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBModalAnimation.h>

@class UIView, NSString;

@interface FBModalPushBackAnimation : NSObject <FBModalAnimation> {

	UIView* _animatedView;
	CGAffineTransform _transform;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForPresentation:(BOOL)arg1 inTransition:(id)arg2 ;
-(void)animatePresentation:(BOOL)arg1 alongsideTransition:(id)arg2 ;
-(id)animatedViewsForPresentation:(BOOL)arg1 inTransition:(id)arg2 ;
-(void)cleanUpAfterPresentation:(BOOL)arg1 inTransition:(id)arg2 ;
-(id)_animatedViewForPresentation:(BOOL)arg1 inTransition:(id)arg2 ;
-(id)initWithScale:(double)arg1 ;
@end
