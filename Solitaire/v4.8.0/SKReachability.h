/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSObject;

@interface SKReachability : NSObject {

	BOOL reachableOnWWAN;
	SCNetworkReachabilityRef reachabilityRef;
	NSObject*<OS_dispatch_queue> reachabilitySerialQueue;
	/*^block*/id reachableBlock;
	/*^block*/id unreachableBlock;
	id reachabilityObject;

}

@property (nonatomic,copy) id reachableBlock; 
@property (nonatomic,copy) id unreachableBlock; 
@property (assign,nonatomic) BOOL reachableOnWWAN; 
@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reachabilitySerialQueue; 
@property (nonatomic,retain) id reachabilityObject; 
+(id)reachabilityWithHostname:(id)arg1 ;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(BOOL)isReachableViaWWAN;
-(BOOL)isReachableViaWiFi;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(void)setReachableOnWWAN:(BOOL)arg1 ;
-(void)setReachableBlock:(id)arg1 ;
-(void)setUnreachableBlock:(id)arg1 ;
-(void)setReachabilityObject:(id)arg1 ;
-(void)setReachabilitySerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)reachabilitySerialQueue;
-(BOOL)reachableOnWWAN;
-(BOOL)isReachableWithFlags:(unsigned)arg1 ;
-(unsigned)reachabilityFlags;
-(id)reachableBlock;
-(id)unreachableBlock;
-(BOOL)isConnectionOnDemand;
-(BOOL)isInterventionRequired;
-(id)currentReachabilityFlags;
-(id)reachabilityObject;
-(void)dealloc;
-(id)description;
-(BOOL)connectionRequired;
-(void)reachabilityChanged:(unsigned)arg1 ;
-(BOOL)isConnectionRequired;
-(BOOL)isReachable;
-(long long)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(SCNetworkReachabilityRef)reachabilityRef;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(id)currentReachabilityString;
@end

