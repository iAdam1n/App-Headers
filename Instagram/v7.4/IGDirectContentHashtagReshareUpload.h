/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGDirectContentUpload.h>
#import <Instagram/NSCoding.h>

@class NSString;

@interface IGDirectContentHashtagReshareUpload : IGDirectContentUpload <NSCoding> {

	NSString* _hashtagName;

}

@property (nonatomic,copy) NSString * hashtagName;              //@synthesize hashtagName=_hashtagName - In the implementation block
-(NSString *)hashtagName;
-(void)setHashtagName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
