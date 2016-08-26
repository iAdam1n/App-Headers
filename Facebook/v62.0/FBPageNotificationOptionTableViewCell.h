/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBItemView, FBItemContentViewConfigBuilder, FBItemViewConfigBuilder, UIImageView, FBItemContentView;

@interface FBPageNotificationOptionTableViewCell : UITableViewCell {

	FBItemView* _itemView;
	FBItemContentViewConfigBuilder* _contentViewBuilder;
	FBItemViewConfigBuilder* _itemViewBuilder;
	UIImageView* _disclosureView;
	FBItemContentView* _itemContentView;
	BOOL _isRadioList;
	BOOL _checked;

}

@property (assign,nonatomic) BOOL checked;              //@synthesize checked=_checked - In the implementation block
-(void)_configureWithTitle:(id)arg1 subtitle:(id)arg2 subscribed:(BOOL)arg3 ;
-(void)configureWithNotificationOption:(id)arg1 ;
-(void)configureWithNotificationRadioOption:(id)arg1 subscribed:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)checked;
@end
