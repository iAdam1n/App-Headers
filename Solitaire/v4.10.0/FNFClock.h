/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFClock <NSObject>
@required
-(void)set:(SCD_Struct_AS22)arg1;
-(id)createTimeObserverWithInterval:(SCD_Struct_AS22)arg1 block:(/*^block*/id)arg2 fireOnceAtExactTime:(BOOL)arg3 followMasterClock:(BOOL)arg4;
-(BOOL)addTimeObserver:(id)arg1;
-(void)resumeTimeObserver:(id)arg1;
-(void)suspendTimeObserver:(id)arg1;
-(void)removeAllTimeObservers;
-(void)syncWithLayer:(id)arg1;
-(void)resume;
-(SCD_Struct_AS22*)currentTime;
-(void)pause;
-(id)observers;
-(void)removeTimeObserver:(id)arg1;

@end
