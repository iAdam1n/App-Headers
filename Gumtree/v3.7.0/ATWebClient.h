/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ATWebClient : NSObject
+(id)sharedClient;
-(id)apiURLStringWithPath:(id)arg1 ;
-(id)connectionToGet:(id)arg1 ;
-(void)updateConnection:(id)arg1 withOAuthToken:(id)arg2 ;
-(id)connectionToPost:(id)arg1 JSON:(id)arg2 ;
-(id)connectionToPut:(id)arg1 JSON:(id)arg2 ;
-(id)connectionToPost:(id)arg1 JSON:(id)arg2 withFile:(id)arg3 ofMimeType:(id)arg4 ;
-(id)stringForParameters:(id)arg1 ;
-(id)connectionToPost:(id)arg1 parameters:(id)arg2 ;
-(id)connectionToPost:(id)arg1 withFileData:(id)arg2 ofMimeType:(id)arg3 fileDataKey:(id)arg4 parameters:(id)arg5 ;
-(id)stringForParameter:(id)arg1 ;
-(void)addAPIHeaders:(id)arg1 ;
-(id)connectionToPost:(id)arg1 body:(id)arg2 ;
-(id)apiBaseURLString;
-(id)connectionToPost:(id)arg1 ;
-(id)userAgentString;
-(id)requestForPostingSurveyResponse:(id)arg1 ;
-(id)requestForSendingEvent:(id)arg1 ;
-(id)requestForSendingMetric:(id)arg1 ;
-(id)requestForCreatingConversation:(id)arg1 ;
-(id)requestForUpdatingConversation:(id)arg1 ;
-(id)requestForUpdatingDevice:(id)arg1 ;
-(id)requestForRetrievingMessagesSinceMessage:(id)arg1 ;
-(id)requestForPostingMessage:(id)arg1 ;
-(id)requestForUpdatingPerson:(id)arg1 ;
-(id)requestForGettingEngagementManifest;
-(id)requestForGettingAppConfiguration;
-(id)requestForPostingFeedback:(id)arg1 ;
-(id)baseURLString;
-(id)commonChannelName;
@end

