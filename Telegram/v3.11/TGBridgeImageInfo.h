/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray;

@interface TGBridgeImageInfo : NSObject <NSCoding> {

	NSArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(id)imageInfoWithTGImageInfo:(id)arg1 ;
+(id)tgImageInfoWithBridgeImageInfo:(id)arg1 ;
-(id)closestImageUrlWithSize:(CGSize)arg1 resultingSize:(CGSize*)arg2 pickLargest:(BOOL)arg3 ;
-(id)closestImageUrlWithSize:(CGSize)arg1 resultingSize:(CGSize*)arg2 ;
-(id)imageUrlForLargestSize:(CGSize*)arg1 ;
-(id)closestImageUrlWithSize:(CGSize)arg1 resultingSize:(CGSize*)arg2 resultingFileSize:(int*)arg3 pickLargest:(BOOL)arg4 ;
-(id)closestImageUrlWithSize:(CGSize)arg1 resultingSize:(CGSize*)arg2 resultingFileSize:(int*)arg3 ;
-(id)imageUrlForSizeLargerThanSize:(CGSize)arg1 actualSize:(CGSize*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)entries;
@end
