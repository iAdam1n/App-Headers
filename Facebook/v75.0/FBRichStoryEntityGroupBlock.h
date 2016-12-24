/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryBlock.h>

@class NSArray;

@interface FBRichStoryEntityGroupBlock : FBRichStoryBlock {

	NSArray* _entityBlocks;
	long long _type;

}

@property (nonatomic,copy,readonly) NSArray * entityBlocks;              //@synthesize entityBlocks=_entityBlocks - In the implementation block
@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
-(NSArray *)entityBlocks;
-(id)initWithType:(long long)arg1 entityBlocks:(id)arg2 blockID:(id)arg3 annotations:(id)arg4 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
