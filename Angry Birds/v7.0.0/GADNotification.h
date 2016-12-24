/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)init;
-(id)description;
-(NSString *)name;
-(NSDictionary *)parameters;
@end
