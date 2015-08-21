/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBClock;
#import <Messenger/Messenger-Structs.h>
@class NSCalendar, NSDateFormatter, FBLocalizedDateFormats;

@interface FBDateStringFormatter : NSObject {

	NSCalendar* _calendar;
	NSDateFormatter* _dateFormatter;
	RecursiveMutex _lock;
	FBLocalizedDateFormats* _localizedDateFormats;
	id<FBClock> _clock;

}
+(id)sharedFormatter;
-(id)initWithClock:(id)arg1 ;
-(void)localizedDateFormatsChanged:(id)arg1 ;
-(id)_dateAndTimeStringFromDate:(id)arg1 ;
-(id)_dayAndDateWithoutYearAndTimeStringFromDate:(id)arg1 ;
-(id)_dateStringFromDate:(id)arg1 includeDayInAdditionToDate:(BOOL)arg2 ;
-(id)_timeStringFromDate:(id)arg1 ;
-(id)_dateWithoutYearStringFromDate:(id)arg1 ;
-(id)_dateWithoutYearAndTimeStringFromDate:(id)arg1 ;
-(id)_dateStringTodayTomorrowOrMonthDay:(id)arg1 ;
-(id)_monthAndYearStringFromDate:(id)arg1 ;
-(id)_yearStringFormatDate:(id)arg1 ;
-(id)_stringFromPastDateOnlyRelativeForToday:(id)arg1 ;
-(id)_stringFromPastDateOnlyTimeForToday:(id)arg1 ;
-(id)_stringFromPastDateAbbreviatedWithEditorialMonthNames:(id)arg1 ;
-(id)_stringFromPastDateAbbreviatedForTodayOnly:(id)arg1 ;
-(id)_stringFromPastDateAbbreviated:(id)arg1 ;
-(id)_stringFromPastDateExtraAbbreviated:(id)arg1 ;
-(id)_stringFromPastDate:(id)arg1 ;
-(id)_stringFromFutureDate:(id)arg1 ;
-(id)_stringFromPastDateWithoutTime:(id)arg1 ;
-(id)_stringFromFutureDateWithoutTime:(id)arg1 ;
-(id)_stringFromPastDateWithSeconds:(id)arg1 ;
-(id)_stringFromDate:(id)arg1 template:(id)arg2 ;
-(id)_dayOfMonthStringFromDate:(id)arg1 ;
-(id)_monthAbbrvStringFromDate:(id)arg1 ;
-(id)_monthFromDate:(id)arg1 ;
-(id)_dayStringFromDate:(id)arg1 ;
-(void)overrideLocale:(id)arg1 ;
-(id)stringFromDate:(id)arg1 behavior:(int)arg2 ;
-(id)abbreviatedRelativeStringFromPastDate:(id)arg1 accessibleString:(id*)arg2 ;
-(id)abbreviatedRelativeStringIfTodayFromPastDate:(id)arg1 accessibleString:(id*)arg2 ;
-(id)extraAbbreviatedRelativeStringFromPastDate:(id)arg1 accessibleString:(id*)arg2 ;
-(id)durationStringFromTimeInterval:(double)arg1 ;
-(void)dealloc;
@end

