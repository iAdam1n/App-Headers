/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TWTRCardEntityImageValue : NSObject <NSCoding, NSCopying> {

	NSString* _imageURL;
	CGSize _imageSize;

}

@property (nonatomic,copy,readonly) NSString * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                      //@synthesize imageSize=_imageSize - In the implementation block
-(id)initWithURL:(id)arg1 height:(double)arg2 width:(double)arg3 ;
-(BOOL)isEqualToCardEntityImageValue:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageSize;
-(NSString *)imageURL;
@end
