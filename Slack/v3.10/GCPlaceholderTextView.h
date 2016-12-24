/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITextView.h>

@class UIColor, NSString;

@interface GCPlaceholderTextView : UITextView {

	UIColor* realTextColor;
	NSString* placeholder;
	UIColor* placeholderColor;

}

@property (nonatomic,retain) UIColor * realTextColor; 
@property (nonatomic,readonly) NSString * realText; 
@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) UIColor * placeholderColor; 
-(void)setRealTextColor:(UIColor *)arg1 ;
-(NSString *)realText;
-(UIColor *)realTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTextColor:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)awakeFromNib;
-(void)endEditing:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)beginEditing:(id)arg1 ;
@end
