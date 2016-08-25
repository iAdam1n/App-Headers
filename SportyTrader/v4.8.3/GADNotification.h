/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
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

