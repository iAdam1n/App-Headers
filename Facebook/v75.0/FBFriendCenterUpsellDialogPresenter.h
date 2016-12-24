/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPersonTimelineTapResponderDelegate, FBIntentHandler;
@class FBUserSession, FBMemPerson;

@interface FBFriendCenterUpsellDialogPresenter : NSObject {

	FBUserSession* _session;
	id<FBPersonTimelineTapResponderDelegate> _delegate;
	FBMemPerson* _person;
	id _profilePictureDownloadHandle;
	id<FBIntentHandler> _intentHandler;

}
-(BOOL)_isNewUserFriendCenterUpsellGKEnabled;
-(void)_presentFriendCenterUpsellDialog;
-(void)_openFriendCenter;
-(void)_presentFriendCenterUpsellDialogWithImage:(id)arg1 ;
-(id)initWithSession:(id)arg1 tapDelegate:(id)arg2 person:(id)arg3 intentHandler:(id)arg4 ;
-(void)presentFriendingUpsellDialog;
-(void)dealloc;
@end
