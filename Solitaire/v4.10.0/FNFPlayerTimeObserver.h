/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSObject;

@interface FNFPlayerTimeObserver : NSObject {

	BOOL _fireOnceAtExactTime;
	BOOL _followMasterClock;
	BOOL _suspended;
	/*^block*/id _block;
	NSObject*<OS_dispatch_source> _timer;
	SCD_Struct_AS22 _interval;

}

@property (assign,nonatomic) SCD_Struct_AS22 interval;                         //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL fireOnceAtExactTime;                         //@synthesize fireOnceAtExactTime=_fireOnceAtExactTime - In the implementation block
@property (assign,nonatomic) BOOL followMasterClock;                           //@synthesize followMasterClock=_followMasterClock - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                   //@synthesize suspended=_suspended - In the implementation block
-(BOOL)fireOnceAtExactTime;
-(void)setFireOnceAtExactTime:(BOOL)arg1 ;
-(BOOL)followMasterClock;
-(void)setFollowMasterClock:(BOOL)arg1 ;
-(BOOL)suspended;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setInterval:(SCD_Struct_AS22)arg1 ;
-(SCD_Struct_AS22)interval;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

