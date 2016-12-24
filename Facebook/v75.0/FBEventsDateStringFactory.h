/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBEventsDateStringFactory : NSObject
+(id)stringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)stringWithDate:(id)arg1 ;
+(id)stringWithoutTimeWithDate:(id)arg1 ;
+(id)todayTomorrowSpecificDateString:(id)arg1 includeTime:(BOOL)arg2 ;
+(BOOL)isTodayWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(BOOL)isMultiDayEventWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)multiDayEventDateStringWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)todayDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(BOOL)isTomorrowWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)tomorrowDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(BOOL)isThisWeekWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)thisWeekDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(BOOL)isAfterThisWeekWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)afterThisWeekDateStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)dateStringNotRelativeWithDateFormat:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 isAllDay:(BOOL)arg4 ;
+(id)timeStringForDateWithTruncation:(id)arg1 ;
+(id)endOfWeekForDate:(id)arg1 ;
+(id)timeStringForDate:(id)arg1 ;
+(id)shortDateStringWithDate:(id)arg1 ;
+(id)longDateStringWithDate:(id)arg1 ;
+(id)XMAStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
+(id)messengerContextBannerStringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 ;
@end
