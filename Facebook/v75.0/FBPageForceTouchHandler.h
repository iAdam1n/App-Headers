/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBForceTouchHandler.h>

@protocol FBNavigationCoordinator;
@class FBUserSession, FBIntent, NSString;

@interface FBPageForceTouchHandler : NSObject <FBForceTouchHandler> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBIntent* _intent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPreviewingContext:(id)arg1 intent:(id)arg2 ;
-(void)commitViewController:(id)arg1 previewingContext:(id)arg2 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 ;
@end

