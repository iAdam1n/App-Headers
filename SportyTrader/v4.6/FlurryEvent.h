/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/NSCoding.h>

@class NSString, NSDate, NSDictionary, NSNumber;

@interface FlurryEvent : NSObject <NSCoding> {

	NSString* _name;
	NSDate* _started;
	NSDate* _ended;
	BOOL _timed;
	BOOL _automaticallyEnded;
	NSDictionary* _parameters;
	NSNumber* _eventLogId;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * started;                       //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) NSDate * ended;                         //@synthesize ended=_ended - In the implementation block
@property (assign,nonatomic) BOOL timed;                             //@synthesize timed=_timed - In the implementation block
@property (assign,nonatomic) BOOL automaticallyEnded;                //@synthesize automaticallyEnded=_automaticallyEnded - In the implementation block
@property (nonatomic,retain) NSNumber * eventLogId;                  //@synthesize eventLogId=_eventLogId - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(id)initWithName:(id)arg1 timed:(BOOL)arg2 parameters:(id)arg3 ;
-(void)setTimed:(BOOL)arg1 ;
-(void)updateParameters:(id)arg1 ;
-(void)updateID;
-(void)setEnded:(NSDate *)arg1 ;
-(void)setAutomaticallyEnded:(BOOL)arg1 ;
-(void)setEventLogId:(NSNumber *)arg1 ;
-(NSNumber *)eventLogId;
-(long long)startOffsetFromSessionStart:(id)arg1 ;
-(id)initWithName:(id)arg1 timed:(BOOL)arg2 ;
-(BOOL)isUnterminated;
-(id)dataRelativeToSessionStart:(id)arg1 ;
-(BOOL)timed;
-(BOOL)automaticallyEnded;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setStarted:(NSDate *)arg1 ;
-(NSDate *)started;
-(NSDate *)ended;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

