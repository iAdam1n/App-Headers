/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(NSString *)locale;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(NSString *)countryCode;
-(void)loadIfNeeded;
@end
