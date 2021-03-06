/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALSdk, ALLogManager;

@interface ALConnectionManager : NSObject {

	ALSdk* sdk;
	ALLogManager* logger;

}
+(double)defaultTimeoutForSdk:(id)arg1 ;
-(id)initWithSdk:(id)arg1 ;
-(void)get:(id)arg1 ;
-(void)get:(id)arg1 andNotify:(id)arg2 ;
-(void)sendTo:(id)arg1 using:(id)arg2 andNotify:(id)arg3 ;
-(void)put:(id)arg1 withData:(id)arg2 andNotify:(id)arg3 ;
-(void)post:(id)arg1 withData:(id)arg2 andNotify:(id)arg3 ;
-(void)send:(id)arg1 andNotify:(id)arg2 ;
-(void)get:(id)arg1 withTimeout:(double)arg2 andNotify:(id)arg3 ;
-(void)put:(id)arg1 withData:(id)arg2 ;
-(void)post:(id)arg1 withData:(id)arg2 ;
-(void)sendTo:(id)arg1 using:(id)arg2 data:(id)arg3 andNotify:(id)arg4 ;
-(void)sendTo:(id)arg1 using:(id)arg2 withTimeout:(double)arg3 andNotify:(id)arg4 ;
-(id)init;
@end

