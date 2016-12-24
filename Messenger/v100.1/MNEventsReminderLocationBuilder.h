/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MNEventsReminderLocationBuilder : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSNumber* _latitude;
	NSNumber* _longitude;

}
+(id)eventsReminderLocation;
+(id)eventsReminderLocationFromExistingEventsReminderLocation:(id)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withIdentifier:(id)arg1 ;
-(id)withLatitude:(id)arg1 ;
-(id)withLongitude:(id)arg1 ;
-(id)build;
@end
