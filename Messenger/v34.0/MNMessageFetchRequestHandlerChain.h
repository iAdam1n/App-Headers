/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMessageFetchRequestRunning.h>

@protocol MNMessageFetchRequestRunning;
@class NSString;

@interface MNMessageFetchRequestHandlerChain : NSObject <MNMessageFetchRequestRunning> {

	id<MNMessageFetchRequestRunning> _backgroundThreadHandler;
	id<MNMessageFetchRequestRunning> _mainThreadHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMemoryMessageStore:(id)arg1 diskMessageStore:(id)arg2 networkRequestRunner:(id)arg3 networkActivityManager:(id)arg4 ;
-(void)handleMessageFetchRequest:(id)arg1 currentPendingResponse:(id)arg2 listener:(id)arg3 ;
@end

