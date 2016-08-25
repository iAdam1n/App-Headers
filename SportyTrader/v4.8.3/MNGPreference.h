/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSString;

@interface MNGPreference : NSObject {

	long long _age;
	CLLocation* _location;
	NSString* _language;
	long long _gender;
	NSString* _keyWord;

}

@property (assign) long long age;                           //@synthesize age=_age - In the implementation block
@property (retain) CLLocation * location;                   //@synthesize location=_location - In the implementation block
@property (retain) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (assign) long long gender;                        //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSString * keyWord;              //@synthesize keyWord=_keyWord - In the implementation block
-(NSString *)keyWord;
-(void)setKeyWord:(NSString *)arg1 ;
-(id)dictionaryValues;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(void)setAge:(long long)arg1 ;
-(long long)age;
@end

