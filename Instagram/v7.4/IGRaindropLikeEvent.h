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

@class NSString;

@interface IGRaindropLikeEvent : TBaseStruct <TBase, NSCoding> {

	BOOL __thrift_isLike;
	long long __thrift_mediaId;
	BOOL __thrift_isDoubleTap;
	long long __thrift_mediaOwnerId;
	BOOL __thrift_isFollow;
	NSString* __thrift_algorithm;
	long long __thrift_position;
	BOOL __thrift_isLike_set;
	BOOL __thrift_mediaId_set;
	BOOL __thrift_isDoubleTap_set;
	BOOL __thrift_mediaOwnerId_set;
	BOOL __thrift_isFollow_set;
	BOOL __thrift_algorithm_set;
	BOOL __thrift_position_set;

}

@property (assign,nonatomic) BOOL isLike; 
@property (assign,nonatomic) long long mediaId; 
@property (assign,nonatomic) BOOL isDoubleTap; 
@property (assign,nonatomic) long long mediaOwnerId; 
@property (assign,nonatomic) BOOL isFollow; 
@property (nonatomic,retain) NSString * algorithm; 
@property (assign,nonatomic) long long position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(long long)mediaId;
-(void)setMediaId:(long long)arg1 ;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)setMediaOwnerId:(long long)arg1 ;
-(void)setIsFollow:(BOOL)arg1 ;
-(void)setIsDoubleTap:(BOOL)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)mediaIdIsSet;
-(void)unsetMediaId;
-(BOOL)positionIsSet;
-(void)unsetPosition;
-(BOOL)algorithmIsSet;
-(void)unsetAlgorithm;
-(long long)mediaOwnerId;
-(BOOL)mediaOwnerIdIsSet;
-(void)unsetMediaOwnerId;
-(BOOL)isFollow;
-(BOOL)isFollowIsSet;
-(void)unsetIsFollow;
-(id)initWithIsLike:(BOOL)arg1 mediaId:(long long)arg2 isDoubleTap:(BOOL)arg3 mediaOwnerId:(long long)arg4 isFollow:(BOOL)arg5 algorithm:(id)arg6 position:(long long)arg7 ;
-(BOOL)isLikeIsSet;
-(void)unsetIsLike;
-(BOOL)isDoubleTap;
-(BOOL)isDoubleTapIsSet;
-(void)unsetIsDoubleTap;
-(BOOL)makeImmutable;
-(NSString *)algorithm;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(BOOL)isLike;
-(void)setIsLike:(BOOL)arg1 ;
@end

