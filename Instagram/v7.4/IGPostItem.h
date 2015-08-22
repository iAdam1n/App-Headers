/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class NSString, IGPhoto, IGVideo, NSURL;

@interface IGPostItem : NSObject <NSCoding> {

	NSString* _pk;
	long long _mediaType;
	IGPhoto* _photo;
	IGVideo* _video;
	NSURL* _link;

}

@property (nonatomic,copy,readonly) NSString * pk;               //@synthesize pk=_pk - In the implementation block
@property (nonatomic,readonly) long long mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                  //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                  //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSURL * link;                     //@synthesize link=_link - In the implementation block
-(NSString *)pk;
-(id)initWithFeedDictionary:(id)arg1 ;
-(id)initWithType:(long long)arg1 photo:(id)arg2 video:(id)arg3 link:(id)arg4 pk:(id)arg5 ;
-(IGPhoto *)photo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)link;
-(IGVideo *)video;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
@end
