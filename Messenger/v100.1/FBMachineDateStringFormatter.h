/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSDateFormatter;

@interface FBMachineDateStringFormatter : NSObject {

	NSDateFormatter* _dateFormatter;
	mutex _lock;

}
+(id)sharedFormatter;
-(id)dateFromLimitedVariantsOfAnISO8601String:(id)arg1 ;
-(id)limitedVariantsOfAnISO8601StringFromDate:(id)arg1 ;
-(id)ISO8601StringFromDate:(id)arg1 timeZone:(id)arg2 dayOnly:(BOOL)arg3 ;
-(id)init;
@end
