/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface OptimizelyAFNetworkReachabilityManager : NSObject {

	long long _networkReachabilityStatus;
	SCNetworkReachabilityRef _networkReachability;
	unsigned long long _networkReachabilityAssociation;
	/*^block*/id _networkReachabilityStatusBlock;

}

@property (assign,nonatomic) long long networkReachabilityStatus;                            //@synthesize networkReachabilityStatus=_networkReachabilityStatus - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
@property (getter=isReachableViaWWAN,nonatomic,readonly) BOOL reachableViaWWAN; 
@property (getter=isReachableViaWiFi,nonatomic,readonly) BOOL reachableViaWiFi; 
@property (assign,nonatomic) SCNetworkReachabilityRef networkReachability;                   //@synthesize networkReachability=_networkReachability - In the implementation block
@property (assign,nonatomic) unsigned long long networkReachabilityAssociation;              //@synthesize networkReachabilityAssociation=_networkReachabilityAssociation - In the implementation block
@property (nonatomic,copy) id networkReachabilityStatusBlock;                                //@synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock - In the implementation block
+(id)managerForAddress:(const void*)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedManager;
+(id)managerForDomain:(id)arg1 ;
-(void)setNetworkReachabilityAssociation:(unsigned long long)arg1 ;
-(void)setNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(void)setNetworkReachabilityStatus:(long long)arg1 ;
-(BOOL)isReachableViaWWAN;
-(BOOL)isReachableViaWiFi;
-(long long)networkReachabilityStatus;
-(SCNetworkReachabilityRef)networkReachability;
-(id)networkReachabilityStatusBlock;
-(unsigned long long)networkReachabilityAssociation;
-(void)setNetworkReachabilityStatusBlock:(id)arg1 ;
-(id)localizedNetworkReachabilityStatusString;
-(void)setReachabilityStatusChangeBlock:(/*^block*/id)arg1 ;
-(void)startMonitoring;
-(void)dealloc;
-(void)stopMonitoring;
-(BOOL)isReachable;
-(id)initWithReachability:(SCNetworkReachabilityRef)arg1 ;
@end

