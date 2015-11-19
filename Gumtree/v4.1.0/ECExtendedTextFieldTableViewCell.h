/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewCell.h>

@class UITextField, UISwitch;

@interface ECExtendedTextFieldTableViewCell : ECBaseTableViewCell {

	BOOL _hasDoneToolbar;
	UITextField* _textField;
	UISwitch* _optOutSwitch;

}

@property (nonatomic,retain) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL hasDoneToolbar;                  //@synthesize hasDoneToolbar=_hasDoneToolbar - In the implementation block
@property (nonatomic,retain) UISwitch * optOutSwitch;              //@synthesize optOutSwitch=_optOutSwitch - In the implementation block
+(double)defaultCellHeight;
-(BOOL)hasDoneToolbar;
-(void)setHasDoneToolbar:(BOOL)arg1 ;
-(UISwitch *)optOutSwitch;
-(void)setOptOutSwitch:(UISwitch *)arg1 ;
-(BOOL)detailTextLabelIsConstraint;
-(void)stopEditing;
-(BOOL)optedOut;
-(void)setOptedOut:(BOOL)arg1 ;
-(void)optOutAction:(id)arg1 ;
-(void)setDefaults;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end
