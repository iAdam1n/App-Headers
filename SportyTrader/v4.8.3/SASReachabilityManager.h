/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface SASReachabilityManager : NSObject {

	long long _networkReachabilityStatus;
	id _networkReachability;
	/*^block*/id _networkReachabilityStatusBlock;

}

@property (assign,nonatomic) long long networkReachabilityStatus;                                   //@synthesize networkReachabilityStatus=_networkReachabilityStatus - In the implementation block
@property (getter=isNetworkReachable,nonatomic,readonly) BOOL reachable; 
@property (getter=isNetworkReachableViaWWAN,nonatomic,readonly) BOOL reachableViaWWAN; 
@property (getter=isNetworkReachableViaWiFi,nonatomic,readonly) BOOL reachableViaWiFi; 
@property (nonatomic,retain) id networkReachability;                                                //@synthesize networkReachability=_networkReachability - In the implementation block
@property (nonatomic,copy) id networkReachabilityStatusBlock;                                       //@synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock - In the implementation block
+(id)managerForAddress:(const void*)arg1 ;
+(id)manager;
+(id)sharedManager;
+(id)managerForDomain:(id)arg1 ;
-(BOOL)isNetworkReachableViaWWAN;
-(BOOL)isNetworkReachableViaWiFi;
-(void)setNetworkReachability:(id)arg1 ;
-(void)setNetworkReachabilityStatus:(long long)arg1 ;
-(long long)networkReachabilityStatus;
-(id)networkReachability;
-(id)networkReachabilityStatusBlock;
-(void)setNetworkReachabilityStatusBlock:(id)arg1 ;
-(id)networkReachabilityStatusString;
-(void)setReachabilityStatusChangeBlock:(/*^block*/id)arg1 ;
-(void)startMonitoring;
-(void)dealloc;
-(id)init;
-(void)stopMonitoring;
-(BOOL)isNetworkReachable;
-(id)initWithReachability:(SCNetworkReachabilityRef)arg1 ;
@end

