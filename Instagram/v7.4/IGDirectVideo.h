/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGDirectContent.h>
#import <Instagram/NSCoding.h>

@class IGVideo, IGPhoto;

@interface IGDirectVideo : IGDirectContent <NSCoding> {

	IGVideo* _video;
	IGPhoto* _photo;

}

@property (nonatomic,retain) IGVideo * video;              //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) IGPhoto * photo;              //@synthesize photo=_photo - In the implementation block
-(IGPhoto *)photo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setVideo:(IGVideo *)arg1 ;
-(id)digestDescription;
-(void)setPhoto:(IGPhoto *)arg1 ;
-(IGVideo *)video;
@end

