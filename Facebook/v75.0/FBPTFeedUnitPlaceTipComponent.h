/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBPTState, FBUserSession;

@interface FBPTFeedUnitPlaceTipComponent : CKCompositeComponent {

	FBPTState* _state;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBPTState * state; 
+(id)newWithState:(id)arg1 fallbackTitle:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 session:(id)arg5 ;
-(void)didTapPlaceTipComponent:(id)arg1 ;
-(FBPTState *)state;
@end
