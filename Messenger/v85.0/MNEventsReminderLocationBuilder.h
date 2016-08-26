/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
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
