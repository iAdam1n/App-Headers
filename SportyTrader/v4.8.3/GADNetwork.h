/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SportyTrader/SportyTrader-Structs.h>
@class NSObject;

@interface GADNetwork : NSObject {

	GADNetwork* _selfReference;
	unsigned long long _changeCount;
	unsigned long long _networkType;
	unsigned long long _lastKnownNetworkType;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _enableCheckingQueue;
	SCNetworkReachabilityRef _networkReachabilityRef;

}

@property (assign) unsigned long long networkType; 
-(id)networkTypeString;
-(id)lastKnownNetworkTypeString;
-(void)setNetworkTypeFromFlags:(unsigned)arg1 ;
-(void)enableNetworkChecking;
-(void)disableNetworkChecking;
-(void)dealloc;
-(id)init;
-(unsigned long long)changeCount;
-(void)setNetworkType:(unsigned long long)arg1 ;
-(unsigned long long)networkType;
@end
