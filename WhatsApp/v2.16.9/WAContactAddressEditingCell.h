/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAContactMultiValueEditingCell.h>

@class NSArray, WAContactPropertyTextField;

@interface WAContactAddressEditingCell : WAContactMultiValueEditingCell {

	NSArray* _textFields;
	WAContactPropertyTextField* _textFieldStreet1;
	WAContactPropertyTextField* _textFieldStreet2;
	WAContactPropertyTextField* _textFieldCity;
	WAContactPropertyTextField* _textFieldState;
	WAContactPropertyTextField* _textFieldZIP;
	WAContactPropertyTextField* _textFieldCountry;

}

@property (nonatomic,retain) WAContactPropertyTextField * textFieldStreet1;                        //@synthesize textFieldStreet1=_textFieldStreet1 - In the implementation block
@property (nonatomic,retain) WAContactPropertyTextField * textFieldStreet2;                        //@synthesize textFieldStreet2=_textFieldStreet2 - In the implementation block
@property (nonatomic,retain) WAContactPropertyTextField * textFieldCity;                           //@synthesize textFieldCity=_textFieldCity - In the implementation block
@property (nonatomic,retain) WAContactPropertyTextField * textFieldState;                          //@synthesize textFieldState=_textFieldState - In the implementation block
@property (nonatomic,retain) WAContactPropertyTextField * textFieldZIP;                            //@synthesize textFieldZIP=_textFieldZIP - In the implementation block
@property (nonatomic,retain) WAContactPropertyTextField * textFieldCountry;                        //@synthesize textFieldCountry=_textFieldCountry - In the implementation block
@property (assign,nonatomic,__weak) id<WAContactAddressEditingCellDelegate> delegate; 
+(double)rowHeight;
-(void)reconfigure;
-(BOOL)contactPropertyTextFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)contactPropertyTextFieldShouldReturn:(id)arg1 ;
-(void)contactPropertyTextFieldValueChanged:(id)arg1 ;
-(void)setTextFieldStreet1:(WAContactPropertyTextField *)arg1 ;
-(WAContactPropertyTextField *)textFieldStreet1;
-(void)setTextFieldStreet2:(WAContactPropertyTextField *)arg1 ;
-(WAContactPropertyTextField *)textFieldStreet2;
-(void)setTextFieldCity:(WAContactPropertyTextField *)arg1 ;
-(WAContactPropertyTextField *)textFieldCity;
-(void)setTextFieldState:(WAContactPropertyTextField *)arg1 ;
-(WAContactPropertyTextField *)textFieldState;
-(void)setTextFieldZIP:(WAContactPropertyTextField *)arg1 ;
-(WAContactPropertyTextField *)textFieldZIP;
-(void)setTextFieldCountry:(WAContactPropertyTextField *)arg1 ;
-(WAContactPropertyTextField *)textFieldCountry;
-(id)currentlyActiveTextField;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
@end

