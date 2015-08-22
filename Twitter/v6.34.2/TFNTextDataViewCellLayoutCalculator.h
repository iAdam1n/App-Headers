/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class UIImage, NSString, UIFont;

@interface TFNTextDataViewCellLayoutCalculator : NSObject {

	BOOL _multipleTextLines;
	BOOL _multipleDetailTextLines;
	long long _style;
	UIImage* _icon;
	NSString* _text;
	UIFont* _textFont;
	long long _textLineBreakMode;
	NSString* _detailText;
	UIFont* _detailTextFont;
	long long _detailTextLineBreakMode;
	double _detailTextPadding;
	NSString* _badgeText;
	long long _verticalAlignment;
	CGSize _totalSize;
	CGRect _iconFrame;
	CGRect _textFrame;
	CGRect _detailTextFrame;
	CGRect _badgeFrame;

}

@property (assign,nonatomic) long long style;                                //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * textFont;                              //@synthesize textFont=_textFont - In the implementation block
@property (assign,nonatomic) long long textLineBreakMode;                    //@synthesize textLineBreakMode=_textLineBreakMode - In the implementation block
@property (assign,nonatomic) BOOL multipleTextLines;                         //@synthesize multipleTextLines=_multipleTextLines - In the implementation block
@property (nonatomic,retain) NSString * detailText;                          //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) UIFont * detailTextFont;                        //@synthesize detailTextFont=_detailTextFont - In the implementation block
@property (assign,nonatomic) long long detailTextLineBreakMode;              //@synthesize detailTextLineBreakMode=_detailTextLineBreakMode - In the implementation block
@property (assign,nonatomic) BOOL multipleDetailTextLines;                   //@synthesize multipleDetailTextLines=_multipleDetailTextLines - In the implementation block
@property (assign,nonatomic) double detailTextPadding;                       //@synthesize detailTextPadding=_detailTextPadding - In the implementation block
@property (nonatomic,retain) NSString * badgeText;                           //@synthesize badgeText=_badgeText - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                    //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,readonly) CGSize totalSize;                             //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,readonly) CGRect iconFrame;                             //@synthesize iconFrame=_iconFrame - In the implementation block
@property (nonatomic,readonly) CGRect textFrame;                             //@synthesize textFrame=_textFrame - In the implementation block
@property (nonatomic,readonly) CGRect detailTextFrame;                       //@synthesize detailTextFrame=_detailTextFrame - In the implementation block
@property (nonatomic,readonly) CGRect badgeFrame;                            //@synthesize badgeFrame=_badgeFrame - In the implementation block
-(CGRect)detailTextFrame;
-(NSString *)badgeText;
-(void)setMultipleTextLines:(BOOL)arg1 ;
-(void)setMultipleDetailTextLines:(BOOL)arg1 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setTextLineBreakMode:(long long)arg1 ;
-(void)setDetailTextFont:(UIFont *)arg1 ;
-(void)setDetailTextLineBreakMode:(long long)arg1 ;
-(void)setDetailTextPadding:(double)arg1 ;
-(void)calculateLayoutForContentFrame:(CGRect)arg1 ;
-(CGRect)iconFrame;
-(BOOL)multipleTextLines;
-(BOOL)multipleDetailTextLines;
-(double)detailTextPadding;
-(void)setBadgeText:(NSString *)arg1 ;
-(void)_calculateHorizontalLayoutForContentFrame:(CGRect)arg1 textSize:(CGSize)arg2 detailSize:(CGSize)arg3 padding:(double)arg4 ;
-(void)_calculateVerticalLayoutForContentFrame:(CGRect)arg1 textSize:(CGSize)arg2 detailSize:(CGSize)arg3 padding:(double)arg4 ;
-(long long)textLineBreakMode;
-(UIFont *)detailTextFont;
-(long long)detailTextLineBreakMode;
-(NSString *)detailText;
-(UIImage *)icon;
-(CGRect)badgeFrame;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIFont *)textFont;
-(CGSize)totalSize;
-(void)setDetailText:(NSString *)arg1 ;
-(CGRect)textFrame;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
@end
