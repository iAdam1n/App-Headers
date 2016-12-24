/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGBridgeMediaAttachment.h>

@class NSString, TGBridgeImageMediaAttachment, NSNumber;

@interface TGBridgeWebPageMediaAttachment : TGBridgeMediaAttachment {

	long long _webPageId;
	NSString* _url;
	NSString* _displayUrl;
	NSString* _pageType;
	NSString* _siteName;
	NSString* _title;
	NSString* _pageDescription;
	TGBridgeImageMediaAttachment* _photo;
	NSString* _embedUrl;
	NSString* _embedType;
	NSNumber* _duration;
	NSString* _author;
	CGSize _embedSize;

}

@property (assign,nonatomic) long long webPageId;                               //@synthesize webPageId=_webPageId - In the implementation block
@property (nonatomic,retain) NSString * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * displayUrl;                             //@synthesize displayUrl=_displayUrl - In the implementation block
@property (nonatomic,retain) NSString * pageType;                               //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSString * siteName;                               //@synthesize siteName=_siteName - In the implementation block
@property (nonatomic,retain) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * pageDescription;                        //@synthesize pageDescription=_pageDescription - In the implementation block
@property (nonatomic,retain) TGBridgeImageMediaAttachment * photo;              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) NSString * embedUrl;                               //@synthesize embedUrl=_embedUrl - In the implementation block
@property (nonatomic,retain) NSString * embedType;                              //@synthesize embedType=_embedType - In the implementation block
@property (assign,nonatomic) CGSize embedSize;                                  //@synthesize embedSize=_embedSize - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * author;                                 //@synthesize author=_author - In the implementation block
+(id)attachmentWithTGWebPageMediaAttachment:(id)arg1 ;
+(long long)mediaType;
-(long long)webPageId;
-(NSString *)displayUrl;
-(NSString *)embedUrl;
-(void)setWebPageId:(long long)arg1 ;
-(void)setDisplayUrl:(NSString *)arg1 ;
-(void)setEmbedUrl:(NSString *)arg1 ;
-(void)setEmbedType:(NSString *)arg1 ;
-(void)setEmbedSize:(CGSize)arg1 ;
-(NSString *)embedType;
-(CGSize)embedSize;
-(NSString *)pageDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)duration;
-(NSString *)url;
-(NSString *)title;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setPhoto:(TGBridgeImageMediaAttachment *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setPageType:(NSString *)arg1 ;
-(NSString *)pageType;
-(void)setPageDescription:(NSString *)arg1 ;
-(TGBridgeImageMediaAttachment *)photo;
-(NSString *)siteName;
-(void)setSiteName:(NSString *)arg1 ;
@end
