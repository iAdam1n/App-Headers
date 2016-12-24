/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary, NSObject;

@interface FBServiceResponseAccumulator : NSObject {

	NSMutableDictionary* _responses;
	mutex _lock;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)initWithCount:(unsigned long long)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)receivedResponse:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)description;
@end
