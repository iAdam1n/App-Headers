/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@class NSString;

@interface FlurryReachability : NSObject {

	NSString* key_;
	SCNetworkReachabilityRef _flurryReachabilityRef;

}

@property (copy) NSString * key; 
+(id)flurryMakeAddressKey:(unsigned)arg1 ;
+(id)flurryReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)flurryReachabilityWithHostName:(id)arg1 ;
+(id)flurryReachabilityForInternetConnection;
+(id)flurryReachabilityForLocalWiFi;
+(BOOL)accessInstanceVariablesDirectly;
-(void)flurryStopNotifier;
-(id)initWithFlurryReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(int)flurryNetworkStatusForFlags:(unsigned)arg1 ;
-(BOOL)flurryStartNotifier;
-(BOOL)isFlurryReachabilityEqual:(id)arg1 ;
-(int)flurryCurrentReachabilityStatus;
-(BOOL)isFlurryReachable;
-(BOOL)isFlurryConnectionRequired;
-(BOOL)isFlurryConnectionOnDemand;
-(BOOL)isFlurryUserInterventionRequired;
-(BOOL)isFlurryReachableViaWWAN;
-(BOOL)isFlurryReachableViaWiFi;
-(unsigned)flurryReachabilityFlags;
-(void)dealloc;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end

