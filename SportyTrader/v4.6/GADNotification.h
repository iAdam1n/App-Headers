/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface GADNotification : NSObject {

	NSString* _name;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)isNotificationURL:(id)arg1 ;
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(id)initWithNotificationURL:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSDictionary *)parameters;
@end
