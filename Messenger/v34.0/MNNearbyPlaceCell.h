/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBNetworkImageView, UILabel, UIView, UIImageView;

@interface MNNearbyPlaceCell : UITableViewCell {

	FBNetworkImageView* _thumbnailImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _separatorView;
	UIImageView* _thumbnailMaskImageView;

}
-(id)initWithReuseIdentifier:(id)arg1 imageDownloader:(id)arg2 ;
-(void)configureCellWithNearbyPlace:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

