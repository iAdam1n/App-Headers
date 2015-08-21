/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTimeline.h>

@class TFNTwitterTrendsStream;

@interface TFNTwitterTrendsTimeline : TFNTwitterTimeline {

	BOOL _locationEnabled;
	TFNTwitterTrendsStream* stream;

}

@property (assign,getter=isLocationEnabled,nonatomic) BOOL locationEnabled;              //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (nonatomic,readonly) TFNTwitterTrendsStream * stream; 
+(unsigned long long)refreshPolicy;
+(id)identifier;
-(id)deserializedDictionary;
-(id)streamPlistDictionaryValue;
-(id)streamWithPlistDictionary:(id)arg1 ;
-(BOOL)isLocationEnabled;
-(TFNTwitterTrendsStream *)stream;
-(void)setLocationEnabled:(BOOL)arg1 ;
@end

