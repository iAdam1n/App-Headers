/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRReachabilityMonitorDelegate;
#import <Gumtree/Gumtree-Structs.h>
@class NSString;

@interface CRReachabilityMonitor : NSObject {

	NSString* _host;
	long long _currentStatus;
	id<CRReachabilityMonitorDelegate> _delegate;
	SCNetworkReachabilityRef _reachability;

}

@property (nonatomic,retain) NSString * host;                                                //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachability;                          //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic,__weak) id<CRReachabilityMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long currentStatus;                                        //@synthesize currentStatus=_currentStatus - In the implementation block
+(void)load;
+(long long)currentNetworkStatus;
-(void)updateReachabilityWithFlags:(unsigned)arg1 ;
-(id)initWithHost:(id)arg1 delegate:(id)arg2 ;
-(void)startMonitoring;
-(void)setDelegate:(id<CRReachabilityMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<CRReachabilityMonitorDelegate>)delegate;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(void)stopMonitoring;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(void)setCurrentStatus:(long long)arg1 ;
-(long long)currentStatus;
-(SCNetworkReachabilityRef)reachability;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
@end

