/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler;
@class FBUserSession, FBPersonTimelineTapResponder;

@interface FBProtilesComponentResponder : NSObject {

	FBUserSession* _session;
	FBPersonTimelineTapResponder* _tapResponder;
	id<FBIntentHandler> _intentHandler;
	BOOL _shouldUseUnseenCoreExperience;

}
-(void)protilesPhotosComponent:(id)arg1 didTapWithPhotosContext:(id)arg2 ;
-(id)initWithSession:(id)arg1 tapResponder:(id)arg2 intentHandler:(id)arg3 shouldUseUnseenCoreExperience:(BOOL)arg4 ;
-(void)protilesFriendsComponent:(id)arg1 didTapWithPerson:(id)arg2 ;
-(void)protilesFriendsDidTapSeeAllFriends;
-(void)protilesPhotosDidTapSeeAllPhotos;
@end
