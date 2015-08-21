/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GAIReachabilityDelegate;
#import <Gumtree/Gumtree-Structs.h>
@class NSString;

@interface GAIReachabilityChecker : NSObject {

	int reachabilityStatus_;
	const GAIReachabilityApi* reachabilityApi_;
	SCNetworkReachabilityRef reachability_;
	NSString* host_;
	id<GAIReachabilityDelegate> delegate_;

}

@property (assign,nonatomic) int reachabilityStatus; 
@property (nonatomic,copy) NSString * host; 
@property (assign,nonatomic) id<GAIReachabilityDelegate> delegate; 
@property (nonatomic,readonly) BOOL isActive; 
@property (assign,nonatomic) const GAIReachabilityApi* reachabilityApi; 
@property (assign,nonatomic) SCNetworkReachabilityRef reachability; 
-(void)setReachabilityStatus:(int)arg1 ;
-(int)reachabilityStatus;
-(int)statusForFlags:(unsigned)arg1 ;
-(const GAIReachabilityApi*)reachabilityApi;
-(void)setReachabilityApi:(const GAIReachabilityApi*)arg1 ;
-(id)initWithDelegate:(id)arg1 withHost:(id)arg2 ;
-(void)reachabilityFlagsChanged:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<GAIReachabilityDelegate>)arg1 ;
-(id)init;
-(id<GAIReachabilityDelegate>)delegate;
-(BOOL)isActive;
-(void)stop;
-(BOOL)start;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(SCNetworkReachabilityRef)reachability;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
@end
