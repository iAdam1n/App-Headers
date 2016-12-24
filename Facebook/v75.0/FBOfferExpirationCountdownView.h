/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichTextView.h>

@class NSDate, FBRichTextView, FBTimer;

@interface FBOfferExpirationCountdownView : FBRichTextView {

	unsigned long long _location;
	NSDate* _expirationDate;
	FBRichTextView* _textView;
	FBTimer* _timer;

}

@property (nonatomic,retain) FBRichTextView * textView;                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) FBTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextView:(FBRichTextView *)arg1 ;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(FBRichTextView *)textView;
-(FBTimer *)timer;
-(void)setTimer:(FBTimer *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)_updateText;
@end
