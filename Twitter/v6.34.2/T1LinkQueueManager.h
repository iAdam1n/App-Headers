/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TNLRequestDelegate.h>

@class NSArray, T1LinkQueueInfo, NSString;

@interface T1LinkQueueManager : NSObject <TNLRequestDelegate> {

	NSArray* _additionalInfos;
	T1LinkQueueInfo* _preferredLinkQueue;

}

@property (nonatomic,retain) T1LinkQueueInfo * preferredLinkQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClassForRequest:(id)arg1 ;
+(id)sharedInstance;
-(id)addLink:(id)arg1 URL:(id)arg2 summary:(id)arg3 status:(id)arg4 completion:(/*^block*/id)arg5 ;
-(T1LinkQueueInfo *)preferredLinkQueue;
-(void)setPreferredLinkQueue:(T1LinkQueueInfo *)arg1 ;
-(id)verifyCredentials:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(void)hydrateRequest:(id)arg1 forRequestOperation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_serviceDidChange;
-(id)additionalInfoForType:(long long)arg1 ;
-(id)init;
@end

