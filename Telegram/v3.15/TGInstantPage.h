/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSDictionary;

@interface TGInstantPage : NSObject <NSCoding> {

	BOOL _isPartial;
	NSArray* _blocks;
	NSDictionary* _images;
	NSDictionary* _videos;

}

@property (nonatomic,readonly) BOOL isPartial;                     //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) NSArray * blocks;                   //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,readonly) NSDictionary * images;              //@synthesize images=_images - In the implementation block
@property (nonatomic,readonly) NSDictionary * videos;              //@synthesize videos=_videos - In the implementation block
+(id)parse:(id)arg1 ;
-(id)initWithIsPartial:(BOOL)arg1 blocks:(id)arg2 images:(id)arg3 videos:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)images;
-(BOOL)isPartial;
-(NSDictionary *)videos;
-(NSArray *)blocks;
@end
