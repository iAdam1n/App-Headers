/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CBCoubVideoSource : NSObject {

	NSString* _yourtubeURL;
	NSString* _title;
	NSString* _thumbnail;

}

@property (nonatomic,retain) NSString * yourtubeURL;              //@synthesize yourtubeURL=_yourtubeURL - In the implementation block
@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * thumbnail;                //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) BOOL isYouTube; 
+(id)sourceFromData:(id)arg1 ;
-(void)setYourtubeURL:(NSString *)arg1 ;
-(NSString *)yourtubeURL;
-(BOOL)isYouTube;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)thumbnail;
-(void)setThumbnail:(NSString *)arg1 ;
@end
