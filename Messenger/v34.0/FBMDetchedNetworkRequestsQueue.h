/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface FBMDetchedNetworkRequestsQueue : NSObject <FBSessionClassProvidable> {

	NSMutableSet* _detachedRequests;
	NSObject*<OS_dispatch_queue> _mutateQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)addDetachedRequest:(id)arg1 ;
-(void)removeDetachedRequest:(id)arg1 ;
-(id)init;
@end

