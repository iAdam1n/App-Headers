/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTimeline.h>

@interface TFNTwitterActivityTimelineBase : TFNTwitterTimeline {

	BOOL _useVITNotificationsSettings;
	BOOL _useSelectedFilterType;
	unsigned long long _options;
	long long _antispamConnectTweetCount;
	long long _antispamConnectUserCount;

}

@property (assign,nonatomic) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long antispamConnectTweetCount;              //@synthesize antispamConnectTweetCount=_antispamConnectTweetCount - In the implementation block
@property (assign,nonatomic) long long antispamConnectUserCount;               //@synthesize antispamConnectUserCount=_antispamConnectUserCount - In the implementation block
@property (assign,nonatomic) BOOL useVITNotificationsSettings;                 //@synthesize useVITNotificationsSettings=_useVITNotificationsSettings - In the implementation block
@property (assign,nonatomic) BOOL useSelectedFilterType;                       //@synthesize useSelectedFilterType=_useSelectedFilterType - In the implementation block
+(Class)streamClass;
+(BOOL)forMyActivity;
-(void)setUseVITNotificationsSettings:(BOOL)arg1 ;
-(void)setUseSelectedFilterType:(BOOL)arg1 ;
-(long long)antispamConnectTweetCount;
-(void)setAntispamConnectTweetCount:(long long)arg1 ;
-(long long)antispamConnectUserCount;
-(void)setAntispamConnectUserCount:(long long)arg1 ;
-(BOOL)useVITNotificationsSettings;
-(BOOL)useSelectedFilterType;
-(BOOL)supportsMultipleStreams;
-(id)deserializedDictionary;
-(id)streamPlistDictionaryValue;
-(id)streamWithPlistDictionary:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
@end

