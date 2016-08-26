/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBActivitySharingTableViewFilledInCellDelegate;
@class NSAttributedString, NSMutableAttributedString, FBNetworkImageView, UILabel, UITapGestureRecognizer;

@interface FBActivitySharingTableViewFilledInCell : UITableViewCell {

	NSAttributedString* _prefix;
	NSMutableAttributedString* _selection;
	FBNetworkImageView* _iconImageView;
	UILabel* _objectLabel;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _shouldHideClearButton;
	id<FBActivitySharingTableViewFilledInCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBActivitySharingTableViewFilledInCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideClearButton;                                                      //@synthesize shouldHideClearButton=_shouldHideClearButton - In the implementation block
-(void)setSelectionTextColor:(id)arg1 ;
-(void)setShouldHideClearButton:(BOOL)arg1 ;
-(void)_didTapClearButton:(id)arg1 ;
-(void)_didTapIcon:(id)arg1 ;
-(void)layoutWithIcon;
-(void)layoutWithoutIcon;
-(BOOL)shouldHideClearButton;
-(void)setDelegate:(id<FBActivitySharingTableViewFilledInCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBActivitySharingTableViewFilledInCellDelegate>)delegate;
-(void)setSelection:(id)arg1 ;
-(void)setPrefix:(id)arg1 ;
-(void)setIconImageView:(id)arg1 ;
@end
