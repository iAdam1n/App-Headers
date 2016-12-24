/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBItemCollectionViewCell.h>

@class UIView;

@interface FBCardItemCollectionViewCell : FBItemCollectionViewCell {

	UIEdgeInsets _edgeInsets;
	UIView* _highlightView;
	long long _cardStyle;
	long long _cardInset;
	long long _cardOption;

}

@property (assign,nonatomic) long long cardInset;               //@synthesize cardInset=_cardInset - In the implementation block
@property (assign,nonatomic) long long cardOption;              //@synthesize cardOption=_cardOption - In the implementation block
@property (assign,nonatomic) long long cardStyle;               //@synthesize cardStyle=_cardStyle - In the implementation block
-(void)setCardInset:(long long)arg1 ;
-(long long)cardInset;
-(void)configureWithInset:(long long)arg1 option:(long long)arg2 ;
-(long long)cardStyle;
-(void)configureHighlightView;
-(void)setCardStyle:(long long)arg1 ;
-(long long)cardOption;
-(void)setCardOption:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end
