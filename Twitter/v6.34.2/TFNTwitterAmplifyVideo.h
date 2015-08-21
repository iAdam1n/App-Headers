/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterAmplifyAbstractVideo.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface TFNTwitterAmplifyVideo : TFNTwitterAmplifyAbstractVideo {

	NSMutableDictionary* _beaconURLs;
	unsigned long long _type;
	unsigned long long _index;
	NSString* _uuid;
	NSString* _source;
	NSNumber* _ownerId;
	long long _adPosition;

}

@property (assign,nonatomic) long long adPosition;              //@synthesize adPosition=_adPosition - In the implementation block
+(unsigned long long)typeForString:(id)arg1 ;
-(long long)adPosition;
-(void)setOwnerId:(id)arg1 ;
-(id)ownerId;
-(void)setAdPosition:(long long)arg1 ;
-(void)addBeaconURL:(id)arg1 forAction:(id)arg2 ;
-(id)beaconURLsForAction:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)source;
-(void)setSource:(id)arg1 ;
-(id)uuid;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setUuid:(id)arg1 ;
@end

