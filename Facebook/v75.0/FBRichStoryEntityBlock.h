/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryBlock.h>

@protocol FBRichStoryEntity;
@interface FBRichStoryEntityBlock : FBRichStoryBlock {

	id<FBRichStoryEntity> _entity;

}

@property (nonatomic,readonly) id<FBRichStoryEntity> entity;              //@synthesize entity=_entity - In the implementation block
-(id)initWithEntity:(id)arg1 blockID:(id)arg2 annotations:(id)arg3 ;
-(id)mediaID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FBRichStoryEntity>)entity;
@end
