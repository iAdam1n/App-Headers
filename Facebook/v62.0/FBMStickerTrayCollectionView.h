/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@class UIView;

@interface FBMStickerTrayCollectionView : UICollectionView {

	long long _stickerTrayCollectionViewType;
	UIView* _extraView;

}

@property (assign,nonatomic) long long stickerTrayCollectionViewType;              //@synthesize stickerTrayCollectionViewType=_stickerTrayCollectionViewType - In the implementation block
@property (nonatomic,retain) UIView * extraView;                                   //@synthesize extraView=_extraView - In the implementation block
-(void)setExtraView:(UIView *)arg1 ;
-(void)setStickerTrayCollectionViewType:(long long)arg1 ;
-(UIView *)extraView;
-(long long)stickerTrayCollectionViewType;
-(void)layoutSubviews;
@end
