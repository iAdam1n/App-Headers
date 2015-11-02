/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface WAPhoneNumberMap : NSObject {

	NSString* _path;
	NSDictionary* _prefixMap;
	unsigned long long _maxPrefixLength;
	unsigned long long _minPrefixLength;
	NSString* _countryCode;
	NSString* _locale;

}

@property (nonatomic,copy,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * locale;                   //@synthesize locale=_locale - In the implementation block
-(id)locationForPhoneNumber:(id)arg1 ;
-(void)loadIfNeeded;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(NSString *)locale;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(NSString *)countryCode;
@end
