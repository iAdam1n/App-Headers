/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface HPTextViewInternal : UITextView {

	BOOL _displayPlaceHolder;
	NSString* _placeholder;
	UIColor* _placeholderColor;

}

@property (nonatomic,retain) NSString * placeholder;                  //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) BOOL displayPlaceHolder;                 //@synthesize displayPlaceHolder=_displayPlaceHolder - In the implementation block
-(void)setDisplayPlaceHolder:(BOOL)arg1 ;
-(BOOL)displayPlaceHolder;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
@end
