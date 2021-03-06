/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFClock <NSObject>
@required
-(void)set:(SCD_Struct_FB25)arg1;
-(id)createTimeObserverWithInterval:(SCD_Struct_FB25)arg1 block:(/*^block*/id)arg2 fireOnceAtExactTime:(BOOL)arg3 followMasterClock:(BOOL)arg4;
-(void)resumeTimeObserver:(id)arg1;
-(void)suspendTimeObserver:(id)arg1;
-(void)removeAllTimeObservers;
-(void)syncWithLayer:(id)arg1;
-(BOOL)addTimeObserver:(id)arg1;
-(void)resume;
-(SCD_Struct_FB25*)currentTime;
-(void)pause;
-(id)observers;
-(void)removeTimeObserver:(id)arg1;

@end

