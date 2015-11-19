/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewCell.h>

@class ECTableCellTextField;

@interface ECLabeledTextFieldTableViewCell : ECBaseTableViewCell {

	BOOL _hasDoneToolbar;
	ECTableCellTextField* _textField;

}

@property (nonatomic,retain) ECTableCellTextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL hasDoneToolbar;                           //@synthesize hasDoneToolbar=_hasDoneToolbar - In the implementation block
-(BOOL)hasDoneToolbar;
-(void)setHasDoneToolbar:(BOOL)arg1 ;
-(void)textFieldFinished:(id)arg1 ;
-(void)setDefaults;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(ECTableCellTextField *)textField;
-(void)setTextField:(ECTableCellTextField *)arg1 ;
@end

