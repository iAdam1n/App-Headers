/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface MKGiphyPickerViewCollectionViewCell : UICollectionViewCell {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)mk_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateConstraints;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)contentViewConstraints;
@end
