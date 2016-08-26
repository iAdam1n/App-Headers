/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@interface SpinRealMachineChangeEvent : ChangeEvent {

	BOOL isFreeSpin;
	BOOL isAutoSpin;
	int machineId;
	int lines;
	long long betPerLine;

}

@property (assign,nonatomic) int machineId; 
@property (assign,nonatomic) int lines; 
@property (assign,nonatomic) long long betPerLine; 
@property (assign,nonatomic) BOOL isFreeSpin; 
@property (assign,nonatomic) BOOL isAutoSpin; 
+(id)mutableDictionaryTypes;
+(void)load;
-(id)csv;
-(int)machineId;
-(void)setMachineId:(int)arg1 ;
-(long long)betPerLine;
-(void)setBetPerLine:(long long)arg1 ;
-(BOOL)isFreeSpin;
-(BOOL)isAutoSpin;
-(void)setIsFreeSpin:(BOOL)arg1 ;
-(void)setIsAutoSpin:(BOOL)arg1 ;
-(int)lines;
-(void)setLines:(int)arg1 ;
@end
