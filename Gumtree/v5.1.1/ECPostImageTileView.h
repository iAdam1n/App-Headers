/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, ECImage;

@interface ECPostImageTileView : UIControl {

	UIImageView* _frameView;
	UIImageView* _imageView;
	UIImageView* _deleteIcon;
	UIImageView* _addIcon;
	ECImage* _adImage;

}

@property (nonatomic,retain) UIImageView * frameView;               //@synthesize frameView=_frameView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * deleteIcon;              //@synthesize deleteIcon=_deleteIcon - In the implementation block
@property (nonatomic,retain) UIImageView * addIcon;                 //@synthesize addIcon=_addIcon - In the implementation block
@property (nonatomic,retain) ECImage * adImage;                     //@synthesize adImage=_adImage - In the implementation block
-(ECImage *)adImage;
-(void)setAdImage:(ECImage *)arg1 ;
-(void)setFrameView:(UIImageView *)arg1 ;
-(void)setDeleteIcon:(UIImageView *)arg1 ;
-(UIImageView *)deleteIcon;
-(void)setImage:(id)arg1 withState:(int)arg2 ;
-(void)setAdImage:(id)arg1 withState:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(int)arg1 ;
-(UIImageView *)imageView;
-(UIImageView *)frameView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setAddIcon:(UIImageView *)arg1 ;
-(UIImageView *)addIcon;
@end
