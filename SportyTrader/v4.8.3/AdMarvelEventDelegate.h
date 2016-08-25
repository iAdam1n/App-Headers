/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AdMarvelEventDelegate <NSObject>
@required
-(void)accelerometer:(id)arg1 didAccelerate:(id)arg2 withValuesX:(double)arg3 Y:(double)arg4 Z:(double)arg5 AndAccX:(double)arg6 accY:(double)arg7 accZ:(double)arg8 shakeEvent:(BOOL)arg9;
-(void)networkConnectionUpdated:(BOOL)arg1 ConnectionType:(id)arg2;
-(void)keyboardVisible:(BOOL)arg1;
-(void)headingUpdated:(double)arg1;
-(void)locationUpdated:(id)arg1;
-(void)locationUpdateFailed;
-(BOOL)continuousLocationUpdateRequired;

@end

