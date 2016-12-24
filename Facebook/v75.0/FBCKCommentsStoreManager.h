/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBCache;

@interface FBCKCommentsStoreManager : NSObject {

	FBUserSession* _session;
	FBCache* _commentsStoreCache;

}

@property (nonatomic,readonly) FBCache * commentsStoreCache;              //@synthesize commentsStoreCache=_commentsStoreCache - In the implementation block
-(id)commentsStoreWithModelControllerConfiguration:(id)arg1 ;
-(void)createCommentsStoreForModelControllerWithConfiguration:(id)arg1 parentConfiguration:(id)arg2 seedLoadResult:(id)arg3 ;
-(FBCache *)commentsStoreCache;
-(id)_connectionWithFeedbackID:(id)arg1 focusedCommentID:(id)arg2 parentFocusedCommentID:(id)arg3 viewerActsAsPageID:(id)arg4 commentOrder:(unsigned long long)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end
