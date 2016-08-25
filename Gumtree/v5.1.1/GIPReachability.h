/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSString;

@interface GIPReachability : NSObject {

	NSString* hostName_;
	SCNetworkReachabilityRef reachability_;
	unsigned reachabilityFlags_;
	BOOL monitoring_;
	BOOL hasPostedNotification_;

}

@property (nonatomic,copy) NSString * hostName; 
@property (assign,nonatomic) BOOL monitoring; 
+(BOOL)wasPreviouslyReachable:(id)arg1 ;
-(BOOL)isCellularNetwork;
-(BOOL)isFlagEnabled:(unsigned)arg1 ;
-(id)initWithHostName:(id)arg1 ;
-(void)callbackWithFlags:(unsigned)arg1 ;
-(BOOL)isConnectionOnTraffic;
-(BOOL)isConnectionOnDemand;
-(BOOL)isInterventionRequired;
-(NSString *)hostName;
-(BOOL)isDirect;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)setMonitoring:(BOOL)arg1 ;
-(BOOL)monitoring;
-(BOOL)isConnectionRequired;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isReachable;
-(void)setHostName:(NSString *)arg1 ;
-(id)initWithReachability:(SCNetworkReachabilityRef)arg1 ;
@end

