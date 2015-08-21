/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate, SASMRAIDCalendarRepeatRule, NSNumber;

@interface SASMRAIDCalendarEvent : NSObject {

	NSString* _description;
	NSString* _ID;
	NSString* _location;
	NSString* _summary;
	NSDate* _start;
	NSDate* _end;
	long long _status;
	long long _transparency;
	SASMRAIDCalendarRepeatRule* _recurrence;
	NSDate* _reminder;
	NSNumber* _relativeReminder;

}

@property (nonatomic,retain) NSString * ID;                                        //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSString * description;                               //@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSString * location;                                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * summary;                                   //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSDate * start;                                       //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) NSDate * end;                                         //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long transparency;                               //@synthesize transparency=_transparency - In the implementation block
@property (nonatomic,retain) SASMRAIDCalendarRepeatRule * recurrence;              //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,retain) NSDate * reminder;                                    //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,retain) NSNumber * relativeReminder;                          //@synthesize relativeReminder=_relativeReminder - In the implementation block
-(BOOL)isEqualToCalendarEvent:(id)arg1 ;
-(long long)transparencyFromString:(id)arg1 ;
-(void)setRelativeReminder:(NSNumber *)arg1 ;
-(BOOL)fillWithJSON:(id)arg1 ;
-(void)fillWithDefaultValues;
-(BOOL)fillWithDictionary:(id)arg1 ;
-(NSNumber *)relativeReminder;
-(NSString *)ID;
-(void)setDescription:(NSString *)arg1 ;
-(NSDate *)reminder;
-(void)setReminder:(NSDate *)arg1 ;
-(long long)transparency;
-(void)setTransparency:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(NSDate *)start;
-(NSDate *)end;
-(NSString *)location;
-(void)setStart:(NSDate *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(void)setRecurrence:(SASMRAIDCalendarRepeatRule *)arg1 ;
-(SASMRAIDCalendarRepeatRule *)recurrence;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(long long)statusFromString:(id)arg1 ;
@end

