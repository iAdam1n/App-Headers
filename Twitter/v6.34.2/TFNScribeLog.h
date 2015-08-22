/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface TFNScribeLog : NSObject {

	NSString* _category;
	NSString* _eventName;
	id _data;
	long long _type;

}

@property (nonatomic,copy) NSString * category;               //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) id data;                         //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)data;
-(void)setData:(id)arg1 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
@end
