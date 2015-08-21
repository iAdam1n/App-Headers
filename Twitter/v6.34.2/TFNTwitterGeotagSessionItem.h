/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterScribableItem.h>
#import <Twitter/NSCopying.h>

@class TFNTwitterPlace, NSString, NSDictionary;

@interface TFNTwitterGeotagSessionItem : NSObject <TFNTwitterScribableItem, NSCopying> {

	BOOL _isAutotag;
	TFNTwitterPlace* _place;
	long long _rank;
	unsigned long long _offset;
	NSString* _searchQuery;
	NSString* _timestamp;

}

@property (nonatomic,retain) TFNTwitterPlace * place;                          //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) long long rank;                                   //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL isAutotag;                                   //@synthesize isAutotag=_isAutotag - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                             //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) NSString * timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * scribeItemImpressionID; 
@property (nonatomic,readonly) NSDictionary * scribeItem; 
-(void)setSearchQuery:(NSString *)arg1 ;
-(NSDictionary *)scribeItem;
-(NSString *)scribeItemImpressionID;
-(BOOL)isAutotag;
-(void)setIsAutotag:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)timestamp;
-(void)setTimestamp:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(long long)rank;
-(void)setPlace:(TFNTwitterPlace *)arg1 ;
-(TFNTwitterPlace *)place;
-(NSString *)searchQuery;
-(void)setRank:(long long)arg1 ;
@end

