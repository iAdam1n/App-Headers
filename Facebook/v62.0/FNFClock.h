/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFClock <NSObject>
@required
-(void)set:(SCD_Struct_FB257)arg1;
-(id)createTimeObserverWithInterval:(SCD_Struct_FB257)arg1 block:(/*^block*/id)arg2 fireOnceAtExactTime:(BOOL)arg3 followMasterClock:(BOOL)arg4;
-(BOOL)addTimeObserver:(id)arg1;
-(void)resumeTimeObserver:(id)arg1;
-(void)suspendTimeObserver:(id)arg1;
-(void)removeAllTimeObservers;
-(void)syncWithLayer:(id)arg1;
-(void)resume;
-(void)pause;
-(id)observers;
-(SCD_Struct_FB257*)currentTime;
-(void)removeTimeObserver:(id)arg1;

@end
