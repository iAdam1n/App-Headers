/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterAccountBlockedContentEradicationMonitoring.h>

@class TFNTwitterAccount, NSString;

@interface T1ExternallyBlockedUserContentEradicationTask : NSObject <TFNTwitterAccountBlockedContentEradicationMonitoring> {

	TFNTwitterAccount* _account;
	unsigned long long _backgroundTaskIdentifier;
	BOOL _limitToMostRecent;
	BOOL _contentRemoved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldStopRemovingBlockedContentForAccount:(id)arg1 ;
-(BOOL)shouldStopRemovingBlockedContentAfterFirstPageForAccount:(id)arg1 ;
-(void)didRemoveBlockedContentForAccount:(id)arg1 ;
-(void)blockedUserContentDidCompleteForAccount:(id)arg1 error:(id)arg2 ;
-(id)initWithAccount:(id)arg1 limitToMostRecent:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(BOOL)start;
@end

