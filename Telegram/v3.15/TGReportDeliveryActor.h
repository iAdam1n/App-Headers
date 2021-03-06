/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGActor.h>

@interface TGReportDeliveryActor : TGActor {

	BOOL _isQts;
	int _value;
	int _nextValue;

}

@property (assign,nonatomic) int value;                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) int nextValue;              //@synthesize nextValue=_nextValue - In the implementation block
+(id)genericPath;
-(void)reportDeliverySuccess:(int)arg1 deliveredMessages:(id)arg2 ;
-(void)reportDeliveryFailed:(int)arg1 ;
-(void)reportQtsSuccess:(int)arg1 randomIds:(id)arg2 ;
-(void)reportQtsFailed:(int)arg1 ;
-(void)watcherJoined:(id)arg1 options:(id)arg2 waitingInActorQueue:(BOOL)arg3 ;
-(void)maybeReportValue:(int)arg1 ;
-(int)nextValue;
-(void)setNextValue:(int)arg1 ;
-(int)value;
-(void)setValue:(int)arg1 ;
-(void)execute:(id)arg1 ;
@end

