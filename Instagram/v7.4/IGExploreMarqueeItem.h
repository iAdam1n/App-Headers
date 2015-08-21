/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCoding.h>

@class NSString, NSArray;

@interface IGExploreMarqueeItem : NSObject <NSCoding> {

	unsigned long long _type;
	NSString* _title;
	NSString* _key;
	NSArray* _marqueeImages;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSArray * marqueeImages;              //@synthesize marqueeImages=_marqueeImages - In the implementation block
-(id)loggingType;
-(id)imageURLForSize:(CGSize)arg1 ;
-(id)initWithType:(unsigned long long)arg1 title:(id)arg2 key:(id)arg3 marqueeImages:(id)arg4 ;
-(NSArray *)marqueeImages;
-(id)imageURLForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)key;
-(unsigned long long)type;
-(NSString *)title;
@end

