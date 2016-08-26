/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, UITextView;

@interface FlurryTumblrTitleCell : UITableViewCell <UITextViewDelegate> {

	NSString* _localizedText;
	double _cellHeight;
	double _cellWidth;
	NSString* _title;
	UITextView* _titleTextView;

}

@property (nonatomic,retain) UITextView * titleTextView;              //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) NSString * localizedText;                //@synthesize localizedText=_localizedText - In the implementation block
@property (assign,nonatomic) double cellWidth;                        //@synthesize cellWidth=_cellWidth - In the implementation block
@property (assign,nonatomic) double cellHeight;                       //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createView;
-(void)setTitleTextView:(UITextView *)arg1 ;
-(UITextView *)titleTextView;
-(id)initWithTitle:(id)arg1 localizedText:(id)arg2 postWidth:(double)arg3 postHeight:(double)arg4 ;
-(void)setCellHeight:(double)arg1 ;
-(void)setCellWidth:(double)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)localizedText;
-(void)setLocalizedText:(NSString *)arg1 ;
-(double)cellHeight;
-(double)cellWidth;
@end
