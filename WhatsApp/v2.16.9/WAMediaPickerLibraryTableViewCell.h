/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface WAMediaPickerLibraryTableViewCell : UITableViewCell {

	BOOL _bottomBorderHidden;
	UILabel* _assetCountLabel;

}

@property (nonatomic,readonly) UILabel * assetCountLabel;                                      //@synthesize assetCountLabel=_assetCountLabel - In the implementation block
@property (assign,getter=isBottomBorderHidden,nonatomic) BOOL bottomBorderHidden;              //@synthesize bottomBorderHidden=_bottomBorderHidden - In the implementation block
+(id)cellWithReuseIdentifier:(id)arg1 ;
+(long long)preferredSeparatorStyle;
+(double)preferredHeight;
-(void)setBottomBorderHidden:(BOOL)arg1 ;
-(void)configureWithAssetCollection:(id)arg1 ;
-(id)assetCountLabelTextForCount:(unsigned long long)arg1 ;
-(void)updateWithAssetCount:(unsigned long long)arg1 ;
-(BOOL)isBottomBorderHidden;
-(UILabel *)assetCountLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
