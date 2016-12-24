/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFriendingActionSheetControllerRequestDelegate.h>

@class FBUserSession, FBFriendingActionRequesterSourceConfiguration, NSString;

@interface FBFriendingActionRequester : NSObject <FBFriendingActionSheetControllerRequestDelegate> {

	FBUserSession* _session;
	FBFriendingActionRequesterSourceConfiguration* _sourceConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)friendingActionSheetController:(id)arg1 sendFriendRequest:(id)arg2 ;
-(void)friendingActionSheetController:(id)arg1 cancelFriendRequest:(id)arg2 ;
-(void)friendingActionSheetController:(id)arg1 acceptFriendRequest:(id)arg2 ;
-(void)friendingActionSheetController:(id)arg1 rejectFriendRequest:(id)arg2 ;
-(void)friendingActionSheetController:(id)arg1 unfriend:(id)arg2 ;
-(void)friendingActionSheetController:(id)arg1 follow:(id)arg2 ;
-(void)friendingActionSheetController:(id)arg1 unfollow:(id)arg2 ;
-(id)initWithSession:(id)arg1 sourceConfiguration:(id)arg2 ;
@end
