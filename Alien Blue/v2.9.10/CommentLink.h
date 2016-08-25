/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CommentLink : NSObject {

	BOOL _isDescribed;
	int _linkType;
	NSString* _url;
	NSString* _originalUrl;
	NSString* _caption;

}

@property (nonatomic,retain) NSString * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * originalUrl;              //@synthesize originalUrl=_originalUrl - In the implementation block
@property (nonatomic,retain) NSString * caption;                  //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) int linkType;                        //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL isDescribed;                    //@synthesize isDescribed=_isDescribed - In the implementation block
+(id)friendlyNameFromLinkType:(int)arg1 ;
+(int)linkTypeFromUrl:(id)arg1 ;
+(int)linkTypeFromLegacyType:(id)arg1 ;
-(BOOL)isDescribed;
-(NSString *)originalUrl;
-(void)setOriginalUrl:(NSString *)arg1 ;
-(void)setIsDescribed:(BOOL)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setLinkType:(int)arg1 ;
-(int)linkType;
@end

