/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>

@class UILabel, UIButton;

@interface FBNearbyPlacesNoResultsView : UIScrollView {

	UILabel* _subtitleLabel;
	UIButton* _seeMapButton;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * seeMapButton;              //@synthesize seeMapButton=_seeMapButton - In the implementation block
-(CGSize)_calculateSizeForLabel:(id)arg1 fontWeight:(unsigned long long)arg2 style:(unsigned long long)arg3 bounds:(CGSize)arg4 ;
-(UIButton *)seeMapButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end
