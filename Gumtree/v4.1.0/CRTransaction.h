/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSString, NSTimer;

@interface CRTransaction : NSObject {

	BOOL _cr_isForegrounded;
	int _state;
	int _value;
	int _transactionId;
	double _timeout;
	NSDictionary* _metadata;
	double _beginTime;
	double _endTime;
	double _eyeTime;
	double _cr_foregroundTime;
	NSString* _name;
	NSString* _cr_beginTimeString;
	NSString* _cr_endTimeString;
	NSString* _cr_foregroundTimeString;
	NSTimer* _cr_timer;

}

@property (nonatomic,readonly) int transactionId;                           //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int state;                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double timeout;                                //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) int value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) double beginTime;                            //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double endTime;                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double eyeTime;                              //@synthesize eyeTime=_eyeTime - In the implementation block
@property (nonatomic,copy) NSString * cr_beginTimeString;                   //@synthesize cr_beginTimeString=_cr_beginTimeString - In the implementation block
@property (nonatomic,copy) NSString * cr_endTimeString;                     //@synthesize cr_endTimeString=_cr_endTimeString - In the implementation block
@property (assign,nonatomic) double cr_foregroundTime;                      //@synthesize cr_foregroundTime=_cr_foregroundTime - In the implementation block
@property (nonatomic,copy) NSString * cr_foregroundTimeString;              //@synthesize cr_foregroundTimeString=_cr_foregroundTimeString - In the implementation block
@property (assign,nonatomic) BOOL cr_isForegrounded;                        //@synthesize cr_isForegrounded=_cr_isForegrounded - In the implementation block
@property (nonatomic,retain) NSTimer * cr_timer;                            //@synthesize cr_timer=_cr_timer - In the implementation block
+(id)allTransactions;
+(id)transactionForId:(int)arg1 ;
+(id)transactionForName:(id)arg1 ;
-(void)crash;
-(id)cr_toArray;
-(void)cr_foreground:(double)arg1 ;
-(void)cr_background:(double)arg1 ;
-(void)cr_setEndTime:(double)arg1 ;
-(id)initAuto:(id)arg1 withBeginTime:(double)arg2 withEndTime:(double)arg3 ;
-(NSString *)cr_endTimeString;
-(void)setCr_endTimeString:(NSString *)arg1 ;
-(void)cr_setBeginTime:(double)arg1 ;
-(void)setCr_foregroundTime:(double)arg1 ;
-(void)cr_createTimerOnMainThread;
-(void)cr_removeTimerOnMainThread;
-(BOOL)cr_isFinal;
-(double)clampTimeout:(double)arg1 ;
-(id)init:(id)arg1 withValue:(int)arg2 ;
-(void)cr_transition:(int)arg1 ;
-(void)cr_setState:(int)arg1 atTime:(double)arg2 ;
-(BOOL)cr_legalMetadataObject:(id)arg1 ;
-(BOOL)cr_legalMetadataKey:(id)arg1 ;
-(void)cr_timerFired:(id)arg1 ;
-(void)cr_createTimer:(id)arg1 ;
-(void)cr_removeTimer;
-(double)eyeTime;
-(double)cr_foregroundTime;
-(id)initFromFile:(id)arg1 ;
-(void)cr_abort;
-(void)cr_interrupt;
-(id)cr_toJSONString;
-(NSString *)cr_beginTimeString;
-(void)setCr_beginTimeString:(NSString *)arg1 ;
-(NSString *)cr_foregroundTimeString;
-(void)setCr_foregroundTimeString:(NSString *)arg1 ;
-(BOOL)cr_isForegrounded;
-(void)setCr_isForegrounded:(BOOL)arg1 ;
-(NSTimer *)cr_timer;
-(void)setCr_timer:(NSTimer *)arg1 ;
-(id)init:(id)arg1 ;
-(double)timeout;
-(void)dealloc;
-(int)state;
-(id)objectForKey:(id)arg1 ;
-(NSString *)name;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(int)value;
-(void)setValue:(int)arg1 ;
-(double)beginTime;
-(void)end;
-(void)begin;
-(void)setTimeout:(double)arg1 ;
-(double)endTime;
-(NSDictionary *)metadata;
-(void)fail;
-(int)transactionId;
@end

