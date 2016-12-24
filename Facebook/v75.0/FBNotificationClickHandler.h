/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationClickHandlerProtocol.h>
#import <Facebook/FBNotificationDismissHandlerProtocol.h>

@class FBNativeThirdPartyURLHandler, NSString;

@interface FBNotificationClickHandler : NSObject <FBNotificationClickHandlerProtocol, FBNotificationDismissHandlerProtocol> {

	FBNativeThirdPartyURLHandler* _nativeThirdPartyURLHandler;
	NSString* _notificationLoggingModule;
	NSString* _actorFBID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotificationLoggingModule:(id)arg1 actorFBID:(id)arg2 ;
-(void)launchClickTarget:(id)arg1 withNavigationCoordinator:(id)arg2 intentHandler:(id)arg3 atIndexPath:(id)arg4 session:(id)arg5 source:(id)arg6 extraData:(id)arg7 ;
-(void)dismissNotification:(id)arg1 source:(id)arg2 ;
-(void)ignoreNotification:(id)arg1 source:(id)arg2 ;
-(void)replaceNotification:(id)arg1 source:(id)arg2 ;
-(id)encode:(id)arg1 ;
-(void)logNativeThirdPartyNotificationClick:(id)arg1 ;
@end
