/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CKComponent, NSString, FBFeedToolbox;

@interface FBUFIFeedbackSummaryContainerComponent : CKCompositeComponent <CAAnimationDelegate> {

	CKComponent* _activityComponent;
	CKComponent* _initialBlingLineComponent;
	BOOL _shouldActivityComponentAnimate;
	BOOL _shouldResetToInitialBlingLineComponent;
	NSString* _recentActivityType;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithFeedback:(id)arg1 reactionDataProvider:(id)arg2 style:(const FBUFIFeedbackSummaryContainerComponentStyle*)arg3 toolbox:(id)arg4 ;
+(id)initialState;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(FBFeedToolbox *)toolbox;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end
