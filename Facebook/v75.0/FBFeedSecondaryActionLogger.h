/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSecondaryActionMenuControllerListener.h>

@class NSString, NSDictionary;

@interface FBFeedSecondaryActionLogger : NSObject <FBSecondaryActionMenuControllerListener> {

	BOOL _isFeedUnitSponsored;
	BOOL _isFeedUnitSelfPost;
	NSString* _analyticsModule;
	NSDictionary* _analyticsExtras;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapBackButton;
-(void)didTapMoreButton;
-(id)initWithFeedUnit:(id)arg1 userFBID:(id)arg2 analyticsModule:(id)arg3 analyticsExtras:(id)arg4 ;
-(void)logEvent:(id)arg1 actionName:(id)arg2 position:(unsigned long long)arg3 isSecondLevel:(BOOL)arg4 ;
-(void)buttonItemForActionDidAppear:(id)arg1 atPosition:(unsigned long long)arg2 isSecondLevel:(BOOL)arg3 ;
-(void)didTapButtonItemForAction:(id)arg1 atPosition:(unsigned long long)arg2 isSecondLevel:(BOOL)arg3 ;
-(void)backButtonDidAppear;
-(void)moreButtonDidAppear;
@end
