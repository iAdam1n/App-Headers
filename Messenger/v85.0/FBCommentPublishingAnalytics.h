/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCommentPublishingAnalytics : NSObject
+(void)reportCommentPostingFailedWithPublishTargetID:(id)arg1 error:(id)arg2 analyticsPayload:(id)arg3 ;
+(void)reportCommentPostingWithPublishTargetID:(id)arg1 analyticsPayload:(id)arg2 ;
+(void)reportDidFinishPublishingCommentWithGraphQLID:(id)arg1 attachmentType:(id)arg2 error:(id)arg3 requestStatus:(id)arg4 isCommentOnScreen:(BOOL)arg5 ;
+(void)reportWillStartPublishingCommentWithGraphQLID:(id)arg1 ;
@end
