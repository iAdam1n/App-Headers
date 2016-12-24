/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListRequestHandling.h>

@protocol MNThreadListFetching, OS_dispatch_queue;
@class NSObject, NSString;

@interface MNThreadListRequestNetworkHandler : NSObject <MNThreadListRequestHandling> {

	id<MNThreadListFetching> _networkFetcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleThreadListRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithNetworkFetcher:(id)arg1 queue:(id)arg2 ;
@end
