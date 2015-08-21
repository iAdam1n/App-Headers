/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:19 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class IGRaindropHashtag, IGRaindropPositionIn2D, NSString;

@interface IGRaindropTagClickEvent : TBaseStruct <TBase, NSCoding> {

	IGRaindropHashtag* __thrift_tag;
	long long __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	BOOL __thrift_tag_set;
	BOOL __thrift_sectionNumber_set;
	BOOL __thrift_position_set;
	BOOL __thrift_algorithm_set;
	BOOL __thrift_clusterKey_set;

}

@property (nonatomic,retain) IGRaindropHashtag * tag; 
@property (assign,nonatomic) long long sectionNumber; 
@property (nonatomic,retain) IGRaindropPositionIn2D * position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (nonatomic,retain) NSString * clusterKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)setSectionNumber:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)positionIsSet;
-(void)unsetPosition;
-(BOOL)algorithmIsSet;
-(void)unsetAlgorithm;
-(BOOL)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(BOOL)clusterKeyIsSet;
-(void)unsetClusterKey;
-(id)initWithTag:(id)arg1 sectionNumber:(long long)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 ;
-(BOOL)tagIsSet;
-(void)unsetTag;
-(long long)sectionNumber;
-(BOOL)makeImmutable;
-(NSString *)algorithm;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setPosition:(IGRaindropPositionIn2D *)arg1 ;
-(IGRaindropPositionIn2D *)position;
-(IGRaindropHashtag *)tag;
-(void)setTag:(IGRaindropHashtag *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

