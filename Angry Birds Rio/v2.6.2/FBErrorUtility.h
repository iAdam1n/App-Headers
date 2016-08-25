/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBErrorUtility : NSObject
+(long long)errorCategoryForError:(id)arg1 ;
+(id)userMessageForError:(id)arg1 ;
+(void)fberrorGetCodeValueForError:(id)arg1 index:(unsigned long long)arg2 code:(int*)arg3 subcode:(int*)arg4 ;
+(id)jsonDictionaryForError:(id)arg1 ;
+(BOOL)errorIsNetworkError:(id)arg1 ;
+(long long)fberrorCategoryFromError:(id)arg1 code:(int)arg2 subcode:(int)arg3 returningUserMessage:(id*)arg4 andShouldNotifyUser:(BOOL*)arg5 ;
+(BOOL)fberrorIsErrorFromSystemSession:(id)arg1 ;
+(id)apiUserMessageForError:(id)arg1 ;
+(id)innerErrorInfoFromError:(id)arg1 ;
+(BOOL)shouldNotifyUserForError:(id)arg1 ;
+(unsigned long long)errorCodeForError:(id)arg1 ;
+(unsigned long long)errorSubcodeForError:(id)arg1 ;
+(id)fberrorForRetry:(id)arg1 ;
+(id)fberrorForSystemAccountOAuthError:(id)arg1 withSubcode:(unsigned long long)arg2 session:(id)arg3 ;
+(id)fberrorForSystemPasswordChange:(id)arg1 ;
+(id)userTitleForError:(id)arg1 ;
+(BOOL)isTransientError:(id)arg1 ;
@end

