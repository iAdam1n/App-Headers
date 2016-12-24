/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCalendarItemTapHandler;
@class FBEventCalendarStore, FBUserSession;

@interface FBCalendarRowDataSourceToolbox : NSObject {

	FBEventCalendarStore* _calendarStore;
	FBUserSession* _session;
	id<FBCalendarItemTapHandler> _calendarTapHandler;

}

@property (nonatomic,readonly) FBEventCalendarStore * calendarStore;                         //@synthesize calendarStore=_calendarStore - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBCalendarItemTapHandler> calendarTapHandler;              //@synthesize calendarTapHandler=_calendarTapHandler - In the implementation block
-(id)initWithStore:(id)arg1 session:(id)arg2 calendarTapHandler:(id)arg3 ;
-(FBEventCalendarStore *)calendarStore;
-(id<FBCalendarItemTapHandler>)calendarTapHandler;
-(FBUserSession *)session;
@end
