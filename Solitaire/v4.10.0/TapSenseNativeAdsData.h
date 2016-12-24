/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface TapSenseNativeAdsData : NSObject {

	BOOL _impressionSent;
	BOOL _isHtmlCell;
	NSNumber* _starRating;
	NSString* _html;
	NSString* _title;
	NSString* _text;
	NSString* _image;
	NSString* _icon;
	NSString* _ctaText;
	NSString* _sponsorName;

}

@property (assign,nonatomic) BOOL impressionSent;                 //@synthesize impressionSent=_impressionSent - In the implementation block
@property (assign,nonatomic) BOOL isHtmlCell;                     //@synthesize isHtmlCell=_isHtmlCell - In the implementation block
@property (nonatomic,retain) NSString * html;                     //@synthesize html=_html - In the implementation block
@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * icon;                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * ctaText;                  //@synthesize ctaText=_ctaText - In the implementation block
@property (nonatomic,retain) NSString * sponsorName;              //@synthesize sponsorName=_sponsorName - In the implementation block
@property (nonatomic,retain) NSNumber * starRating;               //@synthesize starRating=_starRating - In the implementation block
-(NSString *)ctaText;
-(void)setCtaText:(NSString *)arg1 ;
-(void)setIsHtmlCell:(BOOL)arg1 ;
-(void)setSponsorName:(NSString *)arg1 ;
-(NSString *)sponsorName;
-(void)loadTitleIntoLabel:(id)arg1 ;
-(void)loadTextIntoLabel:(id)arg1 ;
-(void)loadImageIntoImageView:(id)arg1 ;
-(void)loadIconIntoImageView:(id)arg1 ;
-(void)loadCtaTextIntoLabel:(id)arg1 ;
-(void)loadSponsorNameIntoLabel:(id)arg1 ;
-(BOOL)impressionSent;
-(void)setImpressionSent:(BOOL)arg1 ;
-(BOOL)isHtmlCell;
-(id)init;
-(void)setImage:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setIcon:(NSString *)arg1 ;
-(NSString *)icon;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(void)setStarRating:(NSNumber *)arg1 ;
-(NSNumber *)starRating;
@end
