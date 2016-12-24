/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableSet;

@interface FBProfileCurationTagsEditTracker : NSObject {

	FBUserSession* _session;
	NSMutableSet* _addedTags;
	NSMutableSet* _removedTags;

}
-(BOOL)shouldSendMutationCall;
-(void)sendTagsEditMutationWithReferrerID:(id)arg1 referrerType:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)sendTagsEditMutationWithAddedTagsIDs:(id)arg1 removedTagsIDs:(id)arg2 referrerID:(id)arg3 referrerType:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)didSelectTagWithTagID:(id)arg1 ;
-(void)didUnselectTagWithTagID:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
