/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewCell.h>

@class ECTextView;

@interface ECExtendedTextViewTableViewCell : ECBaseTableViewCell {

	ECTextView* _textView;

}

@property (nonatomic,retain) ECTextView * textView;              //@synthesize textView=_textView - In the implementation block
+(double)defaultCellHeight;
-(BOOL)detailTextLabelIsConstraint;
-(void)setDefaults;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)setTextView:(ECTextView *)arg1 ;
-(ECTextView *)textView;
@end

