/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:19 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, NSString, NSUUID, IGSequence;

@interface IGRealtimePatchEvent : NSObject {

	NSArray* _operations;
	NSString* _topic;
	NSUUID* _uuid;
	IGSequence* _sequence;

}

@property (nonatomic,readonly) NSArray * operations;               //@synthesize operations=_operations - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;              //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) IGSequence * sequence;              //@synthesize sequence=_sequence - In the implementation block
-(IGSequence *)sequence;
-(id)initWithDictionary:(id)arg1 ;
-(NSUUID *)uuid;
-(NSArray *)operations;
-(NSString *)topic;
@end

