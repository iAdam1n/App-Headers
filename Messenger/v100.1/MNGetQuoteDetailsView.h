/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNGetQuoteViewModel, UILabel, NSMutableArray, MNGetQuoteAddressHandler;

@interface MNGetQuoteDetailsView : UIView {

	MNGetQuoteViewModel* _viewModel;
	UILabel* _titleLabel;
	UILabel* _nameTitleLabel;
	UILabel* _nameLabel;
	UILabel* _phoneNumberTitleLabel;
	UILabel* _phoneNumberLabel;
	UILabel* _emailAddressTitleLabel;
	UILabel* _emailAddressLabel;
	UILabel* _streetAddressTitleLabel;
	UILabel* _streetAddressLabel;
	NSMutableArray* _questionLabels;
	NSMutableArray* _answerLabels;
	MNGetQuoteAddressHandler* _addressHandler;

}
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_phoneNumberLabelTapped;
-(void)_emailAddressLabelTapped;
-(void)_streetAddressLabelTapped;
-(id)initWithViewModel:(id)arg1 mapData:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
