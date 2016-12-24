/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont;

@interface PTHTweetbotEntityTextFontAppearance : NSObject <NSCopying> {

	UIFont* _defaultBodyFont;
	UIFont* _defaultPlaceFont;
	UIFont* _defaultTimeFont;
	UIFont* _defaultPrimaryNameFont;
	UIFont* _defaultSecondaryNameFont;
	UIFont* _defaultRetweetFont;
	UIFont* _defaultQuoteBodyFont;
	UIFont* _defaultQuotePrimaryNameFont;
	UIFont* _defaultQuoteSecondaryNameFont;
	UIFont* _defaultQuoteTimeFont;
	UIFont* _bodyFont;
	UIFont* _placeFont;
	UIFont* _timeFont;
	UIFont* _primaryNameFont;
	UIFont* _secondaryNameFont;
	double _titleHeight;
	UIFont* _retweetFont;
	double _retweetHeight;
	UIFont* _quoteBodyFont;
	UIFont* _quotePrimaryNameFont;
	UIFont* _quoteSecondaryNameFont;
	UIFont* _quoteTimeFont;
	double _quoteTitleHeight;
	long long _interfaceIdiom;

}

@property (nonatomic,readonly) long long interfaceIdiom;                   //@synthesize interfaceIdiom=_interfaceIdiom - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                            //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,retain) UIFont * placeFont;                           //@synthesize placeFont=_placeFont - In the implementation block
@property (nonatomic,retain) UIFont * primaryNameFont;                     //@synthesize primaryNameFont=_primaryNameFont - In the implementation block
@property (nonatomic,retain) UIFont * secondaryNameFont;                   //@synthesize secondaryNameFont=_secondaryNameFont - In the implementation block
@property (nonatomic,retain) UIFont * timeFont;                            //@synthesize timeFont=_timeFont - In the implementation block
@property (nonatomic,readonly) double titleHeight;                         //@synthesize titleHeight=_titleHeight - In the implementation block
@property (nonatomic,retain) UIFont * retweetFont;                         //@synthesize retweetFont=_retweetFont - In the implementation block
@property (nonatomic,readonly) double retweetHeight;                       //@synthesize retweetHeight=_retweetHeight - In the implementation block
@property (nonatomic,retain) UIFont * quoteBodyFont;                       //@synthesize quoteBodyFont=_quoteBodyFont - In the implementation block
@property (nonatomic,retain) UIFont * quotePrimaryNameFont;                //@synthesize quotePrimaryNameFont=_quotePrimaryNameFont - In the implementation block
@property (nonatomic,retain) UIFont * quoteSecondaryNameFont;              //@synthesize quoteSecondaryNameFont=_quoteSecondaryNameFont - In the implementation block
@property (nonatomic,retain) UIFont * quoteTimeFont;                       //@synthesize quoteTimeFont=_quoteTimeFont - In the implementation block
@property (nonatomic,readonly) double quoteTitleHeight;                    //@synthesize quoteTitleHeight=_quoteTitleHeight - In the implementation block
+(id)defaultFontAppearance;
+(id)defaultPhoneFontAppearance;
+(id)defaultPadFontAppearance;
-(double)titleHeight;
-(double)retweetHeight;
-(void)setBodyFont:(UIFont *)arg1 ;
-(id)initWithInterfaceIdiom:(long long)arg1 ;
-(UIFont *)primaryNameFont;
-(UIFont *)secondaryNameFont;
-(UIFont *)retweetFont;
-(UIFont *)quotePrimaryNameFont;
-(UIFont *)quoteSecondaryNameFont;
-(UIFont *)quoteTimeFont;
-(void)setPlaceFont:(UIFont *)arg1 ;
-(void)setPrimaryNameFont:(UIFont *)arg1 ;
-(void)setSecondaryNameFont:(UIFont *)arg1 ;
-(void)setTimeFont:(UIFont *)arg1 ;
-(void)setRetweetFont:(UIFont *)arg1 ;
-(void)setQuoteBodyFont:(UIFont *)arg1 ;
-(void)setQuotePrimaryNameFont:(UIFont *)arg1 ;
-(void)setQuoteSecondaryNameFont:(UIFont *)arg1 ;
-(void)setQuoteTimeFont:(UIFont *)arg1 ;
-(UIFont *)placeFont;
-(UIFont *)quoteBodyFont;
-(double)quoteTitleHeight;
-(long long)interfaceIdiom;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFont *)timeFont;
-(UIFont *)bodyFont;
-(void)_resetFonts;
@end
