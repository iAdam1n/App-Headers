/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@class NSString;

@interface Reachability : NSObject {

	NSString* key_;
	SCNetworkReachabilityRef reachabilityRef;

}

@property (copy) NSString * key; 
+(id)makeAddressKey:(unsigned)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(BOOL)isConnectionOnDemand;
-(BOOL)isInterventionRequired;
-(BOOL)isReachableViaWWAN;
-(BOOL)isReachableViaWiFi;
-(unsigned)reachabilityFlags;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)connectionRequired;
-(BOOL)isConnectionRequired;
-(BOOL)isReachable;
-(unsigned)networkStatusForFlags:(unsigned)arg1 ;
-(unsigned)currentReachabilityStatus;
-(BOOL)startNotifier;
-(void)stopNotifier;
@end
