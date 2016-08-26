/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBUserSession, FBNetworkImageView, UILabel;

@interface FBCollectionTitledImageGridCell : UICollectionViewCell {

	FBUserSession* _session;
	FBNetworkImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,retain) FBNetworkImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                             //@synthesize label=_label - In the implementation block
-(void)configureWithSession:(id)arg1 ;
-(void)updateLabelText:(id)arg1 ;
-(CGRect)_defaultLabelFrame;
-(double)_titleFontSize;
-(double)_gridImageViewDim;
-(void)layoutSubviews;
-(FBNetworkImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setImageView:(FBNetworkImageView *)arg1 ;
@end
